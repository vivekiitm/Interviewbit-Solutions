void Solution::sortColors(vector<int> &A) {
    int j=0;
    int c=0;
    while(c<3)
    {
        for(int i=j; i<A.size(); i++)
        {
            if(A[i]==c)
            {
                int temp=A[j];
                A[j]=A[i];
                A[i]=temp;
                j++;
            }
        }
        c++;
     }
}
