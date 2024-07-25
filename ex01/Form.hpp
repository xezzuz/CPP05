/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:08:56 by nazouz            #+#    #+#             */
/*   Updated: 2024/07/25 10:28:28 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
	private:
		const std::string		name;
		bool					isSigned;
		const int				signGrade;
		const int				executeGrade;
		
	public:
		Form();
		Form(const std::string name, const int signGrade, const int executeGrade);
		Form(const Form& original);
		Form& operator=(const Form& original);
		~Form();

		std::string				getName();
		bool					getIsSigned();
		int						getSignGrade();
		int						getExecuteGrade();

		void					beSigned(const Bureaucrat& toSign);

		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const Form& toPrint);

#endif