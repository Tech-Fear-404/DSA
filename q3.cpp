// You are using GCC
#include<iostream>
using namespace std;
int isFruitPresent(string ar[],string Fru,int n){
    int flag=0;
    for(int i=0;i<n;i++){
        if(Fru==ar[i]){
            cout<<"The First occurrence of \""<<Fru<<"\" is at index "<<i<<".";
            flag++;
            return flag;
        }
        
    }
    if(!flag){
        return -1;
    }
    
};
int main(){
    int n;
    cin>>n;
    string ar[n],fru;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cin>>fru;
    int a=isFruitPresent(ar,fru,n);
    if(a==-1){
        cout<<"\""<<fru<<"\""<<" is not found in the array.";
    }
    return 0;
}