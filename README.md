| Nom                         | Fonction                                         | Description                                                       |
|-----------------------------|--------------------------------------------------|-------------------------------------------------------------------|
| **ft_isalpha**               | `int ft_isalpha(int c)`                          | Vérifie si le caractère est une lettre alphabétique               |
| **ft_isdigit**               | `int ft_isdigit(int c)`                          | Vérifie si le caractère est un chiffre                            |
| **ft_isalnum**               | `int ft_isalnum(int c)`                          | Vérifie si le caractère est alphanumérique                        |
| **ft_isascii**               | `int ft_isascii(int c)`                          | Vérifie si le caractère est un caractère ASCII                    |
| **ft_isprint**               | `int ft_isprint(int c)`                          | Vérifie si le caractère est imprimable                            |
| **ft_toupper**               | `int ft_toupper(int c)`                          | Convertit un caractère en majuscule                                |
| **ft_tolower**               | `int ft_tolower(int c)`                          | Convertit un caractère en minuscule                                |
| **ft_memcmp**                | `int ft_memcmp(void *dest, const void *src, size_t n)` | Compare deux blocs de mémoire                                      |
| **ft_atoi**                  | `int ft_atoi(const char *nptr)`                  | Convertit une chaîne en entier                                     |
| **ft_strncmp**               | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compare les premières n lettres de deux chaînes                   |
| **ft_strlen**                | `size_t ft_strlen(const char *s)`                 | Retourne la longueur de la chaîne                                  |
| **ft_strlcpy**               | `size_t ft_strlcpy(char *dest, const char *src, size_t size)` | Copie une chaîne avec gestion de la taille                         |
| **ft_strlcat**               | `size_t ft_strlcat(char *dest, const char *src, size_t size)` | Concatène deux chaînes avec gestion de la taille                   |
| **ft_strchr**                | `char *ft_strchr(const char *s, int c)`          | Trouve la première occurrence d'un caractère                      |
| **ft_strrchr**               | `char *ft_strrchr(const char *s, int c)`         | Trouve la dernière occurrence d'un caractère                      |
| **ft_strdup**                | `char *ft_strdup(const char *s)`                 | Crée une copie dynamique de la chaîne                              |
| **ft_substr**                | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Extrait une sous-chaîne                                            |
| **ft_strjoin**               | `char *ft_strjoin(char const *s1, char const *s2)` | Concatène deux chaînes                                             |
| **ft_strtrim**               | `char *ft_strtrim(char const *s1, char const *set)` | Supprime les caractères de `set` au début et à la fin de la chaîne |
| **ft_split**                 | `char **ft_split(char const *s, char c)`         | Divise une chaîne en sous-chaînes par un séparateur                |
| **ft_itoa**                  | `char *ft_itoa(int n)`                           | Convertit un entier en chaîne                                      |
| **ft_strnstr**               | `char *ft_strnstr(const char *big, const char *little, size_t len)` | Recherche une chaîne dans une autre                               |
| **ft_strmapi**               | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applique une fonction à chaque caractère de la chaîne             |
| **ft_striteri**              | `void ft_striteri(char *s, void (*f)(unsigned int, char*))` | Applique une fonction à chaque caractère de la chaîne (modifie)   |
| **ft_putchar_fd**            | `void ft_putchar_fd(char c, int fd)`             | Écrit un caractère sur un descripteur de fichier                   |
| **ft_putstr_fd**             | `void ft_putstr_fd(char *s, int fd)`             | Écrit une chaîne sur un descripteur de fichier                    |
| **ft_putendl_fd**            | `void ft_putendl_fd(char *s, int fd)`            | Écrit une chaîne suivie d'un retour à la ligne                     |
| **ft_putnbr_fd**             | `void ft_putnbr_fd(int n, int fd)`               | Écrit un entier sur un descripteur de fichier                      |
| **ft_memset**                | `void *ft_memset(void *s, int c, size_t n)`      | Remplit une zone mémoire avec un octet                            |
| **ft_bzero**                 | `void ft_bzero(void *s, size_t n)`               | Remplit une zone mémoire avec des zéros                           |
| **ft_memcpy**                | `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copie de la mémoire d'une zone à une autre                        |
| **ft_memmove**               | `void *ft_memmove(void *dest, const void *src, size_t n)` | Déplace une zone mémoire en gérant les chevauchements             |
| **ft_memchr**                | `void *ft_memchr(const void *s, int c, size_t n)` | Cherche un caractère dans une zone mémoire                        |
| **ft_calloc**                | `void *ft_calloc(size_t nmemb, size_t size)`     | Alloue de la mémoire initialisée à zéro                           |
| **ft_lstnew**                | `t_list *ft_lstnew(void *content)`               | Crée un nouvel élément de liste                                    |
| **ft_lstlast**               | `t_list *ft_lstlast(t_list *lst)`                | Trouve le dernier élément de la liste                              |
| **ft_lstadd_front**          | `void ft_lstadd_front(t_list **lst, t_list *new)` | Ajoute un élément au début de la liste                             |
| **ft_lstadd_back**           | `void ft_lstadd_back(t_list **lst, t_list *new)`  | Ajoute un élément à la fin de la liste                             |
| **ft_lstsize**               | `int ft_lstsize(t_list *lst)`                     | Retourne la taille de la liste                                     |
