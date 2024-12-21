//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    pair<int, int> get(int a, int b){
        //complete the function here
        //a 10 b 20
        a = a + b; //a30
        b = a - b; //a30 b10 
        a = a - b; //a20 b 10
        
        //Now return the value as a pair
       // The get() function now returns the swapped values as a pair: return {a, b};.

        return {a,b};
        
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        
        Solution ob;
        pair<int, int>p = ob.get(a, b);
        cout << p.first << ' ' << p.second << endl;
    
    
cout << "~" << "\n";
}
    return 0; 
} 

// } Driver Code Ends