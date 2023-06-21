#include <iostream>
#include <string>

#include <cstring>

using namespace std;

string help(string str);
void pairStar(char input[]) {
    string str="" ;
    int i=0;
    while(input[i]!='\0'){
        str = str +input[i];
        i++;
    }
    // cout<<str<<endl;
    string st= help(str);
    // cout<<st<<endl;
    int j=0;
    for (;j<st.size();j++){
        input[j]=st[j];
    }
    input[j]='\0';
}

string help(string str){
    if(str.size()==0){
        return "";
    }
    // cout<<str<<endl;
    if(str[0]==str[1]){
        string temp="";
        temp = str[0];
        temp = temp +"*";
        // cout<<temp<<endl;


        // temp = temp + str[1];    //wrong
        return temp+help(str.substr(1));      //substr(2) wrong
    }
    else{
                string temp="";
                temp = temp + str[0];
        return temp+help(str.substr(1));
    }
}

