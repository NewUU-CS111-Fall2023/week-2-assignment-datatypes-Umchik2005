#include <cstdlib>
#include <time.h>

void secondTask(){
    int num;
    bool isMatch = false;
    srand(time(0));
    int randomNum = rand() % 100;
    std::cout << randomNum << "\n";
    
    do
    {
        std::cout << "Enter a number (1-100): ";
        std::cin >> num;
            if(num > randomNum) {
                std::cout << "Too high" << "\n";
            } else if (num < randomNum){
                std::cout << "Too low" << "\n";
            } else {
                std::cout << "Great";
            }
    } while (num != randomNum);
}