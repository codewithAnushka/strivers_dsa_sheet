static bool myComp(Item a, Item b){
        double r1=(double)a.value/a.weight;
        double r2=(double)b.value/b.weight;
        return r1>r2;
    }
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Calculate the ratio (value/weight) for every item in the array
        // Sort all the items in decreasing order of the ratio.
        sort(arr, arr+n, myComp);
        double res=0.0;
        for(int i=0; i<n; i++){
            if(arr[i].weight <= W){
                res += arr[i].value;
                W = W-arr[i].weight; // Update the capacity
            }
            else{
                res+=arr[i].value * ((double) W/arr[i].weight);
                break;
            }
        }
        return res;