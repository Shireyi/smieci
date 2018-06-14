#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;
//ja naprawdê nie umiem przepraszam
//kiedyœ sie naucze prosze na to nie patrzeæ
#define ILOSC_P 5

string temat, nick;
string tresc[ILOSC_P];
string odpA[ILOSC_P], odpB[ILOSC_P], odpC[ILOSC_P], odpD[ILOSC_P];
string poprawna[ILOSC_P];
string odpowiedz;
int punkty=0;

int main()
{
    int nr_linii=1;
    string linia;
    int nr_pytania=0;

    fstream plik;
    plik.open("test.txt",ios::in);

    if (plik.good()==false)
    {
        cout<<"no pospulo sie no, nie ma .txt";
        exit(0);
    }

    while(getline(plik,linia))
    {
        switch(nr_linii)
        {
            case 1: temat=linia;                     break;
            case 2: nick=linia;                      break;
            case 3: tresc[nr_pytania] = linia;       break;
            case 4: odpA[nr_pytania] = linia;        break;
            case 5: odpB[nr_pytania] = linia;        break;
            case 6: odpC[nr_pytania] = linia;        break;
            case 7: odpD[nr_pytania] = linia;        break;
            case 8: poprawna[nr_pytania] = linia;    break;
        }

        if (nr_linii==8) {nr_linii=2; nr_pytania++;}
        nr_linii++;
    }

    plik.close();



	int kolejka[ILOSC_P];
	for (int i = 0; i <= (ILOSC_P - 1); i++)
	{
		kolejka[i] = i;
	}
	random_shuffle(&kolejka[0], &kolejka[ILOSC_P]);

    for (int i=0; i<=(ILOSC_P-1); i++)
    {
        cout<<endl<<tresc[kolejka[i]]<<endl;
        cout<<"A. "<<odpA[kolejka[i]]<<endl;
        cout<<"B. "<<odpB[kolejka[i]]<<endl;
        cout<<"C. "<<odpC[kolejka[i]]<<endl;
        cout<<"D. "<<odpD[kolejka[i]]<<endl;

        cout<<"Twoja odpowiedz: ";
        cin>>odpowiedz;

        transform(odpowiedz.begin(), odpowiedz.end(), odpowiedz.begin(), ::tolower);

        if (odpowiedz==poprawna[kolejka[i]])
        {
            cout<<"pieknie wspaniale masz punkt"<<endl;
            punkty++;
        }
        else if (odpowiedz == "a" || odpowiedz == "A" || odpowiedz == "b" || odpowiedz == "B" || odpowiedz == "c" || odpowiedz == "C" || odpowiedz == "d" || odpowiedz == "D")
			cout<<"no nie za bardzo, poprawna: "<<poprawna[kolejka[i]]<<endl;
		else
		{
			cout << "nie wydurniaj sie, wpisz odpowiedz [A, B, C lub D]"<< endl;
			i--;
		}

    }

    cout<<"koniec, wszyscy umrzemy. Zdobyte punkty: "<<punkty;

    return 0;
}
