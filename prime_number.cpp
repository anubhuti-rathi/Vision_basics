#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c=0;
	
	for (int i=3; i<=n; i++){
	    if (n/i==0){
	        c+=1;
	    }
	}
	if (c==0){
	    cout << "prime";
	}
	else{
	    cout << "not prime";
	}
	
	return 0;
}