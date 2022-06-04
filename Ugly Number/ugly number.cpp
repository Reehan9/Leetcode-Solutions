/* This code is written by Reehan */
/* Dynamic programming Approach (Three pointer Approach) */
/*An ugly number is a number whose prime factors are limited to only 2, 3 , 5*/ 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n(0),p1(0),p2(0),p3(0);
    cout<<"Enter the number"<<endl;
    cin>>n;
    vector<int>dyna(n+1);
    dyna[0] = 1;
    for(int i = 1 ; i <= n ; i++){
        dyna[i] = min({2*dyna[p1] , 3*dyna[p2] , 5*dyna[p3]});
        if(dyna[i]==2*dyna[p1])
            p1++;
        if(dyna[i]==3*dyna[p2])
            p2++;
        if(dyna[i]==5*dyna[p3]) 
            p3++;
    }
    cout<<"The ugly number is "<<dyna[dyna.size()-2]<<endl;
    return 0;
}