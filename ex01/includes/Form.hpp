#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Form{
private:
    const std::string _Name;
    bool _signed;
    const int _grade_sign;
    const int _grade_exec;
public:
    class GradeTooHighException : public std::exception{
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception{
    public:
        virtual const char* what() const throw();
    };

    Form(const std::string name, const int sign, const int exec);
    Form(const Form& src);
    Form& operator=(const Form& src);
    ~Form();

    int getGradeSign() const;
    int getGradeExec() const;
    bool getSigned() const;
    std::string getName() const;

    void beSigned(const Bureaucrat& bur);


};

std::ostream& operator<<(std::ostream& COUT, const Form& object);



#endif