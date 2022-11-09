//
// Created by Webis on 14/09/2020.
//

#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H
using std::vector;

template <typename T>
int linearSearch(T target, vector<T> list){
    for (int i = 0; i < list.size(); ++i) {
        if (list[i] == target){
            return i;
        }
    }
    return -1;
}

template <typename T>
int linearSearch(T target, T list[], int size){
    for (int i = 0; i < size; ++i) {
        if (list[i] == target){
            return i;
        }
    }
    return -1;
}
#endif //LINEAR_SEARCH_H
