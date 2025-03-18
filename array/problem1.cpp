#include<bits/stdc++.h>
using namespace std ; 
int main()
{
	vector<int>v ; 
	int n ;  cin >> n ; 
	for(int i = 0 ; i < n ; i++){
		int x ; cin >> x; 
		v.push_back(x) ; 
	}
	 map<int , int>mp ; 
	 
    for(int i : v){
        mp[i]++ ; 
    }
    
    for(auto it : v){
       if(mp[it] == 1){
       	cout<< it ; break;
       }
    }
	
	return 0 ; 
}
       
    