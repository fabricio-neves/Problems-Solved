#include <iostream>

using namespace std;
 
int main() {
 
    int Cash;
    
    do{
        cin >> Cash;
    } while(Cash < 0 || Cash > 1000000);
    
    cout << Cash << endl
    << Cash / 100 << " nota(s) de R$ 100,00" << endl
    << Cash % 100 / 50 << " nota(s) de R$ 50,00" << endl
    << Cash % 100 % 50 / 20 << " nota(s) de R$ 20,00" << endl
    << Cash % 100 % 50 % 20 / 10 << " nota(s) de R$ 10,00" << endl
    << Cash % 100 % 50 % 20 % 10 / 5 << " nota(s) de R$ 5,00" << endl
    << Cash % 100 % 50 % 20 % 10 % 5 / 2 << " nota(s) de R$ 2,00" << endl
    << Cash % 100 % 50 % 20 % 10 % 5 % 2 / 1 << " nota(s) de R$ 1,00" << endl;
 
    return 0;
}