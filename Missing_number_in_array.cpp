/*
------------------Missing number in array----------------
Input:
The first line of input contains an integer T denoting the number of test cases. For each test case first line contains N(size of array). The subsequent line contains N-1 array elements.

Output:
Print the missing number in array.

Constraints:
1 ≤ T ≤ 200
1 ≤ N ≤ 107
1 ≤ C[i] ≤ 107

Example:
Input:
2
5
1 2 3 5
10
1 2 3 4 5 6 7 8 10

Output:
4
9

Explanation:
Testcase 1: Given array : 1 2 3 5. Missing element is 4.
*/

using namespace std;

int main() {
	int t,n,k,flag=0;
	cin>>t;
	for(int q=0;q<t;q++)
	{
	    flag=0;
	    cin>>n;
	    for(int i=1;i<n;i++)
	    {
	        cin>>k;
	        if(k!=i)
	        {
	            flag=1;
	            cout<<i<<endl;
	            break;
	        }
	    }
	    if(flag==0)
	        cout<<n;
	}
	return 0;
}
