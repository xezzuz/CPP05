/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:37:06 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/09 09:47:17 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {
	// should be private
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _target) : AForm(_target + "_shrubberry_form", 145, 137), target(_target) {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& original) : AForm(original.target + "_shrubberry_form", 145, 137), target(original.target) {
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& original) {
	// const attributes
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	
}
