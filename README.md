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

##  Ejercicio 3 – Promedio con Cálculo Lambda  

En este ejercicio se utiliza el **cálculo lambda** como una forma declarativa de representar el cálculo del **promedio de una lista de números**.  
Este enfoque permite expresar la operación de manera matemática y funcional, sin necesidad de detallar paso a paso cómo se ejecuta.  


## Implementación en Cálculo Lambda  

# Función Suma 
Se define una función que toma una lista y recorre sus elementos para obtener la suma total.  
De esta manera, si la lista tiene valores, se van agregando uno a uno hasta obtener el resultado final.  
Si la lista está vacía, la suma corresponde a cero.  

# Función Longitud  
Se define una función que cuenta cuántos elementos tiene una lista.  
En el caso de una lista vacía, la longitud es cero, mientras que si tiene valores se va sumando uno por cada elemento encontrado.  
Esto permite calcular el tamaño de la lista de forma recursiva y precisa.  

# Función Promedio 
El promedio se representa como la división de la suma de los elementos de la lista entre la cantidad total de elementos.  
En otras palabras, combina los dos cálculos anteriores (suma y longitud) para dar un resultado final.  


# Ejemplo  

Dada la lista:  

\[
[2, 4, 6]
\]  

- SUM([2,4,6]) = 2 + 4 + 6 = 12  
- LEN([2,4,6]) = 3 
- PROM([2,4,6]) = 12 / 3 = 4 

 **Resultado:** `4`  


#  Conclusiones  

- El cálculo lambda permite expresar operaciones de manera **funcional y matemática**.  
- El promedio se reduce a dos funciones básicas: suma y conteo.  
- Esta forma de representación refleja el enfoque declarativo característico de lenguajes como **Haskell**, resaltando la claridad y la abstracción en la definición de algoritmos.  


  





