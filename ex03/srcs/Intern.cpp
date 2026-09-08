#include "../includes/ShrubberyCreationForm.hpp"

Intern::Intern(){}

// Intern::Intern(const Intern& src){
//     *this = src;
// }

// Intern& Intern::operator=(const Intern& src){
//     return *this;
// }

Intern::~Intern(){}

AForm* Intern::makeForm(const std::string nameForm, const std::string nameTarget){
    std::string levels[] = {"shrubbery", "robotomy", "presidential"};
    int v = 0;
    AForm* obj;

    while (v < 3 && nameForm != levels[v])
        v++;
    switch (v){
        case 0:
            obj = new ShrubberyCreationForm(nameTarget);
            break;
        case 1:
            obj = new RobotomyRequestForm(nameTarget);
            break;
        case 2:
            obj = new PresidentialPardonForm(nameTarget);
            break;
        default:
            throw Intern::FormNotFoundException();
    }
    std::cout << "Intern creates " << nameForm << std::endl;
    return obj;
}

const char *Intern::FormNotFoundException:: what() const throw(){
    return "[Intern: The form does not exist]";
}