#include <iostream>

#include <string>
#include <cstring>

using namespace std;


std::string help(string str);

void removeX(char input[]) {
    int i=0;
    string str ="";
    while(input[i]!='\0'){
        str = str+input[i];
        i++;
    }

    // cout<<str<<endl;



    string strr = help(str);
    // cout<<strr<<endl;

    int j=0;
    for(;j<strr.size();j++){
        input[j]=strr[j];
    }
    input[j]='\0';
}

std::string help(string str){
    if(str.size()==0){
        return "";
    }

    // cout<<str<<endl;

    if(str[0]=='x'){
        return ""+help(str.substr(1));
    }
    else{
        return str[0]+help(str.substr(1));
    }
}
