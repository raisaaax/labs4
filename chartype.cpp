#include <iostream>
#include <cctype>
using namespace std;

int isVowel(char ch) {
  string str = "aeiouAEIOU";
  return(str.find(ch) != string::npos);
}	 

int isPunct(char ch) {
  string str = "!\"*,-.:;?";
  return(str.find(ch) != string::npos);
}

int isDigit(char ch) {
  string str = "0123456789";
  return(str.find(ch) != string::npos);
}



int main() {
  char ch;
  cout << "Enter any character: ";
  cin >> ch;
  if (isVowel(ch)) {
    cout << ch << " is a vowel" << endl;
  } else if (!(isVowel(ch))&& isalpha(ch) ) {
    cout << ch << " is a consonant" << endl;
  } else if (isDigit(ch)) {
    cout << ch << " is a digit" << endl;
  } else if (isPunct(ch)) {
    cout << ch << " is punctuation" << endl;
  } else {
    cout << ch << " is unrecognised" << endl;
  }
}

