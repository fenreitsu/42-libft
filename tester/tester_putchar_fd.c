/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_putchar_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 16:35:34 by reiascan          #+#    #+#             */
/*   Updated: 2026/10/10 16:55:20 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void test_stdout(void)
{
    ft_putchar_fd('A', 1);
    ft_putchar_fd('\n', 1);
}

void test_newline(void)
{
    ft_putchar_fd('\n', 1);
}

void test_stderr(void)
{
    ft_putchar_fd('E', 2);
    ft_putchar_fd('\n', 2);
}

void test_tab(void)
{
    ft_putchar_fd('\t', 1);
    ft_putchar_fd('X', 1);
    ft_putchar_fd('\n', 1);
}

void test_null_char(void)
{
    ft_putchar_fd('\0', 1);
    ft_putchar_fd('Z', 1);
    ft_putchar_fd('\n', 1);
}

void test_single_byte(void)
{
    ft_putchar_fd('H', 1);
    ft_putchar_fd('o', 1);
    ft_putchar_fd('l', 1);
    ft_putchar_fd('a', 1);
    ft_putchar_fd('\n', 1);
}

void test_bad_fd(void)
{
    ft_putchar_fd('X', -1);
    ft_putchar_fd('Y', 999);
}

void test_closed_fd(void)
{
    int fd = open("/dev/null", O_WRONLY);
    close(fd);
    ft_putchar_fd('Q', fd);   // fd ya cerrado
}

void test_many(void)
{
    int i = 0;
    while (i < 10)
    {
        ft_putchar_fd('0' + i, 1);
        i++;
    }
    ft_putchar_fd('\n', 1);
}

void test_to_file(void)
{
    int fd = open("out.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    ft_putchar_fd('F', fd);
    ft_putchar_fd('\n', fd);
    close(fd);
}

int main(void)
{
    test_stdout();
    test_newline();
    test_stderr();
    test_tab();
    test_null_char();
    test_single_byte();
    test_bad_fd();
    test_closed_fd();
    test_many();
    test_to_file();
    return (0);
}