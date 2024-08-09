/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:27:04 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/04 18:27:37 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name(""), isSigned(false), signGrade(1), executeGrade(1) {
	
}

AForm::AForm(const std::string name, const int signGrade, const int executeGrade)
	: name(name), isSigned(false), signGrade(signGrade), executeGrade(executeGrade) {
	std::cout << "AForm::Constructor Called\n";
}

AForm::AForm(const AForm& original) : name(original.name), isSigned(original.isSigned), signGrade(original.signGrade), executeGrade(original.executeGrade) {
	std::cout << "AForm::Copy Constructor Called\n";
}

AForm& AForm::operator=(const AForm& original) {
	// what to copy?
	this->isSigned = original.isSigned;
	std::cout << "AForm::Copy Assignment Operator Called\n";
	return *this;
}

AForm::~AForm() {
	std::cout << "~AForm::Destructor Called\n";
}

std::string				AForm::getName() const {
	return name;
}

bool					AForm::getIsSigned() const {
	return isSigned;
}

int						AForm::getSignGrade() const {
	return signGrade;
}

int						AForm::getExecuteGrade() const {
	return executeGrade;
}

void					AForm::beSigned(const Bureaucrat& toSign) {
	if (this->getIsSigned()) {
		std::cout << this->name << " is already signed\n";
		return ;
	}

	if (toSign.getGrade() > signGrade) {
		std::cout << toSign.getName() << " couldn't sign " << this->name
				  << " because his grade is too low.\n";
		throw AForm::GradeTooLowException();
	}
	else {
		std::cout << toSign.getName() << " signed " << this->name << ".\n";
		isSigned = true;
	}
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream&	operator<<(std::ostream& out, const AForm& toPrint) {
	std::cout << "AForm " << toPrint.getName();
	if (toPrint.getIsSigned())
		std::cout << " is signed. ";
	else
		std::cout << " is not signed. ";
	std::cout << "Sign grade: " << toPrint.getSignGrade();
	std::cout << ", Execution grade: " << toPrint.getExecuteGrade() << ".\n";
	return out;
}
