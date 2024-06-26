//
// Created by Paolo Lanaro on 1/28/2024.
//

#ifndef WORDGAMES_MERGESORTSTRING_H
#define WORDGAMES_MERGESORTSTRING_H

#include <string>

class MergeSortString {
private:
    static std::string merge(const std::string& left, const std::string& right);
    static std::string mergesort(const std::string& word);
public:
    // Takes a string as a parameter and returns a string containing all the letters of the word lexicographically sorted.
    static std::string lexicographicSort(const std::string& word);
};

#endif //WORDGAMES_MERGESORTSTRING_H
