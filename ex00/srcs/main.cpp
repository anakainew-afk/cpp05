#include "../includes/Bureaucrat.hpp"

int main(){

    try {
        Bureaucrat b1("AOC", 5);
        Bureaucrat b2;

        b1.upGrade();
        std::cout << b1 << std::endl;
        b2.downGrade();
        std::cout << b2 << std::endl;
        // Bureaucrat b2(b1);
        // Bureaucrat b3;


        // b1.downGrade();
        // std::cout << b1 << std::endl;
        // b2.upGrade();
        // std::cout << b2 << std::endl;
        // std::cout << b3 << std::endl;

        // b3 = b1;

        // std::cout << b2 << std::endl;
    }
    catch(const std::exception& death){
        std::cerr << death.what() << '\n';
    }
    return 0;
}
