/*
Nama         : Difa Bagasputra M
NPM          : 140810180057
Program      : Reverse Word (Array)
Tanggal Buat : 7 Mei 2019
*/

#include <iostream>
using namespace std;

const int maxElemen = 255;
struct Stack
{
    char isi[maxElemen];
    int TOP;
};

Stack s;

void createStack (Stack& S)
{
    S.TOP = -1;
}

void push(Stack& S, char elemenBaru) 
{
    if (S.TOP == maxElemen-1){
        cout<<"Tumpukan sudah penuh"<<endl;
    }
    else{
        S.TOP=S.TOP + 1;
        S.isi[S.TOP] = elemenBaru;
    }
}

void pop(Stack& S, char& elemenHsl)
{
    if (S.TOP < 0) {
        cout<<"Tumpukan sudah kosong "<<endl;
    }
    else {
        elemenHsl= S.isi[S.TOP];
        S.TOP=S.TOP - 1;
    }
}

void print(Stack S){
    if(S.TOP<0){
        cout<<"Kosong";
    }else{
        for(int i=S.TOP;i>-1;i--){
            cout<<S.isi[i];
        }
    }
}

int main()
{
    Stack s;
    int n;
    char a;
    createStack(s);
    cout<<"Panjang Kata : ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"input :";cin>>a;
        push(s,a);
    }
    
    cout<<"Reverse : ";
    for(int i=0;i<n;i++){
        cout<<s.isi[s.TOP];
        pop(s,a);
    }
}