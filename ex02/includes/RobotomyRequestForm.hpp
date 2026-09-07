#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "PresidentialPardonForm.hpp"

class RobotomyRequestForm : public AForm {
protected:
    void executeAction() const;
private:
    const std::string _target;
public:
    RobotomyRequestForm(const std::string& target);
    RobotomyRequestForm(const RobotomyRequestForm& src);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& src);
    ~RobotomyRequestForm();

    std::string getTarget() const;
};

#endif