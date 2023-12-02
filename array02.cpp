/*

Ques-  Find the second largest and second smallest element in the array.


Approach -

(A) - Sort the array and return the second largest and second smallest element 
      TC- O(nlogn)

(B) - Take 2 integers and go throughout the array comparing the largest, storing the value
      in that integer and second largest in another.
      Repeat the same for second smallest by holding the smallest values in variable.
      TC- O(n) 

*/

#include <bits/stdc++.h> 
using namespace std;

void getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    sort(a.begin(),a.end());
    vector<int>ans;
    
    ans.push_back(a[n-2]);
    ans.push_back(a[1]);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    
}


int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    getSecondOrderElements(n,arr);
    return 0;
}

