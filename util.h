#ifndef UTIL_H
#define UTIL_H

#include <string>
#include <iostream>
#include <set>
#include <iterator>


/** Complete the setIntersection and setUnion functions below
 *  in this header file (since they are templates).
 *  Both functions should run in time O(n*log(n)) and not O(n^2)
 */

template <typename T> 
std::set<T> setIntersection(std::set<T>& s1, std::set<T>& s2)
{
    typename std::set<T> output;
    typename std::set<T>::iterator it1;
    typename std::set<T>::iterator it2;

    //over whole set s1 O(n)
    for(it1 = s1.begin(); it1 != s1.end(); ++it1)
    {
        //find value at it1 in s2 O(log(s2.size())) = O(log(n))
        it2 = s2.find(*it1);
        //if it exists then insert it and increase itOut iterator
        if(it2 != s2.end())
        {
            //O(log(output.size())) = O(log(n))
            output.insert(*it2);
        }
        
    }

    //O(n*(log(n) + log(n))) = O(n*log(n))
    return output;

}

template <typename T> 
std::set<T> setUnion(std::set<T>& s1, std::set<T>& s2)
{
    typename std::set<T> output;

    //O(s1.size()) = O(n)
    for(typename std::set<T>::iterator it = s1.begin(); it != s1.end(); ++it)
    {
        //O(log(s1.size())) = O(log(n))
        output.insert(*it);
        
    }

    //O(s2.size()) = O(n)
    for(typename std::set<T>::iterator it = s2.begin(); it != s2.end(); ++it)
    {
        //O(log(s2.size())) = O(log(n))
        output.insert(*it);
    }

    //O(n*(log(n)))
    return output;
}

/***********************************************/
/* Prototypes of functions defined in util.cpp */
/***********************************************/

std::string convToLower(std::string src);

std::set<std::string> parseStringToWords(std::string line);

// Used from http://stackoverflow.com/questions/216823/whats-the-best-way-to-trim-stdstring
// Removes any leading whitespace
std::string &ltrim(std::string &s) ;

// Removes any trailing whitespace
std::string &rtrim(std::string &s) ;

// Removes leading and trailing whitespace
std::string &trim(std::string &s) ;
#endif
