#include "../includes/Form.hpp"

Form::Form(const std::string name, const int sign, const int exec) : _Name(name), _grade_sign(sign), _grade_exec(exec){
    if (sign < 1 || exec < 1)
        throw Form::GradeTooHighException();
    if (sign > 150 || exec > 150)
        throw Form::GradeTooLowException();
    _signed = false;
}

Form::Form(const Form& src) : _Name(src._Name), _grade_sign(src._grade_sign), _grade_exec(src._grade_exec){
    *this = src;
}

Form& Form::operator=(const Form& src){
    if (this != &src)
        this->_signed = src._signed;
    return *this;
}

Form::~Form(){}

void Form::beSigned(const Bureaucrat& bur){
    if (bur.getGrade() > _grade_sign)
        throw Form::GradeTooLowException();
    _signed = true;
}

std::string Form::getName() const{
    return (this->_Name);
}

int Form::getGradeSign() const{
    return (this->_grade_sign);
}

int Form::getGradeExec() const{
    return (this->_grade_exec);
}

bool Form::getSigned() const{
    return (this->_signed);
}

const char *Form::GradeTooHighException:: what() const throw(){
    return "[Form: Grade is too high]";
}

const char *Form::GradeTooLowException::what() const throw(){
    return "[Form: Grade is too low]";
}

std::ostream& operator<<(std::ostream& COUT, const Form& object){
    COUT << "===== FORM =====" << '\n'
    <<"Name: " << object.getName() << '\n'
    << "Signed ?: " << object.getSigned() << '\n'
    << "Grade to sign: " << object.getGradeSign() << '\n'
    << "Grade to execute: " << object.getGradeExec() << '\n';
    return COUT;
}

