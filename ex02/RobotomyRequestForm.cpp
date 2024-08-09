/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:39:35 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/09 09:59:51 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
	// should be private
}

RobotomyRequestForm::RobotomyRequestForm(const std::string _target) : AForm(_target + "_robotomy_request_form", 72, 45), target(_target) {
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& original) : AForm(original.target + "_robotomy_request_form", 72, 45), target(original.target) {
	
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& original) {
	// const attributes
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	
}
