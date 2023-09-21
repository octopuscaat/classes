#include <iostream>
#include <cstring>
using namespace std;

bool checkArray(char in[], char res[]);

int main() {
  char input[30];
  char result[30];
  //cin >> input;
  cout << "input a palendrome" << '\n';
  cin.get(input, 30);
  for(int i = 0; i < strlen(input) + 1; i++) {
    
    result[i] = input[strlen(input) - i];
    if(input[strlen(input) - i] == '\0') {
      result[i] = ' ';
      result[strlen(input) + 1] = '\0';
  }
  }
  if(checkArray(input, result) == true) {
    cout << '\n' << input << " is a palendrome" << '\n';
  } else if(checkArray(input,result) == false) {
    cout << '\n' << input << " is not a palendrome" << '\n';
  } else {
    cout << '\n' << "something went wrong!" << '\n' << "checkArray() may have returned something wrong";
    return 0;
  }
  cout << '\n' << input << " spelled backwards is " << result;
}

bool checkArray(char in[], char res[]) {

  
  for(int i = 0; i < strlen(in); i++) {

    if(res[i + 1] != in[i]) {
      //cout << '\n' << "false";
      return false;
    }
    
    
  }
  //cout << '\n' << "true";
  return true;
}
