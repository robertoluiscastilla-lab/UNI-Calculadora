# Calculadora Interactiva en C++

Una calculadora en consola desarrollada en C++ que realiza operaciones aritméticas fundamentales y cálculo de potencia entera, incorporando validación explícita de errores matemáticos y reutilización de resultados.

---

## Características

* **Operaciones Soportadas:** Suma (`+`), Resta (`-`), Multiplicación (`*`), División (`/`) y Potencia (`P`).
* **Potencia Personalizada:** Algoritmo propio mediante bucles para calcular exponentes enteros (positivos, cero y negativos) sin librerías externas como `<cmath>`.
* **Manejo de Errores Explícito:** Captura y muestra mensajes personalizados ante indeterminaciones o fallos de entrada.
* **Persistencia de Estado:** Permite utilizar el resultado de la última operación como primer operando en la siguiente iteración (`R` / `r`).

---

## Tecnologías

* **Lenguaje:** C++ (Estándar C++11 o superior)
* **Librerías estándar:** `<iostream>`, `<cctype>`

---

## Validaciones y Excepciones Matemáticas

El programa evalúa las siguientes restricciones antes de realizar los cálculos:

1. **División entre cero:** Genera error al intentar dividir por 0.
2. **Cero a la cero (0^0):** Notifica una indeterminación matemática.
3. **Cero a exponente negativo (0^-n):** Bloquea la operación por equivaler a una división entre cero (1 / 0^n).
4. **Operación no válida:** Detecta cuando el operador ingresado no corresponde a las opciones del menú.

---

## Consideraciones de Diseño

* **Manejo de tipos:** Los operandos se gestionan como `double`. En el caso de la potencia, el exponente se convierte explícitamente a entero (`int`) mediante `static_cast`.
* **Control de flujo e historial:** Si ocurre un error durante la ejecución o el usuario decide no reutilizar el valor previo, el programa resetea automáticamente la memoria de estado para prevenir el arrastre de datos obsoletos.

---

## Cómo ejecutar el proyecto

**Requisitos**

* Tener instalado un compilador de C++ compatible con C++11 o superior.

* Tener Git instalado para clonar el repositorio.

* No es necesario instalar librerías externas, ya que el programa utiliza únicamente librerías estándar de C++.

**1. Clonar el repositorio**

Abre una terminal y ejecuta:

git clone https://github.com/robertoluiscastilla-lab/UNI-Calculadora.git

Luego, entra a la carpeta del proyecto con el siguiente comando:

cd UNI-Calculadora

**2. Compilar el programa**

Si tienes instalado g++, puedes compilar el archivo calculadora.cpp con:

g++ calculadora.cpp -o calculadora

**3. Ejecutar el programa**

En Windows:

calculadora.exe

En Linux o macOS:

./calculadora
