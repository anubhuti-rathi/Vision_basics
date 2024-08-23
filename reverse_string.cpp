#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[15];
    cin >> str;
    int n = strlen(str);
    char temp;
    int i;
    for(i=0; i<=n/2; i++ ){
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    cout << str;
	return 0;
}