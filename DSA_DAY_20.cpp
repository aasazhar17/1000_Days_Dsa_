#include <iostream>
using namespace std;

int main(){
    char aas;
    cout<<"enter your char:";
    cin>>aas;

    if(aas>='A' && aas<='Z'){
        cout<<"upper later:";
    }
    else if (aas>='a'&& aas<='z'){
        cout<<"lower case";
    }
    else if (aas>='0'&& aas<='9'){
        cout<<"digit";
    }
    else {
        cout<<"other symbol keyword:"<<endl;
    }
}