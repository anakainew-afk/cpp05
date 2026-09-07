#include "../includes/ShrubberyCreationForm.hpp"

int	main(){
    
	std::cout << "===== CREATION DES BUREAUCRATS =====" << std::endl;
    Bureaucrat boss("Boss", 1);
    Bureaucrat mid("Mid", 50);
    Bureaucrat low("Low", 120);

    std::cout << boss << std::endl;
    std::cout << mid << std::endl;
    std::cout << low << std::endl;

    std::cout << "\nCREATION DES FORMS..." << std::endl;

    ShrubberyCreationForm shrub("home");
    RobotomyRequestForm robo("Bender");
    PresidentialPardonForm pardon("Arthur Dent");

    std::cout << "\n===== TEST SIGNATURE =====" << std::endl;

    low.signForm(shrub);
    mid.signForm(shrub);

    mid.signForm(robo);
    boss.signForm(robo);

    mid.signForm(pardon);
    boss.signForm(pardon);

    std::cout << "\n===== TEST EXECUTION =====" << std::endl;

    low.executeForm(shrub);
    mid.executeForm(shrub);

    mid.executeForm(robo);
    boss.executeForm(robo);

    mid.executeForm(pardon);
    boss.executeForm(pardon);

    std::cout << "\n===== TEST EXECUTION SANS SIGNATURE =====" << std::endl;

    ShrubberyCreationForm unsignedForm("garden");
    boss.executeForm(unsignedForm);

    return 0;
}
