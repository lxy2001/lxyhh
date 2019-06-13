#include <iostream>
#include <string>
using namespace std;
int main (){
    string s1,s2;
    getline(cin,s1);
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]!='g'&&s1[i]!='G'&&s1[i]!='p'&&s1[i]!='P'&&s1[i]!='L'&&s1[i]!='l'&&s1[i]!='t'&&s1[i]!='T'){
            s1[i]='0';
        }
    }
    int e=0;
    for(int j=0;s1[j]!='\0';j++){
        if(s1[j]!='0'){
            s2[e]=s1[j];
            e++;
        }
    }
    s2[e]='\0';
    for(int k=0;s2[k]!='\0';k++){
        if(s2[k]=='g'){
            s2[k]='G';
        }
        if(s2[k]=='p'){
            s2[k]='P';
        }
        if(s2[k]=='l'){
            s2[k]='L';
        }
        if(s2[k]=='t'){
            s2[k]='T';
        }
        
    }
    int a[4]={0};
    for(int i=0;s2[i]!='\0';i++){
        if(s2[i]=='G'){
            a[0]++;
        }
        if(s2[i]=='P'){
            a[1]++;
        }
        if(s2[i]=='L'){
            a[2]++;
        }
        if(s2[i]=='T'){
            a[3]++;
        }
    }
    while(a[0]!=0||a[1]!=0||a[2]!=0||a[3]!=0){
        if(a[0]!=0){
            cout<<'G';
            a[0]--;
        }
        if(a[1]!=0){
            cout<<'P';
            a[1]--;
        }
        if(a[2]!=0){
            cout<<'L';
            a[2]--;
        }
        if(a[3]!=0){
            cout<<'T';
            a[3]--;
        }
    }
    
    
    return 0;
}
