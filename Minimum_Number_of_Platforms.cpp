#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int calculateMinPatforms(int arr[], int dep[], int n) {
   // 	initially we will sort the arrival and departure time
    sort(arr, arr+n);
    sort(dep, dep+n);
    // 0th index train took 1 platform
    int plat_needed = 1;
    int result =1;//max is stored as result. value = 1 coz initially 1 train has taken 1 platform
    
    //start the 2 pointer approach
    int i = 1, j = 0;//2nd arrival train and 1st departure tarin
    
    //keep on moving the pointers till it doesn't cross the index
    while(i<n && j<n){
        //if arr train came before dep train
        if(arr[i] <= dep[j]){
            plat_needed++;//then we require 1 more platform 
            i++;//and since this train is arrived do i++ move pointer by 1 place
        }
        //if dep train depated before next arrival train came
        else if(arr[i] > dep[j]){
            plat_needed--;//vacant 1 platform, reduce platform
            j++;//this train dep. now, move to next departed train
        }
        // compare the platform req at current moment with result
        if(plat_needed > result){
            result = plat_needed;//update if platneed is greater
        }
    }
    return result;
}