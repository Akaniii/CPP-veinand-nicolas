// VEINAND-Nicolas.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;
// EXERCICE 1
//int main()
//{
  //  int entre;
    //std::cout << "Vous avez le choix entre deux destination\n" << endl;
    //std::cout << "destination n°1 : festival le roi Arthur\n" << endl;
    //std::cout << "destination n°2 : festival la reine Guenievre\n" << endl;
    //std::cout << "Tapez 1 ou 2" << endl;
    //cin >> entre;
    //if (entre==1) {
      //  std::cout << "Vous a au festival le roi Arthur\n" << endl;
    //}
    //if(entre==2)
    //{
      //  std::cout << "Vous allez au festival la reine Guenievre\n" << endl;
    //}
    //else
    //{
      //  std::cout << "wesh c'est 1 ou 2 faut pas mettre n'importe quoi dans la console\n" << endl;
    //}
//}

// EXERCICE 2
//int main()
//{
//    string entre;
//
//    std::cout << "Vous avez le choix entre deux destination\n" << endl;
//    std::cout << "destination n°1 : festival le roi Arthur\n" << endl;
//    std::cout << "destination n°2 : festival la reine Guenievre\n" << endl;
//    std::cout << "Tapez arthur ou guenievre" << endl;
//    cin >> entre;
//    if (entre == "arthur") {
//        std::cout << "Vous a au festival le roi Arthur\n" << endl;
//    }
//    if (entre == "guenievre")
//    {
//        std::cout << "Vous allez au festival la reine Guenievre\n" << endl;
//    }
//    else
//    {
//        std::cout << "wesh c'est arthur ou guenievre faut pas mettre n'importe quoi dans la console\n" << endl;
//    }
//
//
//}

 class lieu
{
public:

     string nom;
    string description;
    int difficulte;
    int dest1; // je n'arrive pas a mettre un tableau en attribut de la classe dcp je simplifie par deux variables car je ne veux pas rester bloquer
    int dest2;


};

void deplacement(){
    

 string entre;
 string dep;
 string rep;
 std::cout << "Vous avez le choix entre deux destination\n" << endl;
 std::cout << "destination n°1 : festival le roi Arthur\n" << endl;
 std::cout << "destination n°2 : festival la reine Guenievre\n" << endl;
 std::cout << "Tapez arthur ou guenievre" << endl;
 cin >> entre;
 if (entre == "arthur") {
     //std::cout <<  lieu::arthur::description <<endl; bon a la base je voulais appeler directement le string description de mon objet lieu nommé arthur mais je n'arrive pas a bien l'écrire. L'intention est là donc je vais une technique pas académique mais ça foncitonne


     std::cout << "Vous allez au festival le roi Arthur\n" << endl;
     std::cout << "La vengeance est un plat qui se mange sans sauce!\n" << endl;
     std::cout << "Bon c'était sympas maintenant on bouge !\n" << endl;
     std::cout << "Vous pouvez aller au festival de la coupe mulet ou au festival de la reine guenievre\n" << endl;
     std::cout << "Vous devez taper guenievre ou mulet\n" << endl;
     cin >> dep;
     if (dep == "guenievre") {
         std::cout << "Vous allez au festival de la reine guenievre\n" << endl;
         std::cout << "et bien moi une fois, j'ai pissé par la fenêtre\n" << endl;
         std::cout << "Bon c'était sympas maintenant on bouge !\n" << endl;
         std::cout << "il ne reste que le festival de la coupe mulet\n" << endl;
         std::cout << "Vous voulez y allez oui ou non?\n" << endl;
         cin >> rep;
         if (rep == "oui") {
             std::cout << "c'est le festival des beauf et de la coupe mulet, pas vraiment fun comme endroit\n" << endl;
         }
         if (rep == "non") {
             std::cout << "t'as raison de pas y aller";
         }
     }
         if (dep=="mulet") {
             std::cout << "Vous allez au festival de la coupe mulet\n" << endl;
             std::cout << "c'est le festival des beauf et de la coupe mulet, pas vraiment fun comme endroit\n" << endl;
             std::cout << "Bon c'était nyl maintenant on bouge !\n" << endl;
             std::cout << "il ne reste que le festival de la reine guenievre\n" << endl;
             std::cout << "Vous voulez y allez oui ou non?\n" << endl;
             cin >> rep;
             if (rep == "oui") {
                 std::cout << "Vous allez au festival de la reine guenievre\n" << endl;
                 std::cout << "et bien moi une fois, j'ai pissé par la fenêtre\n" << endl;
             }
             if (rep == "non") {
                 std::cout << "t'as raison de pas y aller";
             }
      }

     
}

 if (entre == "guenievre")
 {
     std::cout << "Vous allez au festival la reine Guenievre\n" << endl;
 }
 else
 {
     std::cout << "wesh c'est arthur ou guenievre faut pas mettre n'importe quoi dans la console\n" << endl;
 }
}


int main() {
    lieu mulet(string nom = "mulet", string description = "c'est le festival des beauf et de la coupe mulet, pas vraiment fun comme endroit", int difficulte = 19, int dest1 = 1, int dest2 = 2);
    lieu arthur(string nom = "arthur", string description = "La vengeance est un plat qui se mange sans sauce!", int difficulte = 1, int dest1 = 2, int dest2 = 19);
    lieu guenievre(string nom = "guenievre", string description = "et bien moi une fois, j'ai pissé par la fenêtre", int difficulte = 2, int dest1 = 1, int dest2 = 19);
    deplacement();

    //int const listedestination(18);
    //int destination[listedestination];
    //destination[0] = 1;
    //destination[1] = 2;
    //destination[2] = 3;
    //destination[3] = 4;
    //destination[4] = 5;
    //destination[5] = 6;
    //destination[6] = 7;
    //destination[7] = 8;
    //destination[8] = 9;
    //destination[9] = 10;
    //destination[10] = 11;
    //destination[11] = 12;
    //destination[12] = 13;
    //destination[13] = 14;
    //destination[14] = 15;
    //destination[15] = 16;
    //destination[16] = 17;
    //destination[17] = 18;
    //destination[18] = 19;
}
//pour l'exercice 4 j'aurai rangé mes lieux dans un tableau que j'aurai appelé lors des déplacements et j'aurai parcouru les différentes cases nécessaires a la réalisation de l'exercice 
// je n'ai pas eu le temps de terminer car je suis resté bloqué sur des erreurs qui m'ont perturbé.















































// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage
















































// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
