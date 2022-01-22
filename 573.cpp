#include<bits/stdc++.h>
using namespace std;
int main(){
    double h, u, d, f;
    vector<int> days;
    vector<bool> succes;
    while(1){
            cin>>h>>u>>d>>f;
            if(h == 0){break;}
            int j=0;
            double fat = h/10;
            while(h >= 0 || u >= d){
                u=u-fat*j;
                if(u<0){break;}
                h=h-u+d;
                j++;
            }
            days.push_back(j);
            if(h >= 0){succes.push_back(true);}
            else{succes.push_back(false);}
    }
    for(int i(0);i<days.size();i++){
            if(succes[i]==true){printf("success");}
            else{printf("failure");}
            printf(" on day %d\n", days[i]);
    }
    return 0;
}

