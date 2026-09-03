#include "../includes/AForm.hpp"

AForm::AForm(const std::string name, const int sign, const int exec) : _Name(name), _grade_sign(sign), _grade_exec(exec){
    if (sign < 1 || exec < 1)
        throw AForm::GradeTooHighException();
    if (sign > 150 || exec > 150)
        throw AForm::GradeTooLowException();
    _signed = false;
}

AForm::AForm(const AForm& src) : _Name(src._Name), _grade_sign(src._grade_sign), _grade_exec(src._grade_exec){
    *this = src;
}

AForm& AForm::operator=(const AForm& src){
    if (this != &src)
        this->_signed = src._signed;
    return *this;
}

AForm::~AForm(){}

void AForm::beSigned(const Bureaucrat& bur){
    if (bur.getGrade() > _grade_sign)
        throw AForm::GradeTooLowException();
    _signed = true;
}

std::string AForm::getName() const{
    return (this->_Name);
}

int AForm::getGradeSign() const{
    return (this->_grade_sign);
}

int AForm::getGradeExec() const{
    return (this->_grade_exec);
}

bool AForm::getSigned() const{
    return (this->_signed);
}

const char *AForm::GradeTooHighException:: what() const throw(){
    return "[AForm: Grade is too high]";
}

const char *AForm::GradeTooLowException::what() const throw(){
    return "[AForm: Grade is too low]";
}

std::ostream& operator<<(std::ostream& COUT, const AForm& object){
    COUT << "===== FORM =====" << '\n'
    <<"Name: " << object.getName() << '\n'
    << "Signed ?: " << object.getSigned() << '\n'
    << "Grade to sign: " << object.getGradeSign() << '\n'
    << "Grade to execute: " << object.getGradeExec() << '\n';
    return COUT;
}

