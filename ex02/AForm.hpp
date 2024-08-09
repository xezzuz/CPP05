/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:08:56 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/05 17:49:43 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm {
	private:
		const std::string		name;
		bool					isSigned;
		const int				signGrade;
		const int				executeGrade;

	public:
		AForm();
		AForm(const std::string name, const int signGrade, const int executeGrade);
		AForm(const AForm& original);
		AForm& operator=(const AForm& original);
		~AForm();

		std::string				getName() const;
		bool					getIsSigned() const;
		int						getSignGrade() const;
		int						getExecuteGrade() const;

		void					beSigned(const Bureaucrat& toSign);

		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const AForm& toPrint);

#endif