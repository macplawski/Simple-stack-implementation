#include <iostream>

using namespace std;


int Push(int val, int stos[], int &a) {
	a++;
	if (stos[a] = val)
		return 999;

	a--;
	return -1;
};


int PopEx(int *val, int stos[], int &a) {
	if (*val = stos[a])
	{
		a--;
		return 999;
	}
	return -2;

	/*
	Tutaj zaimplementuj operacj� pobierania ze stosu.
	Je�eli operacja udana zwr�� S_OK je�li nie zwr�� E_FAIL.
	 */
};


int Pop(int stos[], int &a) {
	int wierzcholek;
	if (wierzcholek = stos[a])
	{
		a--;
		return wierzcholek;
	}
	return -3;
	/*
	Tutaj zaimplementuj operacj� pobierania ze stosu.
	Je�eli operacja udana zwr�� pobran� warto�� je�li nie zwr�� -1.
	 */
};


int main()
{

	int b = 1;
	int *wsk = &b;
	int tab[10];
	int licznik = -1;
	int zmienna = Push(1, tab, licznik);
	zmienna = Push(2, tab, licznik);
	zmienna = Push(3, tab, licznik);
//	cout << "Push "<<tab[licznik]<<" "<<zmienna<<endl;

	for (int i = 0; i <= licznik; i++)
		cout << tab[i] << " ";
	cout << endl;
	zmienna = PopEx(wsk, tab, licznik);
	cout << "PopEx " << *wsk << " " << zmienna<<endl;
	zmienna = Pop(tab, licznik);
	cout << "Pop " <<  zmienna <<endl;


	for (int i = 0; i <= licznik; i++)
		cout << tab[i] << " ";
	return 0;
}