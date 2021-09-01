#include<iostream>
#include<string>
using namespace std;
int main() {
	string s1;
	getline(cin,s1);
	string a[105];
	int j=0,count=1,k=0;
	for(int i=0; i<s1.size(); i++) {
		if(s1[i]!=' ') {
			a[j]+=s1[i];
		} else if(s1[i]==' ') {
			j++;
		}
	}

	for(int i=0; i<=j; i++) {
		count=1;
		for( k=i+1; k<=j; k++) {
			if(a[i]==a[k]) {
				count++;
				a[k]=' ';
			}
		}
		if(count>=2) {
			cout<<a[i];
		}
	}
}


