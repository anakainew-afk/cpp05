#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Intern.hpp"

class PresidentialPardonForm : public AForm {
protected:
    void executeAction() const;
private:
    const std::string _target;
public:
    PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm(const PresidentialPardonForm& src);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& src);
    ~PresidentialPardonForm();

    std::string getTarget() const;
};
#endif