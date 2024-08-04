/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:46:55 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/04 18:17:38 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	
	try {
		Bureaucrat		b1("lqayed", 9);
		Form			f1("shahadat sokna", 10, 3);

		f1.beSigned(b1);
	}
	catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}

	try {
		Bureaucrat		b1("lmqaddem", 10);
		Form			f1("shahadat sokna", 10, 3);

		b1.signForm(f1);
	}
	catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}


	try {
		Bureaucrat		b1("sikiriti", 150);
		Form			f1("shahadat sokna", 10, 3);

		f1.beSigned(b1);
	}
	catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}

	
	return 0;
}
