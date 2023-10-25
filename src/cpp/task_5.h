#include <cstdlib>
#include <string>
#include <ctime>

// I think first we should get the size of the map frpm the user (e.g in PUBG the size of map "Erangel" is 8x8 km)

void fifthTask(){
    int size, n;
    int opponentX, opponentY;
    int tries = 0;
    int playerX, playerY;
    bool isPlayerAliive = true;
    do
    {
        std::cout << "Please enter the size of the map (if you type 10, then the map will be 10x10. Max size of map is 20):";
        std::cin >> size;
    } while (size > 20);

    std::cout << "Enter number of N: ";
    std::cin >> n;

    opponentX = rand() % size;
    opponentY = rand() % size;

    do
    {
        
        std::cout << "Enter the coordinates of your player (first x, then y): ";
        std::cin >> playerX >> playerY;

            if (playerX == opponentX && playerY == opponentY){
                std::cout << "Player died" << std::endl;
                break;
            } else if((playerX < 0 && playerX > size) || (playerY < 0 && playerY > size)){ // The player should be in the map
                std::cout << "Player died" << std::endl;
                break;   
            } else {
                std::cout << "Player is alive " << std::endl;
            }
        tries++;
    } while (isPlayerAliive && tries < n);
    
}