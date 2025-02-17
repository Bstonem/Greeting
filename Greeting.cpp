#include <iostream>
#include <string>

using namespace std;

int main(){

    string userName;

    cout << "Enter your name: "; 
    getline(cin, userName);
    cout << "It is nice to meet you, " << userName; 

    return 0;


}

