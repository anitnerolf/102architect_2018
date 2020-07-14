/*
** EPITECH PROJECT, 2018
** 102_architect
** File description:
** my_architect
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

int	my_conditions(int ac, char **av, double *m);
void	usage_h(void);
void	translation_vector(int ac, char **av, double *m);
void	scaling_factor(int ac, char **av, double *m);
void	print_matrix(double *m);
void	rotation_angle(int ac, char **av, double *m);

#endif /* MY_H_ */
