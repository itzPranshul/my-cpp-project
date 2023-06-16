#include <iostream>
using namespace std;

int prod(int n){
    int a=1;
    while(n!=0){
        a=a*(n%10);
        n=n/10;
    }
return a;
}

int main(){
int n;
cin>>n;


cout<<prod(n);
return 0;

}