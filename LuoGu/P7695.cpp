#include<iostream>
#include<cmath>
using namespace std;
int iter_Matrix(){
    int n;
    cin>>n;
    return (int)pow((pow(2,n)+1),2);
}
int main(){
    cout<<iter_Matrix();
}