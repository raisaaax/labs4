#include <iostream>
using namespace std;

int isVowel(char ch){
  string str = "aeiouAEIOU";
  return(str.find(ch) != string::npos); 
}

int main() {
  char ch;
  cout << "Enter any character: ";
  cin >> ch;
  if (isVowel(ch))
    cout << ch << " is a Vowel" << endl;
  else
    cout << ch << " not a vowel" << endl;
}

