#include<iostream>
using namespace std;
void modmatch(){
    char stdS[20];
    int n;
    char** cheS;
    char** match;
    cin>>stdS;
    cin>>n;
    cheS=(char**)malloc(n*sizeof(char*));
    match=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){
        cheS[i]=(char*)malloc(20*sizeof(char));
        cin>>cheS[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        int j,k=0;
        for(j=0;stdS[j]!='\0';j++){
            if(stdS[j]=='*'){
                continue;
            }//若标准串检测位置为'*'则无条件继续
            else if(stdS[j]!=cheS[i][j]){
                break;
            }//否则，若标准串检测位置与检测串检测位置不同，则直接跳转下一检测串
        }
        if(stdS[j]=='\0'){
            sum++;
            match[k]=cheS[i];
            k++;
        }//若检测过程正常退出，则记录信息
        //牺牲空间换时间（题目输出顺序使然）
    }
    cout<<sum<<endl;
    for(int i=0;i<sum;i++){
        cout<<match[i]<<endl;
    }
}
int main(){
    modmatch();
}