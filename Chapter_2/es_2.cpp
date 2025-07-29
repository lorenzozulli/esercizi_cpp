// What is the output of the following program?

#include<cstdlib>
#include<iostream>

using namespace std;

#define collaudo "questo è un collaudo"

int main(){
    char stringa[21]="esce la stringa.";
    cout<<collaudo<<endl;
    cout<<"Scriviamo di nuovo.\n";
    cout<<stringa<<endl;
    cout<<&stringa[8]<<endl;
    //system("PAUSE");
    return EXIT_SUCCESS;
}

/*
questo è un collaudo
Scriviamo di nuovo.
esce la stringa.
t -> ERRATO: stringa.
*/