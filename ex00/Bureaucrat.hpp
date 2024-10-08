/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:11:21 by nazouz            #+#    #+#             */
/*   Updated: 2024/08/29 16:35:41 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	private:
		const std::string		name;
		int						grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat&	original);
		Bureaucrat&		operator=(const Bureaucrat&	original);
		~Bureaucrat();

		std::string		getName() const;
		int				getGrade() const;
		void			incrementGrade();
		void			decrementGrade();

		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& toPrint);

#endif