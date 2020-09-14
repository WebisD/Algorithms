//
// Created by Webis on 13/09/2020.
//

#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

using std::vector;

template <typename T>
bool binarySearch(T target, vector<T>list){
    int min = 0, max = list.size()-1;
    int middle;

    while (max >= min) {
        middle = (max + min) / 2;

        if (list[middle] == target) {
            return true;
        }

        if (list[middle] < target) {
            min = middle + 1;
        } else {
            max = middle - 1;
        }
    }

    return false;

}

template <typename T>
bool binarySearch(T target, T list[], unsigned int size){
    int min = 0, max = size;
    int middle;

    while (max >= min) {
        middle = (max + min) / 2;

        if (list[middle] == target) {
            return true;
        }

        if (list[middle] < target) {
            min = middle + 1;
        } else {
            max = middle - 1;
        }
    }

    return false;

}
#endif //BINARYSEARCH_H
