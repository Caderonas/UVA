#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, current, max(0);
	cin>>t;
	int tab[t];
	for(int i(0);i<t;i++){
		cin>>n;
		for(int j(0);j<n;j++){
			cin>>current;
			if(current > max){max = current;} 
		}
	tab[i]=max;
	max = 0;	
	}
	for(int i(0);i<t;i++){printf("Case %d: %d\n",i+1,tab[i]);}
	return 0;
}
