/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xezzuz <xezzuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:22:11 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/10 14:02:57 by xezzuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		const std::string		target;

		PresidentialPardonForm();

	public:
		PresidentialPardonForm(const std::string _target);
		PresidentialPardonForm(const PresidentialPardonForm& original);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& original);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const ;
};

#endif