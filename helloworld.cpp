#include <iostream>
#include <string>

using namespace std;

string greeting(string name){

  cout << "Good day " << name << endl;

  return;
}

int main(int argc, char* argv[]){

  string name = " "; 

  cout << "Enter your name: ";
  cin >> name;

  greeting(name);

  return 0;
}
