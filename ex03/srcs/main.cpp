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

    try{
        rrf = i1.makeForm("shrubbery", "Bender");
    }
    catch (std::exception &death){
        std::cerr << death.what() << std::endl;
        return 1;
    }
    
    std::cout << "\n===== TEST SIGNATURE =====" << std::endl;
    boss.signForm(*rrf);
    mid.signForm(*rrf);
    low.signForm(*rrf);
    
    std::cout << "\n===== TEST EXECUTION =====" << std::endl;
    boss.executeForm(*rrf);
    mid.executeForm(*rrf);
    low.executeForm(*rrf);

    delete rrf;
    return 0;
}
