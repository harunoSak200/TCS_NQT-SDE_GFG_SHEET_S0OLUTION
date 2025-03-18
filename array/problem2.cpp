#include<bits/stdc++.h>
using namespace std ; 
void reverse(vector<int> &arr , int l , int h){
	int low = l , high = h ; 
	while(low < high){
		swap(arr[low++] , arr[high--]) ; 
	}
}
int main(){
   
   vector<int>v ; 
   int n ; cin >> n; 
   for(int i = 0 ; i < n ; i++){
   	 int x ; cin >> x ; 
   	 v.push_back(x) ; 
   }
   int k ; cin >> k ; 
   k = k%n ; 
   reverse(v , 0 , n-1);
   reverse(v, 0 , n-k-1) ; 
   reverse(v, n-k , n-1) ; 
   
   for(int i : v)cout << i <<" " ; 
   
   
   return 0 ; 
}