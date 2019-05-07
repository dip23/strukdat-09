/*
Nama         : Difa Bagasputra M
NPM          : 140810180057
Program      : Reverse Word (Linked List)
Tanggal Buat : 7 Mei 2019
*/

#include <iostream>
using namespace std;

struct List
{
    char isi;
    List* next;
};

typedef List* pointer;
typedef pointer Stack;

void createStack (Stack& TOP)
{
    TOP = NULL;
}

void createElemt(pointer& pBaru){
	pBaru=new List;
	cout<<"Input : ";cin>>pBaru->isi;
	pBaru->next=NULL;
}

void push(Stack& Top, pointer pBaru){
    if (Top==NULL) 
        Top=pBaru;
    else { 
        pBaru->next=Top;
        Top=pBaru;
    }
}

void Pop(Stack& Top, pointer& pHapus){
    if (Top==NULL){
        cout<<"Stack kosong "<<endl;
        pHapus=NULL;
    }
    else if (Top->next==NULL){
        pHapus=Top;
        Top=NULL;
    }
    else {
        pHapus=Top;
        Top=Top->next;
        pHapus->next=NULL;
    }
}

int main()
{
    pointer p,ph;
    Stack s;
    int n;
    createStack(s);
    cout<<"Panjang Kata : ";cin>>n;
    for(int i=0;i<n;i++){
        createElemt(p);
        push(s,p);
    }
    
    cout<<"Reverse : ";
    for(int i=0;i<n;i++){
        Pop(s,ph);
        cout<<ph->isi;
    }
}