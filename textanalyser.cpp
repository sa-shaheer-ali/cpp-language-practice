#include <iostream>
#include <sstream>   
#include <map>       
#include <cctype>    

using namespace std;

string cleanWord(const string& word) {
    string cleaned;
    for(char ch : word) {
        if(isalpha(ch)) { 
            cleaned += tolower(ch);
        }
    }
    return cleaned;
}

int main() {
    string text;
    cout << "Enter some text: ";
    getline(cin, text);

    // Count word frequency
    map<string, int> wordCount;
    stringstream ss(text);
    string word;
    while(ss >> word) {
        string cleaned = cleanWord(word);
        if(!cleaned.empty()) {
            wordCount[cleaned]++;
        }
    }

    
    map<char, int> letterCount;
    for(char ch : text) {
        if(isalpha(ch)) {
            letterCount[tolower(ch)]++;
        }
    }

    
    cout << "\nWord Frequencies:\n";
    for(const auto& pair : wordCount) {
        cout << pair.first << " : " << pair.second << endl;
    }

    cout << "\nLetter Frequencies:\n";
    for(const auto& pair : letterCount) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;;
}

