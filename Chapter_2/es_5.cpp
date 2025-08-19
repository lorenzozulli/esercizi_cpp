// Write a C++ script that copies the string 'I love C++' into a character array and outputs on the screen

#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main(){
    char original[12] = "I love C";
    char copied[12];

    for(int i=0; i<12; i++){
        original[i]=copied[i];
    }
    cout << "The original is: " << original << endl;
    cout << "The copied is: " << copied;

    return 0;
}
