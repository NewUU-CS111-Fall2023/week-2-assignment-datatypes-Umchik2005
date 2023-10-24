
    void fourthTask(){
        std::string str;
        std::string substr;
        std::cout << "Enter a sentence: ";
        std::getline(std::cin >> std::ws, str);
        
        std::cout << "Enter a word: ";
        std::cin >> substr;

        int index = str.find(substr);

        if(index == -1){
            std::cout << "No match" << std::endl;
        } else {
            std::cout << "Index of substring : " << index << std::endl;
        }
    }
    