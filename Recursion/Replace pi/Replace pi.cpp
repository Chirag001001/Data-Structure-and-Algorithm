#include <string>
#include <cstring>

using namespace std;

string help(string a,char input[]);

void replacePi(char input[]) {

	string ans="";

	int i=0;
	while(input[i]!='\0'){
		ans = ans+input[i];
		i++;
	}

	string f = help(ans,input);
	// cout<<f<<endl;

	for(int i=0;i<f.size();i++){
		input[i]=f[i];
	}
}

string help(string a,char input[]){
		if(a.size()==0){
		return "";
	}

	string temp ="";
	temp = temp + a[0];
	temp = temp +a[1];
	// cout<<s<<endl;
	if(temp=="pi"){

		return "3.14"+help(a.substr(2),input);

	}
	else{
		return a[0]+ help(a.substr(1),input);

	}
}


