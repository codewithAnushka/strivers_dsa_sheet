class Solution 
{
    public:
    //comparator for dec order of profit
      bool static cmp(Job a , Job b){
        return (a.profit > b.profit);
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,cmp);
        
        int mx=arr[0].dead;
        for(int i=0;i<n;i++){
            mx=max(mx,arr[i].dead);
        }
        
        int slot[mx+1];
        for(int i=0;i<mx+1;i++)
        slot[i]=-1;
        int mxprofit=0,count=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(slot[j]==-1){
                    slot[j]=i;
                    mxprofit+=arr[i].profit;
                    count++;
                    break;
                }
            }
        }
        vector<int>ans;
        ans.push_back(count);
        ans.push_back(mxprofit);
        return ans;