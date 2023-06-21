#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int help(string str,int size);

int stringToNumber(char input[]) {

    // cout<<'9'-48<<endl; //9


    int i=0;
    string s="";
    while(input[i] !='\0'){
        s = s+input[i];
        i++;
    }

    return help(s,i);
}

int help(string str, int size){
    if(str.size()==0){
        return 0;
    }

    int sm = str[0]-48;
    // cout<<sm<<endl;

    return (sm*(pow(10,size-1)) + help(str.substr(1),size-1));
}
