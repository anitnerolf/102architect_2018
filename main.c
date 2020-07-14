/*
** EPITECH PROJECT, 2018
** 102_architect
** File description:
** 102_architect
*/

#include "my.h"

int	my_conditions(int ac, char **av, double *m)
{
    if (av[3][1] == 't') {
        if (ac == 6) {
            translation_vector(ac, av, m);
        }
        exit (84);
    }
    if (av[3][1] == 'z') {
        if (ac == 6) {
            scaling_factor(ac, av, m);
        }
        exit (84);
    }
    if (av[3][1] == 'r') {
        if (ac == 5) {
            rotation_angle(ac, av, m);
        }
        exit (84);
    }
    return (0);
}

int	main(int ac, char **av)
{
    double	m[9] = {1, 0, 0, 0, 1, 0, 0, 0, 1};

    if (ac == 1)
        exit (84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        usage_h();
    }
    if(av[3][0] == '-' ) {
        my_conditions(ac, av, m);
    }
    return (0);
}
