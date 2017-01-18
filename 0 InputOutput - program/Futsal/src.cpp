#include<iostream>
using namespace std;

int main()
{
    int sisiKubus, banyakKubus;
    int volumKubusKecil, volumTotal;

    cin >> sisiKubus >> banyakKubus;

    volumKubusKecil = sisiKubus*sisiKubus*sisiKubus;
    volumTotal = volumKubusKecil*banyakKubus*banyakKubus*banyakKubus;

    cout << volumTotal << endl;

    return 0;
}
