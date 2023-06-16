#include<iostream>
using namespace std;

int main(){
    int a1[2][2];
    int a2[2][2];
    int a3[2][2];
    int i,j;

    cout<<"enter elements of matrix 1"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>a1[i][j];
        }
    }
    cout<<"enter the elements of matrix 2"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>a2[i][j];
        }
    }
    cout<<"Multiplication of matrix 1 and 2"<<endl;
int k=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        int a3[i][j];
        for(k=0;k<2;k++){
        a3[i][j]+=a1[i][k]*a2[k][j];
        }
        cout<<a3[i][j];
        }
        cout<<endl;
    }
    return 0;
        }
