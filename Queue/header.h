#include <iostream>
#include<queue>
using namespace std;
queue<int>q;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
void creater_queue(){
    for(int i=0;i<n;i++){
        q.push(arr[i]);
    }
}
void display_queue(){
    for(i=0;i<n;i++){
        q.front(arr[i])
    }
    
}