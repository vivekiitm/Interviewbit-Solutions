   int Solution::trap(const vector<int> &A) {
    stack<int> s;
    int sum=0,minn=-1;
    for(int i=0;i<A.size();i++){
        if(s.empty() or A[s.top()]>A[i]){
            s.push(i);
        }else{
            minn=-1;
            while(!s.empty() and A[s.top()]<=A[i]){
                if(minn!=-1){
                    sum+=(A[s.top()]-A[minn])*(i-s.top()-1);
                }
                minn=s.top();
                s.pop();
            }
            if(!s.empty())
            sum+=(A[i]-A[minn])*(i-s.top()-1);
            s.push(i);
        }
    }
    return sum;
}