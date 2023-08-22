#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int first_num = atoi((argv[1]));
  int second_num = atoi((argv[2]));
  int third_num = atoi((argv[3]));
  
int my_int = first_num;
cout<< my_int;
my_int = second_num;
cout<<my_int;
my_int = third_num; 
cout<<my_int;
  
  return 0;
}