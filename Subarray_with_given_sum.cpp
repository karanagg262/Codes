/*
------------------------Subarray with given sum------------------
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 1010

Example:
Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
Output:
2 4
1 5

Explanation :
Testcase1: sum of elements from 2nd position to 4th position is 12
Testcase2: sum of elements from 1st position to 5th position is 15
*/

using namespace std;
void ans(int n, int s)
{
    int k,sum=0,l=0,flag=0;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        arr.push_back(k);
    }
    for(int i=0;i<n;i++)
    {
        sum = sum+arr[i];
        while(sum>s)
        {
            sum = sum-arr[l];
            l++;
        }
        if(sum==s)
        {
            cout<<l+1<<" "<<i+1<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<-1<<endl;
    
}
int main() {
    int t,n,s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>s;
        ans(n,s);
    }
	return 0;
}
