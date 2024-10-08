/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:27:04 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/29 17:04:36 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), isSigned(false), signGrade(1), executeGrade(1) {
	
}

Form::Form(const std::string name, const int signGrade, const int executeGrade)
	: name(name), isSigned(false), signGrade(signGrade), executeGrade(executeGrade) {
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form::Constructor Called\n";
}

Form::Form(const Form& original) 
	: name(original.name), isSigned(original.isSigned), signGrade(original.signGrade), executeGrade(original.executeGrade) {
	std::cout << "Form::Copy Constructor Called\n";
}

Form& Form::operator=(const Form& original) {
	this->isSigned = original.isSigned;
	std::cout << "Form::Copy Assignment Operator Called\n";
	return *this;
}

Form::~Form() {
	std::cout << "~Form::Destructor Called\n";
}

std::string				Form::getName() const {
	return name;
}

bool					Form::getIsSigned() const {
	return isSigned;
}

int						Form::getSignGrade() const {
	return signGrade;
}

int						Form::getExecuteGrade() const {
	return executeGrade;
}

void					Form::beSigned(const Bureaucrat& toSign) {
	if (isSigned) {
		std::cout << name << " is already signed\n";
		return ;
	}

	if (toSign.getGrade() > signGrade) {
		std::cout << toSign.getName() << " couldn't sign " << name
				  << " because his grade is too low.\n";
		throw Form::GradeTooLowException();
	}
	else {
		std::cout << toSign.getName() << " signed " << name << ".\n";
		isSigned = true;
	}
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream&	operator<<(std::ostream& out, const Form& toPrint) {
	std::cout << "Form " << toPrint.getName();
	if (toPrint.getIsSigned())
		std::cout << " is signed. ";
	else
		std::cout << " is not signed. ";
	std::cout << "Sign grade: " << toPrint.getSignGrade();
	std::cout << ", Execution grade: " << toPrint.getExecuteGrade();
	return out;
}
