/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:49:12 by user42            #+#    #+#             */
/*   Updated: 2020/12/01 10:15:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "Enemy.hpp"

int main(){
    PowerFist pw_weapon;
    PlasmaRifle ps_weapon;

    Enemy Jean("normal", 80);

    Jean.takeDamage(20);
    std::cout << Jean.getHP() << std::endl;
    Jean.takeDamage(70);
    std::cout << Jean.getHP() << std::endl;

}
