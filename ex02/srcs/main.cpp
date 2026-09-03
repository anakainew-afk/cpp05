#include "../includes/AForm.hpp"

int main(){

    try {
        Bureaucrat b1("AOC", 4);
        Bureaucrat b2(b1);
        Form form1("Presidency", 3, 1);

        std::cout << form1 << std::endl;

        b2.signForm(form1);

        Form form2(form1);

        std::cout << form2 << std::endl;
    }
    catch(const std::exception& death){
        std::cerr << death.what() << '\n';
    }
    return 0;
}
