#include<bits/stdc++.h>
using namespace std ; 


    int findEquilibrium(vector<int> &arr) {
    	
        int n = arr.size() ; 
        
        vector<int>pre(arr.size() , 0) ; 
        vector<int>suf(arr.size() , 0) ;
        
        int sum = 0 ; 
        for(int i = 0 ; i < n ; i++){
            sum+=arr[i] ; 
        	pre[i] = sum ; 
        }
        
        sum = 0 ; 
        for(int i = n-1 ; i >= 0 ;i--){
         	sum+=arr[i] ; 
         	suf[i] = sum ; 
        }
        
        for(int i = 1 ; i < n; i++){
        	if(pre[i-1] == suf[i+1])return i ; 
        }
        
        return -1 ; 
        
    }


int main(){
   vector<int>v ; 
   int n ; cin >> n; 
   for(int i = 0 ; i < n ; i++){
   	 int x ; cin >> x ; 
   	 v.push_back(x) ; 
   }
   cout << findEquilibrium(v) << endl;
	
	return 0 ; 
}