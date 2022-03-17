#include<iostream>
using namespace std;

int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b, a%b);
}

int euler(int a){
	int count = 0;
	for(int i=1; i<a; i++){
		if(gcd(a,i)==1) count ++;
	}
	return count;
}

int main(){
	int a;
	cin >> a;
	cout << euler(a);
	return 0;
}
