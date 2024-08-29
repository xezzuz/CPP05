/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:37:06 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/29 17:38:20 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _target) : AForm("ShrubberyCreationForm", 145, 137), target(_target) {
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& original) : AForm("ShrubberyCreationForm", 145, 137), target(original.target) {
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& original) {
	target = original.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	std::ofstream		outfile;

	if (executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	if (!this->getIsSigned())
		throw AForm::FormIsNotSignedException();

	outfile.open(this->target + "_shrubbery", std::ios::out);
	if (!outfile.is_open()) {
		std::cout << "Problem Opening File" << std::endl;
		exit(1);
	}

	for (int i = 0; i < 5; i++) {
		outfile <<	"         v" << std::endl;
		outfile <<	"        >X<" << std::endl;
		outfile <<	"         A" << std::endl;
		outfile <<	"        d$b" << std::endl;
		outfile <<	"      .d\\$$b." << std::endl;
		outfile <<	"    .d$i$$\\$$b." << std::endl;
		outfile <<	"       d$$@b" << std::endl;
		outfile <<	"      d\\$$$ib" << std::endl;
		outfile <<	"    .d$$$\\$$$b" << std::endl;
		outfile <<	"  .d$$@$$$$\\$$ib." << std::endl;
		outfile <<	"      d$$i$$b" << std::endl;
		outfile <<	"     d\\$$$$@$b" << std::endl;
		outfile <<	"  .d$@$$\\$$$$$@b." << std::endl;
		outfile <<	".d$$$$i$$$\\$$$$$$b." << std::endl;
		outfile <<	"        ###" << std::endl;
		outfile <<	"        ###" << std::endl;
		outfile <<	"        ###" << std::endl << std::endl << std::endl;
	}

	outfile.close();
}
