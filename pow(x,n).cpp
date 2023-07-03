public:
    double myPow(double x, int n) {
  double ans = 1.0;//initially initialize ans=1.0
	long long nn=n;//keep a copy of n through nn so that the val is not destroyed
	//if it is a -ve val->make the val positive
	if(nn<0) nn=-1*nn;
	while(nn){
		if(nn%2){
			//odd power
			ans=ans*x;
			nn=nn-1;

		}
		else{
			//even power
			x=x*x;
			nn=nn/2;
		}

	}
	//checking for val of n
	// if lesser than 0 that is -ve 
	if(n<0) ans = (double)(1.0) / (double)(ans);
	return ans;
    }
};