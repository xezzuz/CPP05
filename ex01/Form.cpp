/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:27:04 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/25 10:27:10 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), isSigned(false) {
	
}

Form::Form(const std::string name, const int signGrade, const int executeGrade) : name(name), isSigned(false), signGrade(signGrade), executeGrade(executeGrade) {
	
}

Form::Form(const Form& original) : name(original.name), isSigned(original.isSigned), signGrade(original.signGrade), executeGrade(original.executeGrade) {
	
}

Form& Form::operator=(const Form& original) {
	//?
}

Form::~Form() {
	
}

std::string				Form::getName() {
	return name;
}

bool					Form::getIsSigned() {
	return isSigned;
}

int						Form::getSignGrade() {
	return signGrade;
}

int						Form::getExecuteGrade() {
	return executeGrade;
}

void					Form::beSigned(const Bureaucrat& toSign) {
	if (toSign.getGrade() > signGrade)
		throw Form::GradeTooLowException();
	else
		isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream&	operator<<(std::ostream& out, const Form& toPrint) {
	
}