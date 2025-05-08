#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int index = 0; 
    int vowelCount = 0; 
   
    cout << "Enter a string: ";
    getline(cin, str);

   
    while (index < str.length()) {
        char ch = str[index];

        switch (ch) {
            case 'a': case 'A': case 'e': case 'E':
            case 'i': case 'I': case 'o': case 'O':
            case 'u': case 'U':
                cout << "Vowel '" << ch << "' found at index " << index << endl;
              
                vowelCount++;
                break;
            default:
                
                break;
        }

      
        index++;
    }

    cout << "Total number of vowels: " << vowelCount << endl;

    return 0;
}