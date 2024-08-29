/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xezzuz <xezzuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:17:35 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/10 14:02:54 by xezzuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		const std::string		target;

		RobotomyRequestForm();

	public:
		RobotomyRequestForm(const std::string _target);
		RobotomyRequestForm(const RobotomyRequestForm& original);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& original);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const & executor) const ;
};

#endif