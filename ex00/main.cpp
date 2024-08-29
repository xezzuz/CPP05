/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:43:40 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/29 16:51:23 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	std::cout << "<--------------- FIRST TEST --------------->" << std::endl;
	try {
		Bureaucrat		b1("sidna", 1);

		std::cout << b1 << std::endl;
		b1.incrementGrade();
	}
	catch (std::exception& err) {
		std::cerr << err.what() << std::endl;
	}

	std::cout << "\n<--------------- SECOND TEST --------------->" << std::endl;
	try {
		Bureaucrat		b2("lbasha", 5);

		std::cout << b2 << std::endl;
		b2.incrementGrade();
		std::cout << b2 << std::endl;
	}
	catch (std::exception& err) {
		std::cerr << err.what() << std::endl;
	}

	std::cout << "\n<--------------- THIRD TEST --------------->" << std::endl;
	try {
		Bureaucrat		b3("lmqddem", 151);

		std::cout << b3 << std::endl;
		b3.decrementGrade();
		std::cout << b3 << std::endl;
	}
	catch (std::exception& err) {
		std::cerr << err.what() << std::endl;
	}

	std::cout << "\n<--------------- FOURTH TEST --------------->" << std::endl;
	try {
		Bureaucrat		b4("sikiriti", 150);

		std::cout << b4 << std::endl;
		b4.decrementGrade();
		std::cout << b4 << std::endl;
	}
	catch (std::exception& err) {
		std::cerr << err.what() << std::endl;
	}

	return 0;
}
