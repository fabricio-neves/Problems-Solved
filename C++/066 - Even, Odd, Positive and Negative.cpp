#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    int a, i, even, odd, positive, negative;
    
    even = odd = positive = negative = 0;
    
    for(i = 0; i < 5; i++){
        cin >> a;
        
        if(a % 2 == 0)
            even++;
        else
            odd++;
            
        if(a > 0)
            positive++;
        else if (a < 0)
            negative++;
    }
    
    cout << even << " valor(es) par(es)" << endl
    << odd << " valor(es) impar(es)" << endl
    << positive << " valor(es) positivo(s)" << endl
    << negative << " valor(es) negativo(s)" << endl;
    
    return 0;
}