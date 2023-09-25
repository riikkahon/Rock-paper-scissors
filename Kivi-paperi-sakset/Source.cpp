#include <iostream>
#include <time.h>
#include <Windows.h>

int main() {

	{
		SetConsoleCP(1252);
		SetConsoleOutputCP(1252);
		setlocale(LC_ALL, "�, �");
	}

	std::cout << "Tervetuloa peliin!\n";

	int voitot = 0, koneenVoitot = 0, koneenValinta = 0, kierrokset = 0;

	std::cout << "Kuinka monta kierrosta haluat pelata?";
	std::cin >> kierrokset;
	

	

	char valintaMerkkin�;
	int merkinKoodi;
	int kivi = 1, paperi = 2, sakset = 3;
	
	for (int kierros = 1; kierros <= kierrokset; kierros++)
	{
		std::cout << "\nKierros: " << kierros << "/" << kierrokset << std::endl;
		std::cout << "Sinun pisteesi: " << voitot << std::endl;
		std::cout << "Koneen pisteet: " << koneenVoitot << std::endl;

		std::cout << "Mik� on valintasi? (k=kivi, p=paperi, s=sakset)";
		std::cin >> valintaMerkkin�;


		if (valintaMerkkin� == 'k')
		{
			std::cout << "Valintasi on kivi";
			merkinKoodi = 1;
		}

		else if (valintaMerkkin� == 'p')
		{
			std::cout << "Valintasi on paperi";
			merkinKoodi = 2;
		}

		else if (valintaMerkkin� == 's')
		{
			std::cout << "Valintasi on sakset";
			merkinKoodi = 3;
		}



		srand(time(0));
		koneenValinta = rand() % 3 + 1;
		std::cout << "\nKoneen valinta on ";

		if (koneenValinta == 1) {
			std::cout << "kivi";
		}
		if (koneenValinta == 2) {
			std::cout << "paperi";
		}
		if (koneenValinta == 3) {
			std::cout << "sakset";
		}

		

		int pelaaja_voitti = 1, kone_voitti = -1, tasapeli = 0;

		if (merkinKoodi == 1 && koneenValinta == 3) {
			std::cout << "\nVoitit.";
			voitot++;
		}
		else if (merkinKoodi == 2 && koneenValinta == 1) {
			std::cout << "\nVoitit.";
			voitot++;
		}
		else if (merkinKoodi == 3 && koneenValinta == 2) {
			std::cout << "\nVoitit.";
			voitot++;
		}
		else if (merkinKoodi == koneenValinta) {
			std::cout << "\nTasapeli.";

		}
		
		else {
			std::cout << "\nTietokone voitti.";
			koneenVoitot++;
		}

		
	}

		if (voitot == koneenVoitot) {
			std::cout << "\nTulos on tasapeli.";
		}
		else if (voitot > koneenVoitot) {
			std::cout << "\nSin� voitit pelin.";
		}
		else if (voitot < koneenVoitot) {
			std::cout << "Kone voitti pelin.";
		}


	
	
}

