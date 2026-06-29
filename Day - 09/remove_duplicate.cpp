#include<iostream>
#include<vector>
int main() {
    
    //remove duplicate elements from vector
    std::vector<int> vec = {1,2,3,4,5,1,2,3,4,5};
    std::vector<int> uniqueVec;
    for(const auto& element : vec){
        bool isDuplicate = false;
        for(const auto& uniqueElement : uniqueVec){
            if(element == uniqueElement){
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate){
            uniqueVec.push_back(element);
        }
    }
    std::cout << "Vector after removing duplicates: ";
    for(const auto& element : uniqueVec){
        std::cout << element << " ";
    }
    std::cout << std::endl;
    return 0;
}