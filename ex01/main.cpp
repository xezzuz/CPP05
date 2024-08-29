/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:46:55 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/29 17:05:33 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	
	std::cout << "<--------------- FIRST TEST --------------->" << std::endl;
	try {
		Bureaucrat		b1("lqayed", 9);
		Form			f1("shahadat sokna", 10, 3);

		std::cout << f1 << std::endl;
		f1.beSigned(b1);
	}
	catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}

	std::cout << "\n<--------------- SECOND TEST --------------->" << std::endl;
	try {
		Bureaucrat		b1("lmqaddem", 10);
		Form			f1("shahadat sokna", 10, 3);

		std::cout << f1 << std::endl;
		b1.signForm(f1);
	}
	catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}

	std::cout << "\n<--------------- THIRD TEST --------------->" << std::endl;
	try {
		Bureaucrat		b1("sikiriti", 150);
		Form			f1("shahadat sokna", 10, 3);

		std::cout << f1 << std::endl;
		f1.beSigned(b1);
	}
	catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}

	return 0;
}
