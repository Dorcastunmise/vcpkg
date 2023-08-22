#include <iostream>
using namespace std;

int main() {
    bool thisIsFun = true;

  /*
  C++ manipulator boolalpha function is used to set the output stream to 
  display bool values as the strings "true" or "false"
  */
  cout << boolalpha << thisIsFun << endl; 
    /* What happens if you:
    /  Create two variables with the same type and name? 
    /  Ans: Code won't execute
    /  Create two variables with the same name but different capitalization (i.e. my_var and My_var)?
    /  Ans: Code will execute
    /  Create two variables of different types with the same name?
       Ans: Code will execute */ 
  return 0;
  
}
