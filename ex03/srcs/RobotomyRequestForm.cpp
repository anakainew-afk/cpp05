#include "../includes/ShrubberyCreationForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), _target(target){}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : AForm(src), _target(src._target){}

// RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src){
//     return *this;
// }

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::executeAction() const{
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    
    std::cout << "drilling..." << '\n'
            << "drilling..." << '\n'
            << "drilling..." << std::endl;
    
    if (std::rand() % 2 == 0){
        std::cout << _target << " has been robotomized successfully" << std::endl;
        return ;
    }
    else
        std::cout << "The robotomization of " << _target << " has failed" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const{
    return (_target);
}
