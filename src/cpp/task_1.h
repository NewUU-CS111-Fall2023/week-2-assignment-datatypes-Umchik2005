/*
 * Author:
 * Date:
 * Name:
 */


int firstTask(){
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        std::cout << year << " is leap year";
    } else {
        std::cout << year << " isn't leap year";
    }
    return 0;
}