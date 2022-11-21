#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
void printWord(string, string);


int main()
{
    string word1, word2;
    cout << "Please enter a value for word 1" << endl;
    cin >> word1;
    cout << "Please enter a value for word 2" << endl ;
    cin >> word2;
    vector<string> strArray = {word1, word2};
    sort(strArray.begin(), strArray.end());
    cout << endl << "Report:" << endl;
    printWord(word1, "First");
    printWord(word1, "Second");
    cout << "First Word & Second Word Comparison" << endl;
    if (word1 == word2)
        cout << "The same" << endl;
    else
        cout << "Not the Same" << endl;
    cout << "First Word & Second Word Alphabetical Listing" << endl << endl;
    for (int i = 0; i < strArray.size(); i++)
        cout << strArray[i] << endl;
    
    return 0;
}

void printWord(string word1, string wordName){
    string word11 = word1;
    cout << wordName << " Word: " << word1 << endl;
    for (int i = 0; i < word1.length(); i++){
        word1[i] = tolower(word1[i]);
    }
    cout<< wordName << " Word Lower Case: " << word1 << endl;
    for (int i = 0; i < word1.length(); i++){
        word1[i] = toupper(word1[i]);
    }
    cout << wordName << " Word Upper Case: " << word1 << endl;
    cout << wordName << " Word Total Characters: " << word11.length() << endl;
    cout << wordName << " Word First Character: " << word11[0] << endl;
    cout << wordName << " Word Last Character: " << word11[word11.length()-1] << endl << endl;
}
