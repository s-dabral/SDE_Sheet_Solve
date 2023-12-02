/*

Ques-  Find the largest element in the array.


Approach -

(A) - Sort the array and return the largest element 
      TC- O(nlogn)

(B) - Take an integer and go throughout the array comparing the largest, storing the value
      in that integer.
      TC- O(n) 

*/

#include <bits/stdc++.h> 
using namespace std;

int largestElement(vector<int> &arr, int n) 
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    return arr[n-1];
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a= largestElement(arr,n);
    cout<<a;
    return 0;
}

