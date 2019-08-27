#include <iostream>
using namespace std;
int s[100000000];
long long find(int s[],long long n);
int main()
{
    long long n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    long long sum=find(s,n);
    cout<<sum<<endl;
    
    return 0;
}

long long find(int s[],long long n)
{
    long long thissum=0;
    long long maxsum=0;
    long long i;
    for(i=0;i<n;i++)
    {
        thissum+=s[i];
        if(thissum>maxsum)
        {
            maxsum=thissum;
        }
        else if(thissum<0)
        {
            thissum=0;
        }
    }
    
    return maxsum;
}
