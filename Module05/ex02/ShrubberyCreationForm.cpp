/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 17:59:15 by agarzon-          #+#    #+#             */
/*   Updated: 2022/05/20 18:04:37 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &objective): 
	Form("ShrubberyCreationForm", 145, 137), objective(objective)
{
	this->trees[0] = "*";
	this->trees[1] = "/";
	this->trees[2] = "8";
	this->trees[3] = "@";
	this->trees[4] = "|";

}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other):
	Form(other), objective(other.objective)
{
	this->trees[0] = "*";
	this->trees[1] = "/";
	this->trees[2] = "8";
	this->trees[3] = "@";
	this->trees[4] = "|";

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other){
	(void)other;
	
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const{
	Form::execute(executor);
	std::ofstream out;
	int size;
	int tree;
	int nbTree = (std::rand() % 5) + 1;

	out.open(this->objective+"_shrubbery");
	for(int n = 0; n <= nbTree; n++){
		size = (std::rand() % 10) + 1;
		tree = std::rand() % 5;
		for(int i = 1; i <= size; i++){
			for (int j = 1; j <= size - i; j++)
				out << " ";
			for (int j = 1; j <= 2*i - 1; j++ )
				out << this->trees[tree];
			out << "\n";
		}
	}

	out.close();
	std::cout << this->objective+"_shrubbery created" << std::endl << std::endl;
}


