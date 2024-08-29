/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:56:24 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/29 17:51:19 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

typedef AForm Form;

int main() {
	Intern					someRandomIntern;
	AForm					*forms[4];
	Bureaucrat				b1("John", 136);

	forms[0] = someRandomIntern.makeForm("shrubbery creation", "home");
	forms[1] = someRandomIntern.makeForm("robotomy request", "Kayo");
	forms[2] = someRandomIntern.makeForm("presidential pardon", "pooler");
	forms[3] = someRandomIntern.makeForm("non-existent-form", "pooler"); // should fail

	for (int i = 0; i < 4; i++) {
		delete forms[i];
	}
}
