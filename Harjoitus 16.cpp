//**************
//Tapio Pekkarinen
//Harjoitus 16
//23.10.2014
//Versio 1.1
/*Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
Tietueeseen talletetaan seuraavat tiedot: etunimi (merkkijono; C:n merkkitaulukko) sukunimi (merkkijono; C:n merkkitaulukko)
koulumatka (reaaliluku) osoite (merkkijono; C:n merkkitaulukko)
postinumero (merkkijono; C:n merkkitaulukko) kengannumero (kokonaisluku)
Ohjelma tulostaa lopuksi tietueen tiedot naytölle.*/

#include <iostream>
using namespace std;
#include <cstring>
struct kaikki
{
	char etunimi[20];
	int kengannumero;
	char sukunimi[15];
	float koulumatka;
	char osoite[30];
	int postinumero;

};
int main()
{
	
	kaikki i;
	cout << "Anna kaikki Etunimesi, kengannumero, sukunimi, koulumatkan pituus, osoite ja postinumero.""(Syotettyasi kysytyn tiedon, paina ENTER)";
	
	cin.get(i.etunimi, 20)
		>> ws >> i.kengannumero
		>> ws >> i.sukunimi
		>> ws >> i.koulumatka;
		 cin.get(i.osoite, 30)
		>> ws >> i.postinumero;
	cout << "Sukunimesi " << i.sukunimi << endl
		<< "Etunimet " << i.etunimi << endl
		<< "Osoite " << i.osoite << endl
		<< "Postinumero " << i.postinumero << endl
		<< "Kengannumero " << i.kengannumero << endl
		<< "Koulumatkan pituus " << i.koulumatka << "Km ";

	return 0;
