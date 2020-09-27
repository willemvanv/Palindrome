#include <iostream>
#include <cstring>
using namespace std;

//Willem van Veldhuisen
//9/22/20
//This program detects Palindromes in a typed statement not including puctuation


//Main
int main() {
  //Output1 is my input, things got messy
  char output1[81];
  cin.get(output1, 81);
  int length1 = strlen(output1);
  char output2[length1];
  int a = 0;
  cin.get();
  
  //Remove punctuation
  for (int i = 0; i < length1 + 1; i++) {
    if (output1[i] == 'a' || output1[i] == 'b' || output1[i] == 'c' ||
	output1[i] == 'd' || output1[i] == 'e' || output1[i] == 'f' ||
	output1[i] == 'g' || output1[i] == 'h' || output1[i] == 'i' ||
	output1[i] == 'j' || output1[i] == 'k' || output1[i] == 'l' ||
	output1[i] == 'm' || output1[i] == 'n' || output1[i] == 'o' ||
	output1[i] == 'p' || output1[i] == 'q' || output1[i] == 'r' ||
	output1[i] == 's' || output1[i] == 't' || output1[i] == 'u' ||
	output1[i] == 'v' || output1[i] == 'w' || output1[i] == 'x' ||
	output1[i] == 'y' || output1[i] == 'z') {
      output2[a] = output1[i];
      a++;
    }
    if (output1[i] == 'A' || output1[i] == 'B' || output1[i] == 'C' ||
	output1[i] == 'D' || output1[i] == 'E' || output1[i] == 'F' ||
	output1[i] == 'G' || output1[i] == 'H' || output1[i] == 'I' ||
	output1[i] == 'J' || output1[i] == 'K' || output1[i] == 'L' ||
	output1[i] == 'M' || output1[i] == 'N' || output1[i] == 'O' ||
	output1[i] == 'P' || output1[i] == 'Q' || output1[i] == 'R' ||
	output1[i] == 'S' || output1[i] == 'T' || output1[i] == 'U' ||
	output1[i] == 'V' || output1[i] == 'W' || output1[i] == 'X' ||
	output1[i] == 'Y' || output1[i] == 'Z') {
      output2[a] = (output1[i] + 32);
      a++;
    }
    
  }
  
  int b = 0;
  char output3[strlen(output2)];

  //Write backwards
  for (int c = strlen(output2) - 1; c > -1; c--) {
    output3[b] = output2[c];
    b++;
  }

  //Find palindromes
  int length2 = strlen(output2);
  bool isPalin = true;
  
  for (int d = 0; d < length2; d++) {
    if (output2[d] != output3[d]) {
      isPalin = false;
    }
  }

  //Declare if it's a palindrome
  if (isPalin == true) {
    cout << "Palindrome" << endl;
  } else if (isPalin == false) {
    cout << "Not a Palindrome" << endl;
  }
  
  return 0;
}
