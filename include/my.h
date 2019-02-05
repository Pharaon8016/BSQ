/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** my.h
*/

int my_put_nbr(int nb);

char *my_strupcase (char *str);

char *my_strlowcase (char *str);

int my_showstr (char const *str);

char *my_strcapitalize (char *str);

int my_str_isnum (char const *str);

int my_str_isalpha (char const *str);

int my_str_islower (char const *str);

int my_str_isupper (char const *str);

int my_str_isprintable (char const *str);

int my_strcmp (char const *s1, char const *s2);

char *my_strcat (char *dest, char const *src);

void my_putchar(char c);

char *my_strncat (char *dest, char const *src, int nb);

int my_strncmp (char const *s1, char const *s2, int n);

void my_swap(int *a, int *b);

int my_isneg(int nb);

int disp_stdarg(char *str, ...);

int my_strlen(char const *str);

int my_putstr(char const *str);

char *my_strcpy (char *dest, char const *src);

char *my_strncpy (char *dest, char const *src, int n);

int my_compute_power_rec(int nb, int power);

int my_is_prime (int nb);

int my_find_prime_sup (int nb);

int my_compute_square_root(int nb);

int char_to_int (char *str);

void my_sort_int_array(int *tab, int size);

char *my_strstr (char *str, char const *to_find);

char *my_revstr (char *str);

int my_get_nbr(char const *str);

void fs_understand_return_of_read(int fd, char *buffer, int size);

int fs_open_file (char const *filepath);

int fs_get_nbr_from_first_line(char *filepath);

int find_nb_cols(char const *filepath);

char *mem_alloc_array(char *arr, int x, int y);

char *load_map(char *arr, char *filepath);

void square_check(char *arr, int width, int height);

char my_getchar(char *arr, int x, int y);

void change_char(char *arr, int x, int y, char c);

void draw_result(char *arr, int x, int y, int size);

int scan_around(char *arr, int temp_x, int temp_y, int square_size);

void scan_start_point(char *arr, int x, int y, int start);

int my_putstr_error(char const *str);
