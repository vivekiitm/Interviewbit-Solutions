bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    int n=arrive.size();
    int temp=0;
    int x=0;
    int y=0;
    while(x<n)
    {
        if(arrive[x]<depart[y])
        {
            temp++;
            x++;
        }
        else if(arrive[x]>depart[y])
        {
            temp=temp-1;
            y++;
        }
        else if(arrive[x]==depart[y])
        {
            x++;
            y++;
        }
        if(temp>K)
            return false;
    }
    return true;
}
