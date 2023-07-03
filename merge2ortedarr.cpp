 //optimal 1
 /*  int left = n-1;//left pointer always at last place
	int right = 0;//right pointer always at first
	while(left>=0 && right<m){
		if(arr1[left] > arr2[right]){
			swap(arr1[left], arr2[right]);
			left--, right++;
		}
		//if arr1 not greater than arr2
		else{
			break;
		}
	}
	sort(arr1, arr1 + n); 
	sort(arr2, arr2 + m);*/

    #include<vector>

/*void swapIfGreater(vector<long long> &arr1, vector<long long> &arr2, int ind1, int ind2){
if(arr1[ind1] > arr2[ind2]){
	swap(arr1[ind1], arr2[ind2]); 
   }
}
*/
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &arr1, vector<long long> &arr2,int n, int m){
    /*int len=(n+m);

	int gap=(len/2)+(len%2);
	//(9/2)+(9%2)=4+1=5
	while(gap>0){
	int left =0;
	int right = left+gap;
		while(right<len){
			//one is on arr1 and second is on arr2 
			if(left<n && right>=n){
				swapIfGreater(arr1, arr2,left, right-n);

			}
			else if(left >= n)
			{//if both are on 2nd part of arr
                swapIfGreater(arr2, arr2,left-n, right-n);
			}
			//arr1 and arr1
			else{
				swapIfGreater(arr1, arr1,left, right);
			}
			left++,right++;
		}
		if(gap==1) break;
		gap = (gap/2) + (gap%2);
	}*/


	
}