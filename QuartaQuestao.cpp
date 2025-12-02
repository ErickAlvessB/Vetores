#include <iostream>
using namespace std;

int main()
//
{
    int tamArr = 5;
    int arr[tamArr];

    for(int i = 0; i < tamArr; i++)
    {
        cout << "Digite um número: " << endl;
        cin >> arr[i];
    }

    for(int i = 0; i < tamArr; i++ )
    {
        int pos = i + 1;
        cout << "Número " << pos << ": " << arr[i] << endl; 
    }
}