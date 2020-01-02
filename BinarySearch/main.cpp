//
//  main.cpp
//  BinarySearch
//
//  Created by adeeb mohammed on 03/01/20.
//  Copyright © 2020 adeeb mohammed. All rights reserved.

// function for doing binary search

#include <iostream>
#include <vector>

// time complexity o(log(n))(
// space complexity o(log(n)) space complexity
// pre requisite is the array in the sorted order

int binarySearchHelper(std::vector<int> array,int target,int left, int right){
    if(left > right){
        return -1;
    }
    int midIndex = (right + left) / 2;
    int midElement = array[midIndex];
    if(midElement == target){
        return midIndex;
    }else if(midElement > target){
        return binarySearchHelper(array, target, left, midIndex-1);
    }else{
        return binarySearchHelper(array, target, midIndex+1, right);
    }
}

int binarySearch(std::vector<int> array, int target) {
    return binarySearchHelper(array,target,0,(int)array.size()-1);
}

int main(int argc, const char * argv[]) {
    std::cout << "binary search function"<< std::endl;
    
    return 0;
}
