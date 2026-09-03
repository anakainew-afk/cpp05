#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _Name(name), _grade(grade){
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _Name(src._Name){
    *this = src;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src){
    if (this != &src)
        this->_grade = src._grade;
    return *this;
}

Bureaucrat::~Bureaucrat(){}

std::ostream& operator<<(std::ostream& COUT, const Bureaucrat& object){
    COUT << object.getName() << ", Bureaucrat grade " << object.getGrade() << ".";
    return COUT;
}

std::string Bureaucrat::getName() const{
    return (this->_Name);
}

int Bureaucrat::getGrade() const{
    return (this->_grade);
}

void Bureaucrat::upGrade(){
    if ((_grade - 1) < 1)
			throw Bureaucrat::GradeTooHighException();
		_grade--;
}

void Bureaucrat::downGrade(){
    if ((_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(AForm& form){
    try{
        form.beSigned(*this);
        std::cout << _Name << " signed for " << form.getName() << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << _Name << " couldn't sign " << form.getName() << " because " << e.what() << '\n';
    }
}

const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return "[Bureaucrat: Grade is too high]";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw(){
	return "[Bureaucrat: Grade is too low]";
}