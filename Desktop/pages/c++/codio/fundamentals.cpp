#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string greeting = argv[1];
  string dayOfWeek = argv[2];
  string month = argv[3];
  int day = atoi(argv[4]);
  int currentWaitMinutes = atoi(argv[5]);
  
  cout << greeting << " Today is " << dayOfWeek << ", " << month << " " 
  << day << "." << endl;
  cout << "The current wait time is " << currentWaitMinutes << " minutes." << endl; 
  
    // Another method
  cout << greeting;
  string this_day = " Today is ";
  cout << this_day;
  cout << dayOfWeek;
  string punctuation = ", ";
  cout << punctuation;
  cout << month;
  cout << " ";
  cout << day;
  string Punctuation = ".";
  cout << Punctuation << endl;
  string challenge = "The current wait time is ";
  cout << challenge;
  cout << currentWaitMinutes;
  string time = " minutes.";
  cout << time << endl;

  //add code above this line
  
  return 0;
  
}
