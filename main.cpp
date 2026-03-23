#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
  int N=(argc-1)/2;

  student a[N];
  // Set age and set name for the first two ppl
  int i,age;
  string n;
   // 1. Ask for N names and N age using cin

for (i = 0; i < N; i++) {
    a[i].set_name(argv[i*2 + 1]);
    a[i].set_age(atoi(argv[i*2 + 2]));
}


  //2. Print name and age of all N ppl
  
    // for (i = 0; i < N; i++) {
    //     a[i].print_name();
    //     cout << "Age: " << a[i].get_age() << endl;
    // }
  
  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person

     int youngest = a[0].get_age();

    for (i = 1; i < N; i++) {
        if (a[i].get_age() < youngest) {
            youngest = a[i].get_age();
        }
    }
  
  
  // Print all info for the yougest person
     cout << "Youngest student\n";
    for (i = 0; i < N; i++) {
        if (a[i].get_age() == youngest) {
            a[i].print_name();
            cout << "Age: " << a[i].get_age() << endl;
        }
    }
  
  
  //4. Change input from cin to argv

  
 return 0;

    
  }
  
  


