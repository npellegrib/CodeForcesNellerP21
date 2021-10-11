#include<bits/stdc++.h>
 
using namespace std;
 
#define el "\n"
#define all(v) v.begin(),v.end()
 
void Solve(){
    int m; cin>>m;
    vector<int>v(m);
    for (int i = 0; i < m; i++)
    {
        cin>>v[i];
    }
 
    sort(all(v));
    
    for(int i = 0; i < v.size() - 1; ++i){
        if(abs(v[i] - v[i + 1]) <= 1){
            v.erase(v.begin() + i);
        	i--;
        }
    }
	
	
    if(v.size() == 1){
        cout<<"YES"<<el;
    }else{
        cout<<"NO"<<el;
    }
 
}
 
int main(){
 
    int n; cin>>n;
    while(n--){
        Solve();
    }
    return 0;
}