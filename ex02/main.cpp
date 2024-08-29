/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:56:24 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/29 17:43:49 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {

	std::cout << "<--------------- FIRST TEST --------------->" << std::endl;
	try {
		Bureaucrat				b1("John", 136);
		ShrubberyCreationForm	form("home");

		b1.signForm(form);
		b1.executeForm(form);
	}
	catch (std::exception& err) {
		std::cerr << "Exception Caught: " << err.what() << std::endl;
	}

	std::cout << "\n<--------------- SECOND TEST --------------->" << std::endl;
	try {
		Bureaucrat				b1("Jane", 40);
		RobotomyRequestForm		form("Kayo");

		b1.signForm(form);
		b1.executeForm(form);
	}
	catch (std::exception& err) {
		std::cerr << "Exception Caught: " << err.what() << std::endl;
	}

	std::cout << "\n<--------------- THIRD TEST --------------->" << std::endl;
	try {
		Bureaucrat				b1("Jane", 4);
		PresidentialPardonForm	form("Jett");

		b1.signForm(form);
		b1.executeForm(form);
	}
	catch (std::exception& err) {
		std::cerr << "Exception Caught: " << err.what() << std::endl;
	}
	
	std::cout << "\n<--------------- FAILURE TEST --------------->" << std::endl;
	try {
		Bureaucrat				b1("John", 140);
		ShrubberyCreationForm	form("home");

		b1.signForm(form);
		b1.executeForm(form);
	}
	catch (std::exception& err) {
		std::cerr << "Exception Caught: " << err.what() << std::endl;
	}

	std::cout << "\n<--------------- FAILURE TEST --------------->" << std::endl;
	try {
		Bureaucrat				b1("Jim", 14);
		RobotomyRequestForm		form("Kayo");

		b1.executeForm(form);
	}
	catch (std::exception& err) {
		std::cerr << "Exception Caught: " << err.what() << std::endl;
	}

}
