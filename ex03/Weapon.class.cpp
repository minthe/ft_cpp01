/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:15:59 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/27 19:23:53 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"
#include <iostream>

Weapon::Weapon(std::string newType) : _type(newType) {}
Weapon::~Weapon() {}

std::string	Weapon::getType()
{
	std::string&	typeREF = this->_type; // TODO do i need this? or does it generally return a const reference?
	return (typeREF);
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
	return;
}
