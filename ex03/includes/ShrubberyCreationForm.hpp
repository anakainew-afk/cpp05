#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "RobotomyRequestForm.hpp"

class ShrubberyCreationForm : public AForm {
protected:
    void executeAction() const;
private:
    const std::string _target;
public:
    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm& src);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& src);
    ~ShrubberyCreationForm();

    std::string getTarget() const;
};

#endif