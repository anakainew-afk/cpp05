#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"

class AForm;

class Intern{
public:
    class FormNotFoundException : public std::exception{
    public:
        virtual const char* what() const throw();
    };

    Intern();
    Intern(const Intern& src);
    Intern& operator=(const Intern& src);
    ~Intern();

    AForm* makeForm(const std::string nameForm, const std::string nameTarget);
};

#endif