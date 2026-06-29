#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int wordCount=0;
    bool inWord=false;
    for(int i=0;i<str.length();i++){
        if(str[i]!=' ' && !inWord){
            wordCount++;
            inWord=true;
        }
        else if(str[i]==' '){
            inWord=false;
        }
    }
    cout<<"Number of words in the string: "<<wordCount<<endl;
    return 0;
}