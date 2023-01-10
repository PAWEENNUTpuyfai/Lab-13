#include<iostream>
using namespace std;

int gcd(int,int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int n1,int n2){
	if(n1%n2==0){
		return n2;
	}else{
		return gcd(n2,n1%n2);
	}
}
