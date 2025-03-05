VARIABLES liste : TABLEAU[1..50] DE NOMBRE i, j, temp : NOMBRE
DEBUT_ALGORITHME
// G�n�ration des 50 nombres al�atoires
POUR i DE 1 A 50 FAIRE liste[i] ? ENTIER(AL�ATOIRE * 1000) + 1
FIN_POUR
// Tri par s�lection
POUR i DE 1 A 49 FAIRE
POUR j DE i+1 A 50 FAIRE
SI liste[i] > liste[j] ALORS temp ? liste[i]
liste[i] ? liste[j] liste[j] ? temp
FIN_SI
FIN_POUR
FIN_POUR
// Affichage de la liste tri�e
POUR i DE 1 A 50 FAIRE
AFFICHER liste[i]
FIN_POUR
FIN_ALGORITHME


V�rifi� si un nombre est un palindrome
VARIABLES nombre, inverse, temp : NOMBRE
DEBUT_ALGORITHME
// Lecture du nombre LIRE nombre temp ? nombre inverse ? 0
// Calcul de l'inverse
TANT_QUE temp > 0 FAIRE inverse ? inverse * 10 + (temp % 10) temp ? ENT(temp / 10)
FIN_TANT_QUE
// V�rification du palindrome
SI nombre = inverse ALORS
AFFICHER "Le nombre est un palindrome."
SINON
AFFICHER "Le nombre n'est pas un palindrome." FIN_SI
FIN_ALGORITHME


Le pgcd et PPCM
VARIABLES a, b, temp, pgcd, ppcm : NOMBRE
DEBUT_ALGORITHME
// Lecture des deux nombres
LIRE a, b
// Sauvegarde des valeurs initiales
tempA ? a tempB ? b
// Calcul du PGCD par l'algorithme d'Euclide
TANT_QUE b ? 0 FAIRE temp ? b b ? a % b
a ? temp
FIN_TANT_QUE pgcd ? a
// Calcul du PPCM ppcm ? (tempA * tempB) / pgcd
// Affichage des r�sultats
AFFICHER "Le PGCD est ", pgcd
AFFICHER "Le PPCM est ", ppcm
FIN_ALGORITHME


Liste d'attente
VARIABLES file : TABLEAU DE CHA�NE choix : ENTIER client : CHA�NE
DEBUT_ALGORITHME
// Initialisation de la file d'attente vide file ? TABLEAU_VIDE
REPETER
// Affichage du menu
AFFICHER "Menu :"
AFFICHER "1. Ajouter un client"
AFFICHER "2. Servir un client"
AFFICHER "3. Afficher la file"
AFFICHER "4. Quitter"
AFFICHER "Entrez votre choix :"
LIRE choix
SELON choix FAIRE CAS 1:
// Ajouter un client � la file
AFFICHER "Entrez le nom du client :"
LIRE client
AJOUTER_EN_QUEUE(file, client)
AFFICHER client & " a �t� ajout� � la file."
FIN_ALGORITHME



 Phyton import random
def jeu_deviner_nombre():
# G�n�rer un nombre al�atoire entre 0 et 100
 nombre_a_deviner = random.randint(0, 100)
# Demander � l'utilisateur de deviner
 le nombre essai = int(input("Devinez un nombre entre 0 et 100 : "))
# V�rifier si l'utilisateur a devin� correctement
 if essai == nombre_a_deviner:
print("Vous avez gagn� le jeu !") else: print(f"Game over. Le nombre �tait {nombre_a_deviner}.")

