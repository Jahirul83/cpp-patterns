#include <bits/stdc++.h>
using namespace std;
void solution(){
    int n,rev=0;
    cin>>n;
    while(n>0){
        int lastDigit = n%10;
        rev*=10;
        rev+= lastDigit;
        n = n/10;
    }
        cout<<rev<<endl;

}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) solution();
	return 0;

}

