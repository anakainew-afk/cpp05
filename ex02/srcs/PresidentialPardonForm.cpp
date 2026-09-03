#include "../includes/ShrubberyCreationForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target){
    if (_grade_sign < 1 || _grade_exec < 1)
        throw PresidentialPardonForm::GradeTooHighException();
    if (_grade_sign > 25 || _grade_exec > 5)
        throw PresidentialPardonForm::GradeTooLowException();
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : _grade_sign(src._grade_sign), _grade_exec(src._grade_exec){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src){
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

const char *PresidentialPardonForm::GradeTooHighException:: what() const throw(){
    return "[PresidentialPardonForm: Grade is too high]";
}

const char *PresidentialPardonForm::GradeTooLowException::what() const throw(){
    return "[PresidentialPardonForm: Grade is too low]";
}