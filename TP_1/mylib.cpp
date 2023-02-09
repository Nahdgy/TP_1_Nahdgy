#include <iostream>
#include <string>
#include "mylib.hpp"

void TP1_exo1 ()
{
    std::string name, surname; // ""
    int age = 0;
    
    std::cout << "Donnez votre nom : ";
    std::cin >> name;
    std::cout << "Donnez votre prénom : ";
    std::cin >> surname;
    std::cout << "Donnez votre âge : ";
    std::cin >> age;

    std::cout << "Bonjour " << surname << " " << name << " !" << std::endl;

    if(age < 18)
    {
        std::cout << "Vous êtes encore mineur !" << std::endl;
    } else if ( age >= 18 && age < 35) {
        std::cout << "Vous êtes un jeune adulte !" << std::endl;
    } else if (age >= 35 && age < 64 )
    {
        std::cout << "Tu t'approche de l'âge d'or mais t'auras pas encore ta retraite." << std::endl;
    } else {
        std::cout << "Je ne sais pas quel âge tu as, mais soit t'existe pas soit t'es super vieux." << std::endl;
    }
}

void TP1_exo2()
{
     int nombre = 0;
    
    std::cout << "Donnez votre nombre : ";
    std::cin >> nombre;

    if (estPair(nombre))
    {
        std::cout << "C'est pair" << std::endl;   
    }
    else
    {
        std::cout << "C'est impair" << std::endl;   
    }
}
bool estPair(int x)
{
    return x % 2 == 0;
}
void TP1_exo3a()
{
    int n = 0;
    std::cout << "Saisir le nombre entier :";
    std::cin >> n;
   for(int i = 0; i < n; i++)
    {
       afficherLigne();
    }
}
void afficherLigne()
{
    std::cout << "**********" << std::endl;   
}
void TP1_exo3b()
{
    int n = 0;
    int nbChar = 0;
    char caract = '*';

    std::cout << "Saisir le nombre entier :"<< std::endl;
    std::cin >> n;
    std::cout << "Saisir le caractère:" << std::endl;
    std::cin >> caract;
    std::cout << "Saisir le nombre caractère:" << std::endl;
    std::cin >> nbChar;

    for(int i = 0; i < nbChar; i++)
    {
        afficherLigneChoix(caract, nbChar);    
    }
}
void afficherLigneChoix(char caract, int nb)
{
    for (int i = 0; i < nb; i++)
    {
        std::cout << caract;
    }
    std::cout << std::endl;
}

void TP1_exo5()
{
    int annee = 0;

    std::cout << "Saisir votre "<< std::endl;
    std::cin >> annee;
     if (estBissexstile(annee))
    {
        std::cout << "C'est bissexstile" << std::endl;   
    }
    else
    {
        std::cout << "C'est r" << std::endl;   
    }
}
bool estBissexstile(int x)
{
return x % 4 == 0 && x % 400 == 0 && x % 100 != 0;
}


