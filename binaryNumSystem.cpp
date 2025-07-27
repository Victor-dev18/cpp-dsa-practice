// C++ Codes for Converting Decimal to Binary & Binary to Decimal 


#include <iostream>
using namespace std;

// Decimal to Binary
int decToBinary(int decNum){
  int binaryNum = 0, base = 1;
  while (decNum > 0){
    int rem = decNum % 2;
    decNum /= 2;
    binaryNum += (rem * base);
    base *= 10;
  }
  return binaryNum;
}

// Binary to Decimal
int binToDecimal(int binNum){
    int decimalNum = 0, base = 1;
    while (binNum > 0) {
        int rem = binNum % 10;
        binNum /= 10;
        decimalNum += rem * base;
        base *= 2;
    }
    return decimalNum;
}
int main() {                                                                      // call the functions in main()
   for( int i=1; i<=10; i++){
    cout <<"Decimal : " << i << " --> Binary :  " << decToBinary(i) << endl;      
   } 
   for (int i=1; i<=10; i++){
    cout << "Binary : " << decToBinary(i) << "--> Deciaml : " << binToDecimal(i) << endl; 
   }
    return 0;
}




