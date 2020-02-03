int maxSubArraySum(int a[], int size) 
{ 
    int sum = INT_MIN, temp = 0; 

    for (int i = 0; i < size; i++) 
    { 
        temp = temp + a[i]; 
        if (sum < temp) 
            sum = temp; 
        if (temp < 0) 
            temp = 0; 
    } 
    return sum; 
} 
int Solution::maxSubArray(const vector<int> &A) {
    int arr[A.size()];
    for(int i=0;i<A.size();i++)
        arr[i]=A[i];
    return maxSubArraySum(arr,  A.size());
}
