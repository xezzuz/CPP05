/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:15:52 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/28 19:03:24 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern& original);
		Intern& operator=(const Intern& original);
		~Intern();

		AForm	*makeShrubbery(const std::string target);
		AForm	*makeRobotomy(const std::string target);
		AForm	*makePardon(const std::string target);
		AForm	*makeForm(const std::string formName, const std::string target);
};

#endif