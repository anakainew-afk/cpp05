#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>

class Form;

class Bureaucrat{
private:
    const std::string _Name;
    int _grade;
public:
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat& src);
    Bureaucrat& operator=(const Bureaucrat& src);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;

    void upGrade();
    void downGrade();

    void signForm(Form& form);
};

std::ostream& operator<<(std::ostream& COUT, const Bureaucrat& object);

#endif