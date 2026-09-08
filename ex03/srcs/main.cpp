#include "../includes/ShrubberyCreationForm.hpp"

int	main(){
    
	std::cout << "===== CREATION DES BUREAUCRATS =====" << std::endl;
    Bureaucrat boss("AOC", 1);
    Bureaucrat mid("Kennedy", 125);
    Bureaucrat low("Bidden", 150);

    std::cout << boss << std::endl;
    std::cout << mid << std::endl;
    std::cout << low << std::endl;

    std::cout << "\nTRAVAIL INTERN..." << std::endl;

    Intern i1;
    AForm* rrf;

    rrf = i1.makeForm("presidential", "Bender");

    if (rrf){
        std::cout << "\n===== TEST SIGNATURE =====" << std::endl;
    
        boss.signForm(*rrf);
        mid.signForm(*rrf);
        low.signForm(*rrf);
    
        std::cout << "\n===== TEST EXECUTION =====" << std::endl;
    
        boss.executeForm(*rrf);
        mid.executeForm(*rrf);
        low.executeForm(*rrf);
        delete rrf;
    }

    return 0;
}
