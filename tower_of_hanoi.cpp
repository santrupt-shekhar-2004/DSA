#include <bits/stdc++.h> 
using namespace std; 
  
void towerOfHanoi(int n, char source, char destination, 
                  char aux_rod) 
{ 
    if (n == 0) { 
        return; 
    } 
    towerOfHanoi(n - 1, source, aux_rod, destination); 
    cout << "Move disk " << n << " from rod " << source 
         << " to rod " << destination << endl; 
    towerOfHanoi(n - 1, aux_rod, destination, source); 
} 
  

int main() 
{ 
    int N = 3; 
    towerOfHanoi(N, 'A', 'C', 'B'); 
    return 0; 
} 