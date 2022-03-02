#include <iostream>

using namespace std;

int main(){
  const char codeChar1 = 'E';
  const char codeChar2 = 'C';
  const char codeChar3 = 'A';
  char firstChar;
  char secondChar;
  char thirdChar;
  string Code;
  string inputCode;
  int match;
  const int k_iValidCodeChecksum = 5;
  int checksum;


  Code += codeChar1;
  Code += codeChar2;
  Code += codeChar3;

  cout << "Enter the first character of the message code: " << endl;
  cin >> firstChar;
  cout << "Enter the second character of the message code: " << endl;
  cin >> secondChar;
  cout << "Enter the third character of the message code: " << endl;
  cin >> thirdChar;

  inputCode += firstChar;
  inputCode += secondChar;
  inputCode += thirdChar;
  cout << "Authenticator Code: " << Code << endl;
  cout << "Message Code: " << inputCode << endl;
  cout << endl;


  for(int i = 0; i < 3; ++i){
    if(inputCode[i] == Code[i]){
      match += 1;
    }
  }
  if(match == 3){
    cout << "Message is valid." << endl;
  }
  else if(match < 3){
    cout << "Message is invalid." << endl;
  }



  if(inputCode == Code){
    cout << "Concurrence: message is authentic." << endl;
  }
  else{
    cout << "Concurrence: message is invalid." << endl;
    if(inputCode < Code){
      cout << "Message code (" << inputCode << ") is lexicographically less than Authenticator code (" << Code << ")" << endl;
    }
    else if(inputCode > Code){
      cout << "Message code (" << inputCode << ") is lexicographically greater than Authenticator code (" << Code << ")" << endl;
    }
  }

  cout << endl;

  checksum = (int(firstChar) + int(secondChar) + int(thirdChar)) % 7;
  if(checksum == 5){
    cout << "Message Code Checksum is valid: " << checksum << endl;
  }
  else{
    cout << "Message Code Checksum is invalid: " << checksum << "; expected: 5" << endl;
  }
  cout << endl;
  int sumASCII;
  cout << "Characterization of Message Code" << endl;
  cout << "--------------------------------" << endl;
  cout << "ASCII values of Message Code Characters: ";
  cout << int(inputCode[0]) << "," << int(inputCode[1]) << "," << int(inputCode[2]) << endl;
  sumASCII = int(inputCode[0]) + int(inputCode[1]) + int(inputCode[2]);
  cout << "Sum of ASCII values for Message code: " << sumASCII << endl;
  cout << endl;

  if(inputCode[0] != Code[0]){
    cout << "First characters do not match: Message: " << inputCode[0] <<"; Authenticator: " << Code[0] << endl;

  }
  if(inputCode[1] != Code[1]){
    cout << "Second characters do not match: Message: " << inputCode[1] <<"; Authenticator: " << Code[1] << endl;

  }
  if(inputCode[2] != Code[2]){
    cout << "Third characters do not match: Message: " << inputCode[2] <<"; Authenticator: " << Code[2] << endl;

  }
}
