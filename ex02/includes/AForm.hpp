#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"

class AForm{
protected:
	virtual void executeAction() const = 0;
	AForm(std::string name, int gradeExecute, int gradeSign);
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
    
    AForm(const AForm& src);
    AForm& operator=(const AForm& src);
    virtual ~AForm();

    int getGradeSign() const;
    int getGradeExec() const;
    bool getSigned() const;
    std::string getName() const;

    void beSigned(const Bureaucrat& bur);
};

std::ostream& operator<<(std::ostream& COUT, const AForm& object);

#endif