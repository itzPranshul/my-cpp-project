#include<iostream>
using namespace std;
int main(){
int n,rem,pro=1;
cout<<"Enter a number "<<endl;
cin>>n;
while(n>0)
{
    rem=n%10;
    pro=pro*rem;
    n=n/10;
}
cout<<"Produl of digits is : "<<pro<<endl;
return 0;
}