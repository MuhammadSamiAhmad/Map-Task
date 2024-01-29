#include "p2.h"
using namespace std;
bool SameChar (string s , string S, int size);
set<string> word_amalgamation(vector<string> dictionary, string scrambled_word){
    set<string> result;
    // implement the solution
    for (int i = 0; i < dictionary.size(); i++)
    {
        if(scrambled_word.length() == dictionary.at(i).length() )
        {
            if (SameChar(scrambled_word, dictionary.at(i), scrambled_word.length()))
            {
                result.insert(dictionary.at(i));
            }
        }
        else{
            continue;
        }
    }
    return result;
}
//making sure the scrambled word string have the same letters as in the dictionary 
bool SameChar(string s , string S, int size){
    int found , notfound=0;
    for (int i = 0; i < size; i++) {
			found = 0;
			for (int j = 0; j < size; j++) {
				if (s[i] == S[j]) {
					found = 1;
					break;
				}
			}
			if (found == 0) {
				notfound = 1;
				break;
			}
		}
		if (notfound == 1) {
			return false;
		}
		else {
			return true;
		}
	}