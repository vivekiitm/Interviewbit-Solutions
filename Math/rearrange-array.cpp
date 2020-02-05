void Solution::arrange(vector<int> &A) {
    int len=A.size();
    for(int i=0;i<len;i++)
    {
        if(abs(A[i])!=i&&A[i]>0)
        {
            if(A[A[i]]!=i){
            int temp1=A[i];
            int j=i;
            while(abs(A[A[j]])!=i)
            {
                int temp=A[j];
                A[j]=-A[A[j]];
                j=temp;
            }
            int temp=A[j];
            A[j]=-A[A[j]];
            A[temp]=-temp1;
            }
            else
            {
                int temp=A[i];
                A[i]=-A[A[i]];
                A[temp]=-temp;
            }
        }
    }
    for(int i=0;i<len;i++)
    {
        A[i]=abs(A[i]);
    }
}
