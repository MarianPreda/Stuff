#include<iostream>
#include<stdio.h>
using namespace std;
int n,st[100];
void afisare() {
     for(int i = 1; i <=n; i++)
         cout<<st[i]<<' ';
     cout<<'\n';
}
int valid(int k) {
     for(int i = 1; i < k; i++)
         if(st[k]==st[i])
             return 0;
     return 1;
}
void back(int k) {
     int i;
     if(k>n)
         afisare();
     else
         for(i = 1; i <= n; i++) {
             st[k] = i;
             if(valid(k))
                 back(k + 1);
         }
}
int main() {
    
    cout<<"n=";
    cin>>n;
    back(1);
    return 0;
}
