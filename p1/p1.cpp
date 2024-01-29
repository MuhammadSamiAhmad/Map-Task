#include "p1.h"
using namespace std;

bool ransom_note(string ransomNote, string magazine){
    bool result = false;
    // implement the solution
      //ransomNote can be constructed from magazine if magazine contains all the letter used in making ransomNote
      //so we will make a map to store the characters(letters) itself as the keys
        unordered_map<char, int> m;
        //store all the char of magazine so that it can be searched easily using a range based for loop
        //it's range will be the string of letters
        for(auto x: magazine){
            m[x]++;
        }
		//iterate ransomNote 
        for(auto x: ransomNote){
		//decreases the freq of letters till we create the ransomNote if the letter is finished return false 
            if(!m[x] --){
                return result;
            }
        }
        return !result;
    }
