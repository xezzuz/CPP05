/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xezzuz <xezzuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:39:35 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/10 14:39:29 by xezzuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm(const std::string _target) : AForm("RobotomyRequestForm", 72, 45), target(_target) {
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& original) : AForm("RobotomyRequestForm", 72, 45), target(original.target) {
	
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& original) {
	// const attributes
	// can't copy any attributes
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	int			num = rand();

	if (executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	if (!this->getIsSigned())
		throw AForm::FormIsNotSignedException();

	std::cout << "< DRILLING NOISES >" << std::endl;
	if (num % 2)
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	else
		std::cerr << this->target << " Robotomy Failed" << std::endl; // cerr or cout?
}
