/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:39:37 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/28 16:48:22 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
	
}

PresidentialPardonForm::PresidentialPardonForm(const std::string _target) : AForm("PresidentialPardonForm", 25, 5), target(_target) {
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& original) : AForm("PresidentialPardonForm", 25, 5), target(original.target) {

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& original) {
	// const attributes
	// can't copy any attributes
	(void)original;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	if (!this->getIsSigned())
		throw AForm::FormIsNotSignedException();

	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
