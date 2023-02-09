#ifndef _MY_LIB_HPP_
#define _MY_LIB_HPP_

// TP1

/**
 * @fn void TP1_exo1 ()
 * @brief Premier exercice du TP1 qui demande à l'utilisateur son prénom, son nom ainsi que son âge puis affiche un message en fonction de l'âge spécifié
 * 
 */
void TP1_exo1 ();

/**
 * @fn void TP1_exo2 ()
 * @brief Exercice du TP1 qui définit un nombre comme étant impair ou pair
 * 
 */
void TP1_exo2();

/**
* @fn fonction comparative
* @brief Boolean permettant de savoir si le nombre choisit est pair ou impair
*
*/
bool estPair(int x);

/**
* @fn void TP1_exo3a ()
* @brief n fois afficher la ligne 
*/
void TP1_exo3a();

/**
* @fn fonction énumérative
* @brief methode d'affichage des lignes
*/
void afficherLigne();

/**
* @fn void TP1_exo3b ()
* @brief n fois afficher la ligne avec le caractère et le nombre de caratères choisis 
*/
void TP1_exo3b();

/**
* @fn multiplicateur
* @brief méthode permettant de choisir le nombre de caractères par lignes 
*/
void afficherLigneChoix(char caract, int nb);

/**
* @fn void TP1_exo5();
* @brief exercice permettant de determiner si une année est  bissextile ou pas 
*/
void TP1_exo5();

bool estBissexstile(int x);
#endif //_MY_LIB_HPP_

