## Parcial_1
#  Ejercicio 1 – Ordenamiento de Estudiantes  

El problema consiste en ordenar una lista de estudiantes con sus calificaciones bajo las siguientes reglas:  

- Orden descendente por calificación.  
- En caso de empate, ordenar alfabéticamente por nombre.  

La solución se desarrolló aplicando dos enfoques de programación:  


#  Enfoque Imperativo 
- Se indica **cómo resolver el problema paso a paso.  
- Se manipulan estructuras de datos mutables.  
- Se implementan algoritmos de ordenamiento clásicos (ej. burbuja, quicksort).
- 

#  Enfoque Declarativo/Funcional   
- Se especifica **qué resultado se desea obtener**, sin detallar cómo recorrer o modificar la lista.  
- Se utilizan funciones de orden superior y estructuras **inmutables**.  
- Ejemplo: uso de funciones como `sortBy` y criterios de comparación.  


# Análisis Comparativo  

Se realizó un análisis comparativo entre los dos paradigmas considerando:  

- Claridad y legibilidad del código.
- Nivel de abstracción y expresividad.  
- Mutabilidad vs inmutabilidad de estructuras de datos.
- Gestión del estado en cada paradigma. 
- Facilidad de mantenimiento y extensión del código.
- Eficiencia de las soluciones implementadas.

- ##  Ejercicio 2 – Gestión de Estudiantes en C con Memoria Dinámica  

En este ejercicio se implementa un sistema en **C** para manejar registros de estudiantes optimizando el uso de memoria.  

#  Características principales  
- Struct optimizado con bitfields:  
  - La edad se almacena en 7 bits (suficiente hasta 127 años).  
  - El número de identificación se guarda en 25 bits (hasta 33 millones).  
  - Esto evita reservar 4 bytes completos para cada campo.  

- Nombre y apellido dinámicos:  
  - Se asigna memoria exactamente con `malloc(strlen + 1)` en lugar de usar un tamaño fijo (ej. 100 chars).  
  - Así cada cadena ocupa únicamente lo necesario.  

- Notas como arreglo dinámico:  
  - Cada estudiante tiene un array que se ajusta al número real de materias cursadas.  

#  Funciones implementadas  
- `crear_estudiante`: reserva memoria y copia los datos del alumno.  
- `mostrar_estudiante`: imprime la información en pantalla.  
- `liberar_estudiante`: libera toda la memoria reservada (nombre, apellido, notas y el propio struct).  

#  Flujo del programa  
1. Se crean estudiantes dinámicamente con sus datos.  
2. Se muestran sus registros en pantalla.  
3. Se libera la memoria al finalizar, evitando fugas.  

#  Conclusiones  
- El uso de `malloc` y `free` garantiza que cada registro ocupe solo el espacio necesario, sin desperdicio de memoria.  
- Los **bitfields** permiten optimizar aún más el tamaño en campos pequeños como edad e identificación.  
- Al separar la lógica en funciones (`crear`, `mostrar`, `liberar`), el programa se vuelve más legible y fácil de mantener.  
- Aunque la gestión dinámica requiere mayor cuidado (especialmente liberar memoria siempre), la eficiencia en el uso de recursos es mucho mayor.

- ##  Ejercicio 3 – Promedio con Cálculo Lambda  

El **cálculo lambda** es una herramienta matemática que nos permite describir la computación de forma declarativa.  
En este ejercicio se pide representar el **promedio de una lista de números** utilizando dicha notación.  

El promedio es una operación muy común, definida como:  

\[
\text{promedio} = \frac{\text{suma de los elementos}}{\text{número de elementos}}
\]

#  Implementación en Cálculo Lambda  

# Función Suma  
Se define una función que recorre la lista acumulando sus elementos:  

\[
\text{SUM} = \lambda xs.\; 
\begin{cases} 
0 & \text{si la lista está vacía} \\ 
\text{cabeza(xs)} + \text{SUM(cola(xs))} & \text{en otro caso} 
\end{cases}
\]

# Función Longitud  
Se define una función que cuenta la cantidad de elementos en la lista:  

\[
\text{LEN} = \lambda xs.\; 
\begin{cases} 
0 & \text{si la lista está vacía} \\ 
1 + \text{LEN(cola(xs))} & \text{en otro caso} 
\end{cases}
\]

### Función Promedio  
El promedio se expresa como la división entre la suma y la longitud:  

\[
\text{PROM} = \lambda xs.\; \frac{\text{SUM(xs)}}{\text{LEN(xs)}}
\]

# Ejemplo  

Dada la lista:  

\[
[2, 4, 6]
\]  

- **SUM([2,4,6]) = 2 + 4 + 6 = 12**  
- **LEN([2,4,6]) = 3**  
- **PROM([2,4,6]) = 12 / 3 = 4**  

 **Resultado:** `4`  


#  Conclusiones  

- El cálculo lambda permite expresar operaciones de manera **funcional y matemática**.  
- El promedio se reduce a dos funciones básicas: suma y conteo.  
- Esta forma de representación refleja el enfoque declarativo característico de lenguajes como **Haskell**, resaltando la claridad y la abstracción en la definición de algoritmos.  


  





