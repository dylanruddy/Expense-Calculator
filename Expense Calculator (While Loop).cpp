#include <iostream>
#include <string>
using namespace std;

int main(){

double sum = 0, n = 0, calc = -1;


    cout << "This is an expense calculator that allows the user to add up their individual expenses!" << endl;

while(true){

   cout << "The current total is $" << sum << endl;
    cout << " Enter The Amount (0 To Exit)" << endl;
    cin >> n;
    sum = sum + n;
    calc ++;
} 

if (n == 0){
cout << "The Sum is $" << sum << endl;
cout << "The number of individual items you added up is " << calc << endl;

}












system("PAUSE");
return 0;
}


