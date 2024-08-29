/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:37:06 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/28 16:47:52 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {
	// should be private
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _target) : AForm("ShrubberryForm", 145, 137), target(_target) {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& original) : AForm("ShrubberryForm", 145, 137), target(original.target) {
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& original) {
	// const attributes
	// can't copy any attributes
	(void)original;
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
