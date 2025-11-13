#include <iostream>
 using namespace std;
 int main() {
 char maritalStatus, Gender;
 int age;
 cout << "Enter Marital Status (M/S): ";
 cin >> maritalStatus;
 cout << "Enter Gender (M/F): ";
 cin >> Gender;
 cout << "Enter Age: ";
 cin >> age;
 if (maritalStatus == 'M' ||
 (maritalStatus == 'S' && Gender == 'M' && age > 30) ||
 (maritalStatus == 'S' && Gender == 'F' && age > 25)) {
 cout << "The employee is eligible." << endl;
 } 
 else {
 cout << "The employee is NOT eligible." << endl;
 }
 return 0;
 }