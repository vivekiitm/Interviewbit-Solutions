vector<string> Solution::fizzBuzz(int A) {
    vector<string>ans;
    for(int i=1;i<=A;i++)
    {
        if((i%3!=0)&&(i%5!=0))
            ans.push_back(to_string(i));
        if((i%3==0)&&(i%5!=0))
            ans.push_back("Fizz");
        if((i%3!=0)&&(i%5==0))
            ans.push_back("Buzz");
        if((i%3==0)&&(i%5==0))
            ans.push_back("FizzBuzz");
    }
    return ans;
}