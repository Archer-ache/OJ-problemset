#include<iostream>
using namespace std;
void check(){
    int info[9];
    for(int i=0;i<9;i++){
        cin>>info[i];
    }
    int score=info[0]+info[7]*5+50;
    for(int i=1;i<7;i++){
        score=score+info[i];
    }
    if(score<info[8])cout<<"AFO";
    else cout<<"AKIOI";
}
int main(){
    check();
}