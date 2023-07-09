class Solution
{
    public:
    static bool cmp(pair<int,int> a, pair<int,int> b){
        return a.second<b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        //iske andar starting ,ending time dalke sort karege
        vector<pair<int,int>> v;
                 //ttart,end
        for(int i=0; i<n; i++){
            //vector k andar pair banake dalenge
            pair<int,int> p = make_pair(start[i], end[i]);
                                    //starting time,ending time
            v.push_back(p);                            
            
            
        }
        //now sort the vector
        sort(v.begin(), v.end(), cmp);//cmp=custom comparator
        
        int count = 1;
        int ansEnd=v[0].second;//1st meet ka jo ending time hoga
        
        for(int i=0; i<n; i++){
            //if curr meet ka starting time bada hai prev meet k end time
            // se so count ++ and update ans;
            if(v[i].first > ansEnd){
                count++;
                ansEnd = v[i].second;
            }
        }
        return count;
    }
};