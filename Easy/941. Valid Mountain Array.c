/*
Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:

    arr.length >= 3
    There exists some i with 0 < i < arr.length - 1 such that:
        arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
        arr[i] > arr[i + 1] > ... > arr[arr.length - 1]



Example 1:

Input: arr = [0,3,2,1]
Output: true
*/
bool validMountainArray(int* arr, int arrSize){
    if (arrSize < 3){
        return false;
    }

    int valley = 0;

    for (int i = 0; i < arrSize - 1; i++){
        if (arr[i] == arr[i + 1]){
            return false;
        }
    }
    for (int i = 0; i < arrSize - 1; i++){
        if (arr[i] > arr[i + 1]){
            if (i == 0){
                return false;
            }
            valley = i;
            break;
        }
    }

    for (int i = 0; i < valley; i++){
        if (arr[i] > arr[i + 1]){
            return false;
        }
    }
    for (int i = valley; i < arrSize - 1; i++){
        if (arr[i] < arr[i + 1]){
            return false;
        }
    }
    return true;
}
