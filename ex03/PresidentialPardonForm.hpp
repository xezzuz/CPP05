/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:22:11 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/29 17:40:33 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string		target;

		PresidentialPardonForm();

	public:
		PresidentialPardonForm(const std::string _target);
		PresidentialPardonForm(const PresidentialPardonForm& original);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& original);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const ;
};

#endif