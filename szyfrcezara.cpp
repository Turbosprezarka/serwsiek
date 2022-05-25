#include<iostream>

using namespace std;

void szyfruj(int klucz, char tab[])
{

	if (!(klucz >= -26 && klucz <= 26))
	{
		cout << "zly zakres";
		return;
	}
	int dl = strlen(tab);

	if (klucz >= 0)
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab[i] + klucz <= 'z')
			{
				tab[i] += klucz;
			}
			else
			{
				tab[i] = tab[i] + klucz - 26;
			}
		}
	}
	else
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab[i] + klucz >= 'a')
			{
				tab[i] += klucz;
			}
			else
			{
				tab[i] = tab[i] + klucz + 26;
			}
		}
	}

	cout << "WYNIK: " << tab;
}


int main()
{
	char tab[100];
	int klucz;

	cout << "Podaj wyraz: ";
	cin >> tab;

	cout << "Podaj klucz " << "\nPrzedzial: [-26,26]: ";
	cin >> klucz;

	szyfruj(klucz, tab);

}