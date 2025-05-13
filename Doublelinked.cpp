// 4NIMBelakang_DoublelinkedList
#include <iostream>
using namespace std;

// membuat struktur untuk object double linkedList
struct Node {
    // deklarasi noMHS dan name untuk menampung data
    int noMHS;
    string name;
    // deklarasi pointer next dan pref untuk data sebelum dan sesudah
    Node*next;
    Node*prev;
};

// deklarasi pointer START dan pemberian nilai
Node*START = NULL;

// deklarasi prosedur addnote
void addnode() {

    // pembuatan node dan pemberian value untuk data noMHS dan name 
    Node *newNode = new Node(); // step 1 buat node baru
    cout << "\nEnter the roll number of the student : ";
    cin >> newNode->noMHS; // assign value to the data field of the new node
    cout << "\nEnter the same of the student : ";
    cin >> newNode->name; // Assign value to the data field of th

    // Insert the new node in the list
    // kondisi jika star == null atau noMHS node baru <= noMHS start
    if (START == NULL || newNode->noMHS <= START->noMHS) {
        // step 2: insert the new code at the beginning
        // kondisi jika star tidak kosong dan noMHS node baru sama dengan noMHS 
        if (START != NULL && newNode->noMHS == START->noMHS) {
            cout << "\033[31mDuplicate roll numbers not allowed\33[0m" << endl;
            return;
        }
        // if the list is empty, make the new node the start
        // jika list kosong, maka node nextnya adalah start
        newNode->next = START; // step 3: make the new node point to the  first node
        //kondisi jika start tidak memiliki nilai atau tidak kosong
        if (START != NULL) {
            START->prev = newNode; //step 4: make the first node point to
        }
        //memberi nilai prev = null dan start node baru
        newNode->prev = NULL; // step 5 : make the new node point to null
        START = newNode; //step 6 : make the new node the first node
    }
    // kondisi jika semua kondisi if tidak terpenuhi
    else {
        // insert the new node in the middle at the end
        // set nilai current = start dan nilai previous = Null
        Node *current = START; // step 1.a : start from the first node
        Node * previous = NULL; // step 1.b : previous node is null initially

        // looping selama current is null noMHS dari current lebih kecil dari
        while (current != NULL && current->noMHS < newNode->noMHS)
    }
}