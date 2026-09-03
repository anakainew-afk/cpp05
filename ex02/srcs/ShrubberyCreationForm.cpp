#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target){
    if (_grade_sign < 1 || _grade_exec < 1)
        throw ShrubberyCreationForm::GradeTooHighException();
    if (_grade_sign > 145 || _grade_exec > 137)
        throw ShrubberyCreationForm::GradeTooLowException();
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : _grade_sign(src._grade_sign), _grade_exec(src._grade_exec){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src){
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

const char *ShrubberyCreationForm::GradeTooHighException:: what() const throw(){
    return "[ShrubberyCreationForm: Grade is too high]";
}

const char *ShrubberyCreationForm::GradeTooLowException::what() const throw(){
    return "[ShrubberyCreationForm: Grade is too low]";
}

