#include "../includes/ShrubberyCreationForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target){
    if (_grade_sign < 1 || _grade_exec < 1)
        throw RobotomyRequestForm::GradeTooHighException();
    if (_grade_sign > 72 || _grade_exec > 45)
        throw RobotomyRequestForm::GradeTooLowException();
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : _grade_sign(src._grade_sign), _grade_exec(src._grade_exec){}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src){
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

const char *RobotomyRequestForm::GradeTooHighException:: what() const throw(){
    return "[RobotomyRequestForm: Grade is too high]";
}

const char *RobotomyRequestForm::GradeTooLowException::what() const throw(){
    return "[RobotomyRequestForm: Grade is too low]";
}