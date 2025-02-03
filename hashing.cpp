#include<bits/stdc++.h>
using namespace std;
 //for integer
 /*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[8]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    int q;
    cin>>q;
    cout<<hash[q];
    return 0;
 }

 //for character

 int main(){
   string s;
   cin>>s;   
   int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
    
    cout<<hash[c-'a'];
    }
    return 0;
    
 }
 

 //mapp in hashing
    
int main(){
int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }
    map<int,int>mpp;
       for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    // iterate in mpp
    for(auto it:mpp){
    cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
    cout<<mpp[num];
    }
    return 0;
    }
*/
  //in character  

   int main(){
   string s;
   cin>>s;   
   map<char,int>mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]-'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
    
    cout<<mpp[c-'a']<<endl;
    }
    return 0;
    
 }
 