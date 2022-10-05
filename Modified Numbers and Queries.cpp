class Solution {
  public:
  bool isPrime(int n)
{
    // Check if n=1 or n=0
    if (n <= 1)
        return false;
    // Check if n=2 or n=3
    if (n == 2 || n == 3)
        return true;
    // Check whether n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    // Check from 5 to square root of n
    // Iterate i by (i+6)
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

void prime(int l,int r,unordered_set<int>&arr)
{
    for(int i=1;i<=r;i++)
    {
        if(isPrime(i))
            arr.insert(i);
    }
}
    int sumOfAll(int l, int r){
        // code here
        
        unordered_set<int>arr;
        prime(l,r,arr);
       // cout<<arr.size();
        int sum=0;
        for(int i=l;i<=r;i++)
        {
            if(i==1)
                sum+=1;
            else
            {
                for(int j=2;j<=i;j++)
                {
                    if(i%j == 0 && arr.find(j) != arr.end())
                    {
                        sum+=j;
                    }
                }
            }
        }
        
        return sum;
        
    }
};
