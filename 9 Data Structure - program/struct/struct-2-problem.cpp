#include<iostream>
using namespace std;

int n_stock_item = 30;
int n_customer = 10;

struct Item{
    ...
};

Item item[50];

struct Customer{
    ...
};

Customer customer[20];


int main(){

    // baca input barang
    for(int i=0;i<n_stock_item;i++){
        ...
    }

    // baca belanjaan customer
    for(int i=0;i<n_customer;i++){
        ...
    }

    // print
    cout << endl << "TOTAL" << endl;
    for(int i=0;i<n_customer;i++){
        cout << ... << " : Rp" << ... << endl;
    }
    return 0;
}
