#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int wystapienia[256] = {0};

    string line;
    ifstream file;
    file.open ("file_1.txt");
    if (file.is_open())
    {
        while (getline (file,line))
        {
            for (int i=0; i<line.length(); i++)
            {
                wystapienia[line[i]]++;
            }
        }
        file.close();
    } else
        cout<<"znwou sie nie wczytal plik, chce umrzec";

    for(char c = '0'; c <= '9'; c++)
    {
        cout << "znak " << c << " wystapil " << wystapienia[c] << " razy." << endl;
    }

    for(char c = 'a'; c <= 'f'; c++)
    {
        cout << "znak " << c << " wystipil " << wystapienia[c] << " razy." << endl;

    }
    return 0;
}

