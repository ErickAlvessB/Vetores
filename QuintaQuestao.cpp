#include <iostream>
using namespace std;

int main()
{
    int tamArr = 5;
    int arr[tamArr];

    for(int i = 0; i < tamArr; i++)
    {
        cout << "Digite um número: " << endl;
        cin >> arr[i];
    }

    int acc = 0;
    for(int i = 0; i < tamArr; i++ )
    {
        acc = acc + arr[i];
    }

    double media = (double) acc / tamArr;

    cout << "Média : " << media << endl;
    cout << "Soma: " << acc << endl;
    
    return 0;
}