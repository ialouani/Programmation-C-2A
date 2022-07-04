#!/bin/bash
# Draw-box.sh : Dessine une boîte en utilisant des caractères ASCII.

#  Script de Stefano Palmeri, avec quelques modifications mineures par 
#+ l'auteur de ce document.
#  Modifications mineures suggérées par Jim Angstadt.
#  Utilisé dans le guide ABS avec sa permission.


######################################################################
###  doc de la fonction dessine_une_boite  ###

#  La fonction "dessine_une_boite" permet à l'utilisateur de dessiner une boîte
#+ dans un terminal.
#
#  Usage : dessine_une_boite LIGNE COLONNE HAUTEUR LARGEUR [COULEUR]
#  LIGNE et COLONNE représente la position de l'angle gauche en haut pour la
#+ boîte que vous dessinez.
#  LIGNE et COLONNE doivent être supérieurs à 0 et inférieurs aux dimensions
#+ actuelles du terminal.
#  HAUTEUR est le nombre de lignes de la boîte et doit être positif. 
#  HAUTEUR + LIGNE doit être inférieur à la hauteur actuelle du terminal. 
#  LARGEUR est le nombre de colonnes de la boîte et doit être positif.
#  LARGEUR + COLONNE doit être inférieur ou égale à la largeur actuelle du
#+ terminal.
#
# C'est-à-dire que si la dimension de votre terminal est de 20x80,
#  dessine_une_boite 2 3 10 45 est bon
#  dessine_une_boite 2 3 19 45 n'a pas une bonne HAUTEUR (19+2 > 20)
#  dessine_une_boite 2 3 18 78 n'a pas une bonne LARGEUR (78+3 > 80)
#
#  COULEUR est la couleur du cadre de la boîte.
#  Ce cinquième argument est optionnel.
#  0=noir 1=rouge 2=vert 3=tan 4=bleu 5=violet 6=cyan 7=blanc.
#  Si vous passez de mauvais arguments à la fonction,
#+ elle quittera avec le code 65
#+ et aucun message ne sera affiché sur stderr.
#
#  Effacez le terminal avant de dessiner une boîte.
#  La commande clear n'est pas contenue dans la fonction.
#  Cela permet à l'utilisateur de dessiner plusieurs boîtes, y compris en les
#  entre-mêlant.

###  fin de la doc sur la fonction dessine_une_boite  ### 
######################################################################

dessine_une_boite(){

#=============#
HORZ="-"
VERT="|"
CARACTERE_DU_COIN="+"

MINARGS=4
E_MAUVAISARGS=65
#=============#


if [ $# -lt "$MINARGS" ]; then       # Si moins de quatre arguments, quitte.
    exit $E_MAUVAISARGS
fi

# Recherche de caractères non numériques dans les arguments.
# Cela pourrait être mieux fait (exercice pour le lecteur ?).
if echo $@ | tr -d [:blank:] | tr -d [:digit:] | grep . &> /dev/null; then
   exit $E_MAUVAISARGS
fi

HAUTEUR_BOITE=`expr $3 - 1`   #  -1, correction nécessaire car le caractère
                              #+ de l'angle, "+", fait partie à la fois de
LARGEUR_BOITE=`expr $4 - 1`   #+ la hauteur et de la largeur.
T_LIGNES=`tput lines`         #  Définit les dimensions actuels du terminal
T_COLONNES=`tput cols`        #+ en lignes et colonnes.
         
if [ $1 -lt 1 ] || [ $1 -gt $T_LIGNES ]; then    #  Commence la vérification des
   exit $E_MAUVAISARGS                           #+ arguments.
fi
if [ $2 -lt 1 ] || [ $2 -gt $T_COLONNES ]; then
   exit $E_MAUVAISARGS
fi
if [ `expr $1 + $HAUTEUR_BOITE + 1` -gt $T_LIGNES ]; then
   exit $E_MAUVAISARGS
fi
if [ `expr $2 + $LARGEUR_BOITE + 1` -gt $T_COLONNES ]; then
   exit $E_MAUVAISARGS
fi
if [ $3 -lt 1 ] || [ $4 -lt 1 ]; then
   exit $E_MAUVAISARGS
fi                                 # Fin de la vérification des arguments.

plot_char(){                       # Fonction à l'intérieur d'une fonction.
   echo -e "\E[${1};${2}H"$3
}

echo -ne "\E[3${5}m"               #  Initialise la couleur du cadre de la boîte
                                   #+ si elle est définie.

# start drawing the box

compteur=1                                       #  Dessine les lignes verticales
for (( r=$1; compteur<=$HAUTEUR_BOITE; r++)); do #+ en utilisant la fonction
  plot_char $r $2 $VERT                          #+ plot_char.
  let compteur=compteur+1
done 

compteur=1
c=`expr $2 + $LARGEUR_BOITE`
for (( r=$1; compteur<=$HAUTEUR_BOITE; r++)); do
  plot_char $r $c $VERT
  let compteur=compteur+1
done 

compteur=1                                       #  Dessine les lignes horizontales
for (( c=$2; compteur<=$LARGEUR_BOITE; c++)); do #+  en utilisant la fonction
  plot_char $1 $c $HORZ                          #+ plot_char.
  let compteur=compteur+1
done 

compteur=1
r=`expr $1 + $HAUTEUR_BOITE`
for (( c=$2; compteur<=$LARGEUR_BOITE; c++)); do
  plot_char $r $c $HORZ
  let compteur=compteur+1
done 

plot_char $1 $2 $CARACTERE_DU_COIN           # Dessine les angles de la boîte.
plot_char $1 `expr $2 + $LARGEUR_BOITE` $CARACTERE_DU_COIN
plot_char `expr $1 + $HAUTEUR_BOITE` $2 $CARACTERE_DU_COIN
plot_char `expr $1 + $HAUTEUR_BOITE` `expr $2 + $LARGEUR_BOITE` $CARACTERE_DU_COIN

echo -ne "\E[0m"               #  Restaure les anciennes couleurs.

P_ROWS=`expr $T_LIGNES - 1`    #  Place l'invite au bas du terminal.

echo -e "\E[${P_ROWS};1H"
}      


# Maintenant, essayons de dessiner une boîte.
clear                                # Efface le terminal.
R=2      # Ligne
C=3      # Colonne
H=10     # Hauteur
W=45     # Largeur
col=1    # Couleur (rouge)
dessine_une_boite $R $C $H $W $col   # Dessine la boîte.

exit 0



#La liste terminologique dite conventionnelle des couleurs:
## Colors
###_GREY=$'\x1b[30m'
###_RED=$'\x1b[31m'
###_GREEN=$'\x1b[32m'
###_YELLOW=$'\x1b[33m'
###_BLUE=$'\x1b[34m'
###_PURPLE=$'\x1b[35m'
###_CYAN=$'\x1b[36m'
###_WHITE=$'\x1b[37m'
