/*
-----------------------Merge Without Extra Space-------------------
Given two sorted arrays arr1[] and arr2[] in non-decreasing order with size n and m. The task is to merge the two sorted arrays into one sorted array (in non-decreasing order).

Note: Expected time complexity is O((n+m) log(n+m)). DO NOT use extra space.  We need to modify existing arrays as following.

Input: arr1[] = {10};
       arr2[] = {2, 3};
Output: arr1[] = {2}
        arr2[] = {3, 10}  

Input: arr1[] = {1, 5, 9, 10, 15, 20};
       arr2[] = {2, 3, 8, 13};
Output: arr1[] = {1, 2, 3, 5, 8, 9}
        arr2[] = {10, 13, 15, 20} 
Input:
First line contains an integer T, denoting the number of test cases. First line of each test case contains two space separated integers X and Y, denoting the size of the two sorted arrays. Second line of each test case contains X space separated integers, denoting the first sorted array P. Third line of each test case contains Y space separated integers, denoting the second array Q.
Output:
For each test case, print (X + Y) space separated integer representing the merged array.

Constraints:
1 <= T <= 100
1 <= X, Y <= 5*104
0 <= arr1i, arr2i <= 109

Example:
Input:
2
4 5
1 3 5 7
0 2 6 8 9
2 3
10 12
5 18 20

Output:
0 1 2 3 5 6 7 8 9
5 10 12 18 20

Explanation:
Testcase 1: After merging two non-decreasing arrays, we have, 0 1 2 3 5 6 7 8 9
*/



using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	for(int q=0;q<t;q++)
	{
	    cin>>x>>y;
	    vector<int> ar1(x), ar2(y);
	    for(int i=0;i<x;i++)
	    {
	        cin>>ar1[i];
	    }
	    for(int i=0;i<y;i++)
	    {
	        cin>>ar2[i];
	    }
	    int b=0,s=0;
	    for(int i=0;i<x+y;i++)
	    {
	        if(s==y-1)
	        {
	            for(int j=b;j<x;j++)
	            {
	                cout<<ar1[j];
	            }
	            break;
	        }
	        else if(b==x)
	        {
	            for(int j=s;j<y;j++)
	            {
	                cout<<ar2[j];
	            }
	            break;
	        }
	        else if(ar1[b]<ar2[s])
	        {
	            cout<<ar1[b];
	            b++;
	        }
	        else if(ar2[s]<ar1[b])
	        {
	            cout<<ar2[s];
	            s++;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
