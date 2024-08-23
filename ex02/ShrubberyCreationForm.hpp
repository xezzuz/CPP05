/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xezzuz <xezzuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:37:06 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/10 14:22:25 by xezzuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		const std::string		target;

		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(const std::string _target);
		ShrubberyCreationForm(const ShrubberyCreationForm& original);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& original);
		~ShrubberyCreationForm();

		// std::string		getTarget() const ; necessary?

		void			execute(Bureaucrat const & executor) const ;
};

#endif