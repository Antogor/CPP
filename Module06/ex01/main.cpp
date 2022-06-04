/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 17:48:47 by agarzon-          #+#    #+#             */
/*   Updated: 2022/06/04 17:13:23 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main(){

    Serialize s;
    uintptr_t raw;
    Data *d = new Data;
    Data *deserialize;

    d->n = 42;
    d->c = 'x';
    d->s = "This is 42";

    std::cout << "--- Serialize ---" << std::endl;
    raw = s.serialize(d);
    std::cout << "Data d serialized is: " << raw << "\n" << std::endl;

    std::cout << "--- Deserialize ---" << std::endl;
    deserialize = s.deserialize(raw);
    std::cout << "Structure d fields: " << std::endl;
    std::cout << "- INT: " << d->n << " - CHAR: " << d->c << " - STRING: " << d->s << std::endl;
    std::cout << "Structure deserialize fields: " << std::endl;
    std::cout << "- INT: " << deserialize->n << " - CHAR: "<< deserialize->c << " - STRING: " << deserialize->s << std::endl;

    delete d;

    return 0;
}
