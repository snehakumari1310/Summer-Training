#include<iostream>
#include<vector>

int main() {
    std::vector<int> vec = {1,2,5,8,9};

    //for maximum element
   int max= vec[0];
    for(int i=1; i<vec.size(); i++){
        if(vec[i]>max){
            max= vec[i];
        }
    }
    std::cout << "Maximum element: " << max << std::endl;
    return 0;
}