#include<bits/stdc++.h>
using namespace std ;



int main(){
    int n ;
    cin>> n ;

    vector<int> nums(n) ;
    for(int i = 0; i < n; i++) cin>> nums[i] ;

    for(int i = 0; i < n; i++){
        int temp = nums[i], j = i-1 ;

        while(j >= 0 && temp < nums[j]){
            nums[j+1] = nums[j] ;
            j-- ;
        }

        nums[j+1] = temp ;
    }

    for(int i = 0; i < n; i++)
        cout<< nums[i] << " " ;

    
    return 0 ;
}