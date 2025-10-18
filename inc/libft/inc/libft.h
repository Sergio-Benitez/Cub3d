/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenitez <sbenitez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:15:20 by sbenitez          #+#    #+#             */
/*   Updated: 2025/10/18 21:27:50 by sbenitez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include "ft_printf.h"
# include "get_next_line.h"

/**
 * Comprueba si el carácter es alfabético (a-z o A-Z).
 * @param c El carácter a comprobar.
 * @return Distinto de cero si es alfabético, 0 en caso contrario.
 */
int		ft_isalpha(int c);

/**
 * Comprueba si el carácter es un dígito (0-9).
 * @param c El carácter a comprobar.
 * @return Distinto de cero si es dígito, 0 en caso contrario.
 */
int		ft_isdigit(int c);

/**
 * Comprueba si el carácter es alfanumérico (a-z, A-Z o 0-9).
 * @param c El carácter a comprobar.
 * @return Distinto de cero si es alfanumérico, 0 en caso contrario.
 */
int		ft_isalnum(int c);

/**
 * Comprueba si el carácter es ASCII (0-127).
 * @param c El carácter a comprobar.
 * @return Distinto de cero si es ASCII, 0 en caso contrario.
 */
int		ft_isascii(int c);

/**
 * Comprueba si el carácter es imprimible (32-126).
 * @param c El carácter a comprobar.
 * @return Distinto de cero si es imprimible, 0 en caso contrario.
 */
int		ft_isprint(int c);

/**
 * Calcula la longitud de una cadena.
 * @param s La cadena a medir.
 * @return La longitud de la cadena.
 */
size_t	ft_strlen(const char *s);

/**
 * Rellena memoria con un byte constante.
 * @param b Puntero al área de memoria.
 * @param c El byte con el que rellenar (convertido a unsigned char).
 * @param len Número de bytes a rellenar.
 * @return Puntero al área de memoria.
 */
void	*ft_memset(void *b, int c, size_t len);

/**
 * Establece memoria a cero.
 * @param s Puntero al área de memoria.
 * @param n Número de bytes a poner a cero.
 */
void	ft_bzero(void *s, size_t n);

/**
 * Copia área de memoria.
 * @param dst Puntero de destino.
 * @param src Puntero de origen.
 * @param n Número de bytes a copiar.
 * @return Puntero al destino.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * Copia área de memoria (maneja solapamientos).
 * @param dst Puntero de destino.
 * @param src Puntero de origen.
 * @param len Número de bytes a copiar.
 * @return Puntero al destino.
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

/**
 * Copia cadena con límite de tamaño (termina en NULL el resultado).
 * @param dst Buffer de destino.
 * @param src Cadena de origen.
 * @param dstsize Tamaño del buffer de destino.
 * @return Longitud total de la cadena que intentó crear.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * Concatena cadenas con límite de tamaño (termina en NULL el resultado).
 * @param dst Buffer de destino.
 * @param src Cadena de origen a añadir.
 * @param dstsize Tamaño del buffer de destino.
 * @return Longitud total de la cadena que intentó crear.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * Convierte letra minúscula a mayúscula.
 * @param c El carácter a convertir.
 * @return Versión en mayúscula si aplica, sin cambios en caso contrario.
 */
int		ft_toupper(int c);

/**
 * Convierte letra mayúscula a minúscula.
 * @param c El carácter a convertir.
 * @return Versión en minúscula si aplica, sin cambios en caso contrario.
 */
int		ft_tolower(int c);

/**
 * Localiza la primera aparición de un carácter en una cadena.
 * @param s La cadena en la que buscar.
 * @param c El carácter a encontrar.
 * @return Puntero a la primera aparición, o NULL si no se encuentra.
 */
char	*ft_strchr(const char *s, int c);

/**
 * Localiza la última aparición de un carácter en una cadena.
 * @param s La cadena en la que buscar.
 * @param c El carácter a encontrar.
 * @return Puntero a la última aparición, o NULL si no se encuentra.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * Compara dos cadenas hasta n bytes.
 * @param s1 Primera cadena.
 * @param s2 Segunda cadena.
 * @param n Número máximo de bytes a comparar.
 * @return Diferencia entre los primeros bytes diferentes, o 0 si son iguales.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * Escanea memoria en busca de un carácter.
 * @param s Puntero al área de memoria.
 * @param c Carácter a encontrar.
 * @param n Número de bytes a escanear.
 * @return Puntero a la primera aparición, o NULL si no se encuentra.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * Compara dos áreas de memoria.
 * @param s1 Primera área de memoria.
 * @param s2 Segunda área de memoria.
 * @param n Número de bytes a comparar.
 * @return Diferencia entre los primeros bytes diferentes, o 0 si son iguales.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * Localiza subcadena en cadena dentro de un límite de longitud.
 * @param haystack La cadena en la que buscar.
 * @param needle La subcadena a encontrar.
 * @param len Longitud máxima para buscar.
 * @return Puntero a la primera aparición, o NULL si no se encuentra.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * Convierte cadena a entero.
 * @param str La cadena a convertir.
 * @return El valor entero.
 */
int		ft_atoi(const char *str);

/**
 * Reserva y pone a cero memoria.
 * @param count Número de elementos.
 * @param size Tamaño de cada elemento.
 * @return Puntero a la memoria reservada, o NULL en caso de error.
 */
void	*ft_calloc(size_t count, size_t size);

/**
 * Duplica una cadena (reserva nueva memoria).
 * @param s1 La cadena a duplicar.
 * @return Puntero a la cadena duplicada, o NULL en caso de error.
 */
char	*ft_strdup(const char *s1);

/**
 * Crea subcadena a partir de cadena.
 * @param s La cadena de origen.
 * @param start Índice de inicio.
 * @param len Longitud máxima de la subcadena.
 * @return Nueva subcadena reservada, o NULL en caso de error.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * Concatena dos cadenas en una nueva cadena reservada.
 * @param s1 Primera cadena.
 * @param s2 Segunda cadena.
 * @return Nueva cadena concatenada reservada, o NULL en caso de error.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * Recorta caracteres de ambos extremos de la cadena.
 * @param s1 La cadena a recortar.
 * @param set Caracteres a eliminar.
 * @return Nueva cadena recortada reservada, o NULL en caso de error.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * Divide cadena en array de cadenas usando delimitador.
 * @param s La cadena a dividir.
 * @param c El carácter delimitador.
 * @return Array de cadenas (terminado en NULL), o NULL en caso de error.
 */
char	**ft_split(char const *s, char c);

/**
 * Convierte entero a cadena.
 * @param n El entero a convertir.
 * @return Nueva representación en cadena reservada, o NULL en caso de error.
 */
char	*ft_itoa(int n);

/**
 * Aplica función a cada carácter de la cadena (crea nueva cadena).
 * @param s La cadena a mapear.
 * @param f Función a aplicar (recibe índice y carácter).
 * @return Nueva cadena transformada reservada, o NULL en caso de error.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * Aplica función a cada carácter de la cadena (modifica in situ).
 * @param s La cadena a iterar.
 * @param f Función a aplicar (recibe índice y puntero al carácter).
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * Escribe un carácter en un descriptor de archivo.
 * @param c El carácter a escribir.
 * @param fd El descriptor de archivo.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * Escribe una cadena en un descriptor de archivo.
 * @param s La cadena a escribir.
 * @param fd El descriptor de archivo.
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * Escribe una cadena seguida de salto de línea en un descriptor de archivo.
 * @param s La cadena a escribir.
 * @param fd El descriptor de archivo.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * Escribe un entero en un descriptor de archivo.
 * @param n El entero a escribir.
 * @param fd El descriptor de archivo.
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * Estructura de nodo de lista enlazada.
 * @param content Puntero al contenido del nodo.
 * @param next Puntero al siguiente nodo, o NULL si es el último.
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * Crea un nuevo nodo de lista.
 * @param content Contenido a almacenar en el nodo.
 * @return Nuevo nodo reservado, o NULL en caso de error.
 */
t_list	*ft_lstnew(void *content);

/**
 * Añade nodo al principio de la lista.
 * @param lst Dirección del puntero al primer nodo.
 * @param new Nodo a añadir.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * Cuenta el número de nodos en la lista.
 * @param lst Primer nodo de la lista.
 * @return Número de nodos.
 */
int		ft_lstsize(t_list *lst);

/**
 * Devuelve el último nodo de la lista.
 * @param lst Primer nodo de la lista.
 * @return Último nodo, o NULL si la lista está vacía.
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * Añade nodo al final de la lista.
 * @param lst Dirección del puntero al primer nodo.
 * @param new Nodo a añadir.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * Elimina un solo nodo (libera contenido y nodo).
 * @param lst Nodo a eliminar.
 * @param del Función para eliminar el contenido.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * Elimina y libera la lista (todos los nodos y su contenido).
 * @param lst Dirección del puntero al primer nodo.
 * @param del Función para eliminar el contenido.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * Itera la lista y aplica función al contenido de cada nodo.
 * @param lst Primer nodo de la lista.
 * @param f Función a aplicar.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * Crea nueva lista aplicando función al contenido de cada nodo.
 * @param lst Primer nodo de la lista.
 * @param f Función para transformar el contenido.
 * @param del Función para eliminar el contenido en caso de error.
 * @return Nueva lista, o NULL en caso de error.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif