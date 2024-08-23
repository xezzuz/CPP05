/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xezzuz <xezzuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:15:23 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/10 14:47:04 by xezzuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(0) {
	
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << "Constructor Called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat&	original) : name(original.name), grade(original.grade) {
	
}

Bureaucrat&		Bureaucrat::operator=(const Bureaucrat&		original) {
	if (this != &original) {
		grade = original.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "~Destructor Called\n";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::string		Bureaucrat::getName() const {
	return name;
}

int				Bureaucrat::getGrade() const {
	return grade;
}

void			Bureaucrat::incrementGrade() {
	std::cout << "<trying to increment grade>\n";
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
	std::cout << "<grade incremented>\n";
}

void			Bureaucrat::decrementGrade() {
	std::cout << "<trying to decrement grade>\n";
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
	std::cout << "<grade decremented>\n";
}

void			Bureaucrat::signForm(AForm& formToBeSigned) {
	formToBeSigned.beSigned(*this);
}

void			Bureaucrat::executeForm(AForm const & form) {
	if (!form.getIsSigned()) {
		std::cerr << this->name << " coudn't execute " << form.getName() << " because form isn't signed" << std::endl;	
		throw AForm::FormIsNotSignedException();
	}
		
	
	if (this->grade > form.getExecuteGrade()) {
		std::cerr << this->name << " coudn't execute " << form.getName() << " because of his grade" << std::endl ;
		throw Bureaucrat::GradeTooLowException();
	}
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& toPrint) {
	out << toPrint.getName() << ", bureaucrat grade " << toPrint.getGrade() << std::endl;
	return out;
}
