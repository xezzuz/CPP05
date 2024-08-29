/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:21:56 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/28 19:07:26 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	
}

Intern::Intern(const Intern& original) {
	(void)original;
}

Intern& Intern::operator=(const Intern& original) {
	(void)original;
	return (*this);
}

Intern::~Intern() {
	
}

AForm*	Intern::makeShrubbery(const std::string target) {
	return new ShrubberyCreationForm(target);
}

AForm*	Intern::makeRobotomy(const std::string target) {
	return new RobotomyRequestForm(target);
}

AForm*	Intern::makePardon(const std::string target) {
	return new PresidentialPardonForm(target);
}

AForm*	Intern::makeForm(const std::string formName, const std::string target) {
	std::string			forms[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm*				(Intern::*formsFcts[3])(const std::string) = {
		&Intern::makeShrubbery,
		&Intern::makeRobotomy,
		&Intern::makePardon
	};

	for (int i = 0; i < 3; i++) {
		if (formName == forms[i]) {
			std::cout << "Inter creates " << formName << std::endl;
			return (this->*formsFcts[i])(target);
		}
	}
	std::cerr << "The form " << formName << " doesn't exist\n";
	return NULL;
}
