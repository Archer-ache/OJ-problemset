#include<iostream>
using namespace std;
int parties(){
    int n;
    cin>>n;
    if(n%2){
        return ((n/2+1)*(n/2+2));
    }
    else return ((n/2+1)*(n/2+1));
}
int main(){
    cout<<parties();
}