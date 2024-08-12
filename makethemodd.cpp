#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    int val;
    set<int> s;
    while(t--){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> val;
            s.insert(val);
        }
        int c= 0;
        while(!s.empty()){
           auto last = (--s.end());
           s.erase(*last);
           if(*last%2==0){
            s.insert(*last/2);
            c++;
           }
        }
        cout << c;
    }
    
    
    
    
    
    
    return 0;
}