#include<iostream>

using namespace std;

class Node
{
    public:
        int noMhs;
        Node *next;
};

class LinkedList
{
        Node *START;

        public:
        LinkedList()
        {
            START = NULL;
        }

        void addNote()
        {
            int nim;
            cout << "Masukkan Nomor Mahasiswa: ";
            cin >> nim;

            Node *nodeBaru = new Node;
            nodeBaru->noMhs = nim;

            if (START == NULL || nim <=  START->noMhs)
            {
                if((START != NULL) && (nim == START->noMhs))
                {
                    cout << "\nDuplikasi noMhs tidak diijinkan\n" << endl;
                    return;
                }
                nodeBaru->next = START;
                START = nodeBaru;
                return;
               
            }
            Node *previous = START;
            Node *current = START->next;
            while (current != NULL && current ->noMhs){
                if (nim == current->noMhs)
                {
                    cout << "\nDuplikasi noMhs tidak diijinkan\n" << endl;
                    return;
                }
                previous = current;
                current = current->next;
            }
            nodeBaru->next = current;
            previous->next = nodeBaru;
        }
        bool listEmpty()
        {
            return START == NULL;
        }

    
};

