#include<iostream>
#include<vector>
#include<algorithm>

void printVector(const std::vector<int>& vec){
    for(int num : vec){
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main(){
    std::vector<int> vec ={1,2,3,4,5};
    int k=2;
    k = k% vec.size();

    std::vector<int> leftVec = vec;
    std::rotate(leftVec.begin(), leftVec.begin() + k, leftVec.end());
    std::cout<< "Left Rotated :" ;
    printVector(leftVec);

    std::vector<int> rightVec = vec;
    std::rotate(rightVec.begin(), rightVec.begin() + k, rightVec.end());
    std::cout<< "Right Rotated :" ;
    printVector(rightVec);
}