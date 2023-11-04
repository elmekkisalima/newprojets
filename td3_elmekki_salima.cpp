#include <iostream>
using namespace std;
        //TD3
//EXERCICE1
/*
class complexe{
double imaginaire;
double reel;

 public:
complexe (double r, double i):

	reel(r),imaginaire(i){}
	int operator+(complexe);
	int operator-(complexe);
	int operator*(complexe);
	int operator/(complexe);
};
//addition
int complexe::operator +(const complexe&autre){
	double reel_v = reel + autre.reel ;
     double	imaginaire_v = imaginaire + autre.imaginaire;
		return complexe (reel_v , imaginaire_v);
}
//soustraction
int complexe::operator -(const complexe & autre ){
	double	reel_v = reel - autre.reel ;
	 double imaginaire_v = imaginaire - autre.imaginaire;
		return complexe (reel_v , imaginaire_v);
}
//multiplaction
int complexe::operator*(const complexe &autre){
	double	reel_v = reel * autre.reel ;
	  double imaginaire_v = imaginaire * autre.imaginaire;
		return complexe (reel_v , imaginaire_v);
}
//division
int complexe::operator/(const complexe & autre ){
	double denominateur = autre reel * autre reel +autre imaginaire * autre iamginaire;
	double reel_v = (reel * autre.reel + imaginaire * autre.imaginaire)/denominateur;
	double imaginaire_v =(imaginaire * autre.reel - reel*  autre.imaginaire)/denominateur;
	return complexe (reel_v,imaginaire_v);	
}
//affichage
void afficher(){
	cout <<reel<<"+"<<"i"<<imaginaire <<"\n";
}

int main() {
	complexe n1;
	complexe n2;
		int choix;
	cout <<"entrez la partie reelle du premier nombre complexe : ";
	cin>>n1.reel;
	cout <<"entrez la partie imaginaire de premier nombre complexe : ";
	cin>>n1.imaginaire;
	cout <<"entrer la partie reelle de deuxieme nombre complexe : ";
	cin>>n2.reel;
	cout <<"entre la partie imaginaire de deuxieme nombre complexe : ";
	cin>>n2.imaginaire;
		//menu
	cout<<"operations disponibles \n";
	cout<<"1-addition \n";
	cout<<"2-soustraction\n";
	cout<<"3-multiplication \n";
	cout<<"4-division \n";
	cout<<"choisissez un nombre pour l'operation \n";
	cin>>choix;
		Complexe res(0,0);
	
	 switch(choix){
	 	case 1 :
	 		res=n1+n2;
	 		break;
	 	case 2 :
	 		res=n1-n2;
	 		break;
	 	case 3 :
	 		res=n1*n2;
	 		break;
	 	case 4:
	 		res=n1/n2;
	 		break;
	 	default :
	 		cout<<"operation introuvable \n";
	 		
	 	}
	 		
	 cout <<"reultat de choix de menu :\n";
	 res.afficher();
	
	return 0;
}
*/
//EXERCICE2
/*
#include<list>
#include<iterator>
//TRI A BULLE
void triAbulle (const list<int>&liste){
	int m=liste.size();
	bool echang;
	list<int>::iterator it;
	do{
		echang=false;
		for(it=liste.begin();it<m;it++){
			if (liste[it]>liste[it+1])
			swap(liste[it],liste[it+1])
			echang=true;
		}
		
	}while(echang);
}
//TRI PAR SELECTION
void triselection(const list<int>&liste){
list<int> ::iterator it;
list<int> ::iterator itr;
for(it=liste.begin();it<iste.size()-1;it++){
	int min_ind=it;
	 for (itr=it+1;itr<liste.size();itr++){
	 	if (liste [itr]<liste[min_ind])
	 	  min_ind=itr;
	 swap (liste[min_ind],liste[it]);
	 }	   
}
}
//TRI PAR INSERTION 
void triParinsertion (const list<int>&liste){

list<int> ::iterator it;
list<int> ::iterator itr;
for(it=liste.begin()+1;it<iste.size();it++){
	int tmp=liste[it];
	int itr=it-1;
	while(tmp<liste[itr]&&itr>=0){
	  liste[itr+1]=liste[itr];
	  itr--;
	  
	}
    	liste[itr+1]=tmp;
 }
}
int main(){
	lis<int>liste;
	list<int>::iterator it;
	int n,num;
	cout<<"entrez le nombre total des entiers "<<endl;
	cin>>n;
	cout<<"saisir les entiers un pae un pour remplir la liste \n";
	 for(it=liste.begin();it<liste.size();it++){
	 	cin>>num;
	 	liste.puch_back(num);
	 }
	//afficher l Liste avant le tri
	for(it=liste.begin();it!=liste.end();++it){
		cout<<" \t "<<*it;
	}
	
	//tri a bulle
	list<int> ::listebulle= liste;
	triAbulle(listebulle);
		
		for(it=listebulle.begin();it!=listebulle.end();++it){
		cout<<" \t "<<*it;
	}

//tri par selection
	list<int> ::listeselection= liste;
	triselection(listeselection);
   		for(it=listeselection.begin();it!=listeselection.end();++it){
		cout<<" \t "<<*it;
	}
	//tri par insertion
		list<int> ::listeInsertion= liste;
		triParinsertion(listeInsertion);
			for(it=lisInsertion.begin();it!=listeInsertion.end();++it){
		cout<<" \t "<<*it;
	}
	return 0;
}
*/
//EXERCICE3
/*
#include <iostream>;
#include<list>;

using namespace std;
struct Personne {
    string nom;
    string prenom;
    int age;
};
bool comparaisonPersonnes(const Personne& personne1, const Personne& personne2) {
    if (personne1.nom != personne2.nom) {
        return personne1.nom < personne2.nom;
    }
    return personne1.prenom < personne2.prenom;
}
int main(){
list<personne> listpersn;
personne p;
while(true){
cout<<"entrer le nom de personne ou taper fin pour terminer \n";
cout<<"entrer le nom de personne\n";
cin>>p.nom;
cout<<"entrer le prenom de personne \n";
cin>>p.prenom;
cout<<"entrer l'age \n";
cin>>p.age;
if(p.nom=="fin")
break;

listpersn.puch_back(p);

sort(listpersn.begin(),listpersn.end(),comparaisonpersonnes())	;
	
	cout<<"liste triee de personnes \n";
	  for (const Personne& p : listPersn) {
        cout << "Nom : " << p.nom << ", Prénom : " << p.prenom << ", Âge : " << p.age << "\n";
    }
    return 0;
    	
}
*/
//EXERCICE4
/*
#include<iostream>
#include<set>;
#include<vector>
#include<list>
#include<iterator>;
using namespace std;


bool rechercheSet(const set<int>& mySet, int valARechercher) {
    
    
    auto it = mySet.find(valARechercher);


    return it != mySet.end();
    //TEMPLATE
    
    template <typename InputIterator, typename T>
    bool findvalue(InputIterator begin, InputIterator end, const T& value) {
    for (auto it = begin; it != end; ++it) {
        if (*it == value) {
            return true;
        }
    }
    return false;
}


    
    int main() {
    	 set<int> mySet;

    for (int i = 1; i <= 100; ++i) {
        mySet.insert(i);
    }

    // afficahge de myset
    for (int value : mySet) {
        cout << value << " ";
    }

    int valARechercher ;
    bool resultat = rechercheSet(mySet, valARechercher);

    if (resultat) {
        cout << "La valeur " << valARechercher << " a été trouvée dans le set." << endl;
    } else {
        cout << "La valeur " << valARechercher << " n'a pas été trouvée dans le set." << endl;
    }
      // Exemple d'appel sur un set
    
    
    bool result = findValue(mySet.begin(), mySet.end(), valARechercher);
    cout << "La valeur " << valARechercher << " est trouve dans le set : " << result <<endl;

    
    
   
    
    // Exemple d'appel sur un vecteur de string
    vector<string> myVector = {"info", "java", "programme"};
    string valtofind = "info";
    bool result =findValue(myVector.begin(), myVector.end(), valtofind);
    cout << "La valeur " <<valtofind<<"est trouve dans le vecteur "<<result <<endl;

    // Exemple d'appel sur une liste d'entiers
    list<int> myList = {0, 11, 76, 4};
    int valuetofind = 11;
    bool result= findvalue(myList.begin(), myList.end(), valuetofind);
    cout << "La valeur " << valuetofind << " est trouve dans la liste : " << result << endl;

    return 0;
}
  */  
//EXERCICE 5
/*
#include <iostream>
using namespace std;
class Test{
public:
static int tableau[] ;
public :
static int division(int indice, int diviseur){
	if(diviseur==0){
		throw"Attemptedd to divise by zero!";
	}
return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() {
int x, y;
cout << "Entrez l’indice de l’entier à diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;
cout << "Le résultat de la division est: "<< endl;
try{

cout <<Test::division(x,y) << endl;

}catch(const char *d){
	cout<< d <<endl;
}

return 0; }
*/
//EXERCICE 8
/*
#include <iostream>
using namespace std;
template<class T> T carre(T &a){
	T result = a*a;
	return result;
}
int main(){
	int c;
	cout <<"saisir la valeur de c \n";
	cin>>c;
	
	cout <<" le carre de c est : "<< carre(c);
return 0;	
}

*/
//EXERCICE 9
/*
On a défini la Template de classes suivant :
template <class T> class point
{ T x, y ; // coordonnees
public :
point (T abs, T ord) { x = abs ; y = ord ; }
void affiche () ;
} ;
template <class T> void point<T>::affiche ()
{ cout << "Coordonnees : " << x << " " << y << "\n" ;
}
a. Que se passe-t-il avec ces instructions :
point <char> p (60, 65) ;
p.affiche () ;
//dans ce programme on a une classe de type generique T ,  si on le passe un type char et on initialise l'objet p par des 
//entiers ,ces entiers seront convertis en caracters .
b. Comment faut-il modifier la définition de notre patron pour que les instructions
précédentes affichent bien :
Coordonnees : 60 65
//pour eviter cette confusion on peut definir la classe'point' par un typr <int> pour accepter des valeurs numeriques au lieu de<char>
point <int> p (60 ,50);
*/

//EXERCICE 10
//quand on apelle la fonction f() le programme accede a la classe 'A' d'objet 'a' qui a comme attribut la valeur 1 
//ce qui mene a la creation  d'une exception d'un objet 'er' de class 'erreur' ,et cette exception sera capture dans le main()
//et enfin le programme va afficher le resulta suivant:
//"dans main:999" et "suite main" 


//EXERCICE 7
/*
les resultas de programme sont les suivants:
	**construction objet A: 1   1
	**construction objet B : 1  0,0
	
   **construction objet c : 3   3 

*/












	

