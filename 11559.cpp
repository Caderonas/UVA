#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, b, h, w, p, maxi, a;
    vector<int> tab;
    while(cin>>n>>b>>h>>w){
        maxi=b+1;
        for(int i(0);i<h;i++){
            cin>>p;
            for(int j(0);j<w;j++){
                cin>>a;
                if(n*p < b){
                    if(a>=n && p*n<maxi){maxi=p*n;}
                }
            }
        }
        if(maxi<b){tab.push_back(maxi);}
        else{tab.push_back(0);}
    }
    for(int i(0);i<tab.size();i++){
        if(tab[i] == 0){printf("stay home\n");}
        else{cout<<tab[i]<<endl;}
    }
    return 0;
}
