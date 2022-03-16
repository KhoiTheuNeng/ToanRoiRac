#include<iostream>
#include<cmath>
using namespace std;

bool checkSNT (int a){
	for(int i=2; i<=sqrt(a);i++){
		if(a%i==0) return false;
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	if(checkSNT(n)) cout << "YES";
	else cout << "NO";
	return 0;
}
