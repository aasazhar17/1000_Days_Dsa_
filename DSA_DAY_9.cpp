// question :- find character lowercase and uppercase
#include <iostream>
using namespace std;

int main(){
    char character;
    cout<<"enter your character";
    cin>>character;
    if(character >= 'A' && character <= 'Z'){  // A 65  Z 90  you can try;
        cout <<"UpperCase: ";
    }else{
        cout<<"lower case: ";
    }
}