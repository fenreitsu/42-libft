*Este proyecto ha sido creado como parte del currículo de 42 por [reiascan]*

# Libft

## Descripción

`Libft` es el primer proyecto individual del currículo de 42. Su objetivo principal es recrear una selección de funciones estándar de la librería C (`libc`), junto con funciones de utilidad adicionales para la gestión de memoria, la manipulación de cadenas y el manejo de listas enlazadas.

Elaborar esta librería de C personalizada proporciona una comprensión profunda y fundamental de la aritmética de punteros, la asignación dinámica de memoria (`malloc`, `free`), la implementación de estructuras de datos y los comportamientos de bajo nivel del sistema en C. La librería estática resultante (`libft.a`) sirve como dependencia fundamental para futuros proyectos de 42.

---

## Descripción general de la librería y descripción de funciones

La librería consta de funciones obligatorias modeladas a partir de `libc`, funciones de utilidad personalizadas y funciones bonus de gestión de listas enlazadas.

### 1. Funciones estándar de Libc

* **Gestión de memoria:**
  * `ft_memset` – Rellena la memoria con un byte constante.
  * `ft_bzero` – Borra los datos de un área de memoria escribiendo ceros.
  * `ft_memcpy` – Copia un bloque de memoria desde el origen al destino.
  * `ft_memmove` – Copia memoria de forma segura incluso cuando el origen y el destino se solapan.
  * `ft_memchr` – Busca un carácter específico en la memoria.
  * `ft_memcmp` – Compara dos bloques de memoria byte a byte.
  * `ft_calloc` – Asigna memoria para un array e inicializa todos los bytes a cero.

* **Manipulación de cadenas:**
  * `ft_strlen` – Mide la longitud de una cadena.
  * `ft_strlcpy` – Copia una cadena a un buffer con control de tamaño.
  * `ft_strlcat` – Concatena una cadena a otra con comprobación de límites de tamaño.
  * `ft_strchr` – Encuentra la primera aparición de un carácter en una cadena.
  * `ft_strrchr` – Encuentra la última aparición de un carácter en una cadena.
  * `ft_strncmp` – Compara dos cadenas hasta $n$ bytes.
  * `ft_strnstr` – Localiza una subcadena dentro de una cadena hasta una longitud máxima.
  * `ft_strdup` – Asigna y duplica una cadena.

* **Comprobación y conversión de caracteres:**
  * `ft_isalpha` – Comprueba si un carácter es alfabético.
  * `ft_isdigit` – Comprueba si un carácter es un dígito decimal ($0$ a $9$).
  * `ft_isalnum` – Comprueba si un carácter es alfanumérico.
  * `ft_isascii` – Comprueba si un carácter es un carácter ASCII.
  * `ft_isprint` – Comprueba si un carácter es imprimible.
  * `ft_toupper` – Convierte un carácter a mayúscula.
  * `ft_tolower` – Convierte un carácter a minúscula.
  * `ft_atoi` – Convierte una cadena ASCII a un entero.

### 2. Funciones de utilidad adicionales

* `ft_substr` – Extrae una subcadena de una cadena dada.
* `ft_strjoin` – Concatena dos cadenas en una nueva cadena asignada dinámicamente.
* `ft_strtrim` – Recorta los caracteres especificados al principio y al final de una cadena.
* `ft_split` – Divide una cadena en un array de subcadenas usando un delimitador especificado.
* `ft_itoa` – Convierte un entero en una cadena ASCII asignada dinámicamente.
* `ft_strmapi` – Aplica una función a cada carácter de una cadena para construir una nueva cadena.
* `ft_striteri` – Aplica una función in-place a cada carácter de una cadena.
* `ft_putchar_fd` – Escribe un solo carácter en un descriptor de archivo específico.
* `ft_putstr_fd` – Escribe una cadena en un descriptor de archivo específico.
* `ft_putendl_fd` – Escribe una cadena seguida de un salto de línea en un descriptor de archivo.
* `ft_putnbr_fd` – Escribe un entero en un descriptor de archivo específico.

### 3. Listas enlazadas

Funciones diseñadas para manipular estructuras de listas enlazadas simples (`t_list`):

* `ft_lstnew` – Asigna e inicializa un nuevo elemento de lista.
* `ft_lstadd_front` – Añade un elemento al principio de la lista.
* `ft_lstsize` – Cuenta el número total de elementos de la lista.
* `ft_lstlast` – Devuelve el último elemento de la lista.
* `ft_lstadd_back` – Añade un elemento al final de la lista.
* `ft_lstdelone` – Elimina un solo elemento y libera su memoria usando una función personalizada.
* `ft_lstclear` – Elimina y libera una lista completa.
* `ft_lstiter` – Itera a través de una lista y aplica una función al contenido de cada elemento.
* `ft_lstmap` – Crea una nueva lista aplicando una función a cada elemento de una lista existente.

---

## Instrucciones

### Compilación

El proyecto utiliza un `Makefile` que compila todos los archivos fuente con `cc` y las flags `-Wall -Wextra -Werror`, y genera la librería estática `libft.a` mediante `ar`.

1. **Compilar la librería:**

   ~~~bash
   make
   ~~~

   Esto compila todos los archivos `.c` listados en `SRC` y genera el archivo de librería estática `libft.a`.

2. **Limpiar los archivos objeto:**

   ~~~bash
   make clean
   ~~~

   Elimina todos los archivos objeto (`.o`) generados durante la compilación.

3. **Limpiar los archivos objeto y `libft.a`:**

   ~~~bash
   make fclean
   ~~~

   Elimina tanto los archivos objeto como la librería estática `libft.a`.

4. **Recompilar todo desde cero:**

   ~~~bash
   make re
   ~~~

   Ejecuta `fclean` y luego `all`, recompilando el proyecto completo.

### Integración y ejecución

Para usar `libft.a`:

1. Incluye el header en tu archivo `*.c`:

   ~~~
   #include "libft.h"
   ~~~

2. Compilar enlazando la librería `libft.a`:

   ~~~bash
   cc -Wall -Wextra -Werror main.c libft.a
   ~~~

   - `-Wall` activa todos los warnings importantes.
   - `-Wextra` activa warnings adicionales.
   - `-Werror` convierte los warnings en errores.

   También puedes enlazarla por nombre, indicando al enlazador dónde buscar:

   ~~~bash
   cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
   ~~~

   - `-L.` indica al enlazador que busque librerías en el directorio actual.
   - `-lft` indica que enlace con `libft.a` (el prefijo `lib` y la extensión `.a` se omiten).

   En ambos casos, la librería debe colocarse **después** de los archivos que la usan.

## Recursos

### Referencias y documentación

* **PDF del subject de 42** – Contiene las reglas específicas del proyecto, los prototipos exactos de cada función, los requisitos de normativa y los criterios de evaluación. Es la fuente principal y de la cual realmente se entiende casi todo lo que se solicita hacer.
* **https://pythontutor.com/c.html** – Herramienta de visualización paso a paso de código C. Se utilizó para identificar fallos en el código, entender el flujo de ejecución y depurar errores relacionados con punteros y memoria.
* **https://www.w3schools.com/** – Utilizado para repasar conceptos básicos de C, como sintaxis, tipos de datos, operadores y estructuras de control.
* **El man (manual) de Linux** – Consulta de los comandos del sistema y de los prototipos y comportamientos de las funciones estándar de `libc` (por ejemplo, `man strlen`, `man malloc`, casi todas las funciones que se encontraban ahí).

### Sobre el uso de IA

* **Tareas:** La IA se utilizó exclusivamente para crear, formatear y estructurar este archivo `README.md` de acuerdo con los requisitos indicados en el subject de este proyecto de 42. También se ha utilizado para entender conceptos, teoría, etc., al momento de estudiar desde fuera del clúster.