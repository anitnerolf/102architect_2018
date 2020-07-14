/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** 102_architect
*/

#include "my.h"

const	float	PI = 3.14159265358979323846;

void	usage_h(void)
{
    printf("USAGE\n");
    printf("\t.102architect x y transfo1 arg11 [arg12]");
    printf(" [transfo2 arg12 [arg22]] ...\n");
    printf("\nDESCRIPTION\n");
    printf("\tx\tabscissa of the original point\n");
    printf("\ty\tordinate of the original point\n");
    printf("\n\ttransfo arg1 [arg2]\n");
    printf("\t-t i j\ttranslation along vector(i, j)\n");
    printf("\t-z m n\tscaling by factors m (x-axis) and n(y-axis)\n");
    printf("\t-r d\trotation centered in O by a d degree angle\n");
    printf("\t-s d\treflection over the axis pasing ");
    printf("through O with an inclination\n");
    printf("\t\tangle of d degrees\n");
}

void	translation_vector(int ac, char **av, double *m)
{
    float	x = atof(av[1]) + atof(av[4]);
    float	y = atof(av[2]) + atof(av[5]);

    m[2] = atof(av[4]);
    m[5] = atof(av[5]);
    printf("Translation along vector (%.0f, %.0f)\n", atof(av[4]), atof(av[5]));
    print_matrix(m);
    printf("(%.0f, %.0f) => (%.2f, %.2f)\n", atof(av[1]), atof(av[2]), x, y);
}

void	scaling_factor(int ac, char **av, double *m)
{
    float	x = atof(av[1]) * atof(av[4]);
    float	y = atof(av[2]) * atof(av[5]);

    m[0] = atof(av[4]);
    m[4] = atof(av[5]);
    printf("Scaling by factors %.0f and %.0f\n", atof(av[4]), atof(av[5]));
    print_matrix(m);
    printf("(%.0f, %.0f) => (%.2f, %.2f)\n", atof(av[1]), atof(av[2]), x, y);
}

void	rotation_angle(int ac, char **av, double *m)
{
    float	p = atof(av[4]);
    p = (p * PI) / 180;
    float	x = ((atof(av[2])) - cos(p));
    float	y = atof(av[1]) * sin(p);

    m[0] = x;
    m[1] = -y;
    m[3] = y;
    m[4] = x;
    printf("Rotation by a %.0f degree angle\n", atof(av[4]));
    print_matrix(m);
    printf("(%.0f, %.0f) => (%.2f, %.2f)\n", atof(av[1]), atof(av[2]), x, y);
}

void	print_matrix(double *m)
{
    int	j = 0;
    int	i = 0;

    while (j < 9) {
        printf("%.2f", m[j]);
        j++;
        if (j % 3 == 0) {
            printf("\n");
            i++;
        } else
            printf("\t");
    }
}
