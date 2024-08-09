/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:39:37 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/05 18:25:07 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
	
}

PresidentialPardonForm::PresidentialPardonForm(const std::string _target) : AForm(_target + "presidential_pardon_form", 25, 5), target(_target) {
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& original) : AForm(original.target + "presidential_pardon_form", 25, 5), target(original.target) {

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& original) {
	// const attributes
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}
