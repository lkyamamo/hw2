#include <iostream>
#include <sstream>
#include <cctype>
#include <algorithm>
#include "util.h"

using namespace std;
std::string convToLower(std::string src)
{
    std::transform(src.begin(), src.end(), src.begin(), ::tolower);
    return src;
}

/** Complete the code to convert a string containing a rawWord
    to a set of words based on the criteria given in the assignment **/
std::set<std::string> parseStringToWords(string rawWords)
{
    //convert to lower case
    rawWords = convToLower(rawWords);
    rawWords += " ";
    std::set<std::string> keywords;
    //split keywords at characters or spaces.
    unsigned long i = 0;
    unsigned long last = 0;
    std::string temp;
    while(i < rawWords.size())
    {
        //if finds a number or hyphen 
        if(((int) rawWords[i] >= 0 && (int) rawWords[i] <= 9) || (int) rawWords[i] == 45)
        {
            //move on
            ++i;
        }
        //if find a character that isnt a number or hyphen or letter
        else if(!((int) rawWords[i] >= 97 && (int) rawWords[i] <= 122))
        {
            //make sure it's long enough then insert
            if(i-last >= 2)
            {
                temp = rawWords.substr(last,i-last);
                ltrim(temp);
                rtrim(temp);
                keywords.insert(temp);
            }
            last = i+1;
            ++i;
        }
        //otherwise increment to next index
        else
        {
            ++i;
        }

    }

    return keywords;
}













/**************************************************
 * COMPLETED - You may use the following functions
 **************************************************/

// Used from http://stackoverflow.com/questions/216823/whats-the-best-way-to-trim-stdstring
// trim from start
std::string &ltrim(std::string &s) {
    s.erase(s.begin(), 
	    std::find_if(s.begin(), 
			 s.end(), 
			 std::not1(std::ptr_fun<int, int>(std::isspace))));
    return s;
}

// trim from end
std::string &rtrim(std::string &s) {
    s.erase(
	    std::find_if(s.rbegin(), 
			 s.rend(), 
			 std::not1(std::ptr_fun<int, int>(std::isspace))).base(), 
	    s.end());
    return s;
}

// trim from both ends
std::string &trim(std::string &s) {
    return ltrim(rtrim(s));
}
