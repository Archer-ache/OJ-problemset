#include<iostream>
using namespace std;
int sequence(){
    int N;
    cin>>N;
    char* seq=(char*)malloc(N*sizeof(char));
    for(int i=0;i<N;i++){
        cin>>seq[i];
    }
    int count=1;
    int i=0;
    while(i<N){
        if((seq[i]!='L')||seq[i+1]!='L'){
            i=i+1;
            count++;
        }
        else{
            i=i+2;
            count++;
        }
    }
    return (count>N)?N:count;
}
int main(){
    cout<<sequence();
}