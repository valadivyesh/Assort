#include <iostream> 
using namespace std;
int main() {
    int n;
     cout << "Enter many elements: ";
     cin >> n;
     int a[n];
     cout << "Enter " << n << " numbers:";
     for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }
    cout << "Negative numbers are: ";
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) { 
            cout << a[i] << " "; 
        }
    }
    return 0;
}

    
   

    
    

    
    

    
    

    