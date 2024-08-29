/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:37:06 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/29 17:37:46 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string		target;

		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(const std::string _target);
		ShrubberyCreationForm(const ShrubberyCreationForm& original);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& original);
		~ShrubberyCreationForm();

		void			execute(Bureaucrat const & executor) const ;
};

#endif