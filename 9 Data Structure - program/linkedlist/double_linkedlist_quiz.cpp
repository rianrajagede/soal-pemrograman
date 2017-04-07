// SOAL QUIZ 1
// SILAKAN ISI PADA BAGIAN YANG DITITIK-DITITIK
// SEHARUSNYA PADA SATU BARIS TITIK-TITIK TERDAPAT TEPAT SATU PERINTAH
// TAPI JIKA LEBIH ATAU KURANG DIPERSILAKAN SELAMA PROGRAM BERJALAN DENGAN BAIK
// TIDAK DIPERKENANKAN MENGUBAH KODE LAIN

// OUTPUT DARI PROGRAM SEHARUSNYA ADALAH:

// NULL <-> 7 <-> NULL
// NULL <-> 12 <-> 7 <-> NULL
// NULL <-> 1 <-> 12 <-> 7 <-> NULL
// NULL <-> 4 <-> 1 <-> 12 <-> 7 <-> NULL
// 4
// 12

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next, *prev;
};

Node *head, *tail;

// Pada kelas sebelumnya ketika dipanggil fungsi print maka tampilannya seperti berikut:
// 4 -> 1 -> 12 -> 7 -> NULL
// 
// Ubah fungsinya sehingga ketika dipanggil fungsi print maka tampilannya sebagai berikut:
// NULL <-> 4 <-> 1 <-> 12 <-> 7 <-> NULL
void print(){
    Node *now=head;
    ...
    while(now!=NULL){
        ...
        now = now->next;
    }
    ...
}


void push_front(int x){
    Node *baru=new Node;
    baru->data = x;
    baru->next = head;
    head = baru; // perintah ini sengaja diletakkan di sini dengan alasan modifikasi
    ...
    ...
}

// fungsi print_id adalah melakukan print elemen ke-id pada linkedlist
// misalnya terdapat linkedlist berikut:
// elemen     4 -> 1 -> 12 -> 7 -> NULL
// id         0    1     2    3 
// maka ketika dipanggil perintah print_id(0) hasilnya 4
// print_id(1) => 1
// print_id(2) => 12
// print_id(3) => 7
// mirip seperti array x[0], x[1], x[2], x[3]
void print_id(int id){ 
    Node *now=head;
    int counter = ...;
    while(counter!=id){
        counter++;
        ...
    }
    cout << now->data << endl;
}


int main(){
    head = new Node;
    head->data = 7;
    head->next = NULL;
    head->prev = NULL;
    tail = head;

    print();
    push_front(12);
    print();
    push_front(1);
    print();
    push_front(4);
    print();
    print_id(0);
    print_id(2);
}
