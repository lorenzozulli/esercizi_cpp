// Write a C++ script that copies the string 'I love C++' into a character array and outputs on the screen

#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    string original = "I love C++";
    char copied[12];

    original = copied;
    cout << original << endl;
    cout << copied;

    return 0;
}
