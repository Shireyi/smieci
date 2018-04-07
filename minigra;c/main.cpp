#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int liczba, strzal, ile_prob=0;
int main()
{
    cout << "Pomyslalem sobie liczbe z zakresu 1-100, powodzenia" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;


    while(strzal != liczba)
    {ile_prob++;
        cout<<"zgadnij jaka:"<<endl;
        cout<<ile_prob<<"proba";
        cout<<"     "<<endl;
        cin>>strzal;
        if(strzal==liczba)
         {
             cout<<"Przypadkowo Ci sie udalo frajerze"<<endl;
            cout<<"W probie : "<<ile_prob<<endl;

         }
        if (strzal<liczba)
            cout<<"To troche za malo piekny kawalerze"<<endl;
        else if(strzal>liczba)
            cout<<"No to poszalales z tym zgadywaniem"<<endl;



    }system("pause");
    return 0;
}
