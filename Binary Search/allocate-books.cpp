#include<bits/stdc++.h>
bool allocation_loose(vector<int> &A, int page_limit, int B)
{
    int students=1, sum=0;
    for(int i=0; i<A.size(); i++)
    {
        // If a book has more pages than page_limit then limit has to increase
        if(A[i] > page_limit)
            return false;
            
        sum += A[i];
        if(sum > page_limit)
        {
            sum = A[i];
            students++;
            if(students > B)
                return false;
        }
    }
    // students <= B, i.e., average number of books alloted to a student is high
    return true;
}
int allocate_books(vector<int> &A, int start, int end, int B)
{
    if(start <= end)
    {
        int page_limit = (start + end) / 2;
        
        if(allocation_loose(A, page_limit, B)) 
            // Allocate more tightly by restraining page_limit
            return min(page_limit, allocate_books(A, start, page_limit-1, B));
            
        else
            return allocate_books(A, page_limit+1, end, B);
    }
    return INT_MAX;
}
int Solution::books(vector<int> &A, int B) 
{
    int min_pages = 0, total_pages = accumulate(A.begin(), A.end(), 0);
    
    return (B > A.size()) ? -1 : allocate_books(A, min_pages, total_pages, B);
}