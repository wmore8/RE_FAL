# Fundamentos de la Algoritmia (FAL)

Repositorio de ejercicios, prácticas y exámenes de la asignatura **Fundamentos de la Algoritmia (FAL)**.

Diseñado para sincronización fluida entre equipos y ejecución nativa en **Visual Studio 2022** sin necesidad de crear proyectos `.vcxproj` ni soluciones `.sln` para cada ejercicio.

---

## Estructura del Repositorio

```text
RE_FAL/
├── CMakeLists.txt	# Configuracion CMake con auto-deteccion de ejercicios
├── .gitignore		# Filtro de temporales de VS2022 y CMake
├── README.md		# Indice y panel de control
├── plantillas/		# Plantillas oficiales para jueces online (Domjudge)
│   ├── PlantillaJuezNumeroCasos.cpp
│   ├── PlantillaJuezCentinela.cpp
│   └── PlantillaJuezCasosIlimitados.cpp
├── 0_Introduccion/
│   ├── 0.1 Duplicar la entrada/
│   ├── 0.2 Duplicar secuencia de numeros (num casos)/
│   ├── 0.3 Duplicar secuencia de numeros (centinela)/
│   └── 0.4 Duplicar secuencia de numeros (casos ilimitados)/
├── 1_Iterativos/
│   ├── 1.01 Numero de maximos/
│   ├── 1.02 Ultima vez que/
│   ├── 1.03 Caminando voy/
│   ├── 1.04 Recorridos largos pero no muy duros/
│   ├── 1.05 Presa Castoril/
│   ├── 1.06 Zona de peligro/
│   ├── 1.07 Rescate aereo 1/
│   ├── 1.08 Mejorando las carreteras/
│   ├── 1.09 Todos con la seleccion/
│   ├── 1.10 Descenso prolongado en solitario/
│   ├── 1.11 Sensores defectuosos/
│   ├── 1.12 Como van las encuestas/
│   ├── 1.13 Un apartamento con vistas/
│   ├── 1.14 Esta bien dividido el vector/
│   ├── 1.15 Un movil nuevo/
│   └── 1.16 Releyendo un libro. Version 1/
├── 2_Recursion/
│   ├── 2.01 Calculo del maximo comun divisor (Metodo de Euclides)/
│   ├── 2.02 Transformar un numero decimal a binario/
│   ├── 2.03 Invertir un numero/
│   ├── 2.04 Lucky Lucke en busca del culpable/
│   ├── 2.05 Numeros que suman lo mismo/
│   ├── 2.06 Digitos complementarios/
│   ├── 2.07 Jugando con los digitos de un numero/
│   ├── 2.08 Numero Sumdivisible/
│   ├── 2.09 Codificar un numero/
│   ├── 2.10 Formar numeros con sus cifras decrecientes/
│   ├── 2.11 La rareza de un numero/
│   └── 2.12 Digitos obtusos/
├── 3_DivideYVenceras/
│   ├── 3.01 Obtener el minimo de un vector/
│   ├── 3.02 Fuga de la prision/
│   ├── 3.03 El juego del bongo/
│   ├── 3.04 Vector parcialmente ordenado/
│   ├── 3.05 Numeros caucasicos/
│   └── 3.06 Unico impar/
├── 4_VueltaAtras/
└── Examenes/
```

---

## Flujo de Trabajo en Visual Studio 2022

### 1. Abrir el repositorio
1. Abre **Visual Studio 2022**.
2. Selecciona **Abrir una carpeta...** (*Open Folder*) y elige la raíz `RE_FAL`.
3. VS2022 detectará automáticamente el archivo `CMakeLists.txt` y generará la configuración en segundo plano.

### 2. Ejecutar y depurar un ejercicio
1. En la barra superior, haz clic en el menú desplegable **"Seleccionar elemento de inicio"** (al lado del botón verde de reproducir).
2. Selecciona el ejercicio que quieras ejecutar (ej: `0.1_Duplicar_la_entrada.exe`).
3. Pulsa **F5** (depuración) o **Ctrl + F5** (ejecución directa).
4. El programa ejecutará automáticamente tomando como directorio de trabajo su propia carpeta, leyendo de su archivo `.in` (o `datos.txt`).

### 3. Crear un ejercicio nuevo
1. Crea una carpeta dentro del tema correspondiente (ej: `1_Iterativos/1.01_NombreProblema/`).
2. Copia la plantilla adecuada desde `plantillas/` como `1_01.cpp` (o `solucion.cpp`).
3. Añade tu archivo de casos de prueba (`1_01.in`), la salida esperada (`1_01.ans`) y el enunciado `.pdf`.
4. Visual Studio detectará automáticamente el nuevo ejercicio (si tarda, pulsa **Ctrl + S** sobre `CMakeLists.txt`) y aparecerá en el desplegable superior para ejecutarlo con **F5**.

---

## Tabla de Seguimiento de Ejercicios

### Tema 0: Introducción

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 0.1 | Duplicar la entrada | [PDF](0_Introduccion/0.1%20Duplicar%20la%20entrada/prob-EDAV-DuplicadorB-7.pdf) | [0_1.cpp](0_Introduccion/0.1%20Duplicar%20la%20entrada/0_1.cpp) | $O(1)$ | `CORRECT` |
| 0.2 | Duplicar secuencia de números (núm. casos) | [PDF](0_Introduccion/0.2%20Duplicar%20secuencia%20de%20numeros%20(num%20casos)/prob-EDAV-DupSecA.pdf) | [0_2.cpp](0_Introduccion/0.2%20Duplicar%20secuencia%20de%20numeros%20(num%20casos)/0_2.cpp) | $O(N)$ | `CORRECT` |
| 0.3 | Duplicar secuencia de números (centinela) | [PDF](0_Introduccion/0.3%20Duplicar%20secuencia%20de%20numeros%20(centinela)/prob-EDAV-DupSecB.pdf) | [0_3.cpp](0_Introduccion/0.3%20Duplicar%20secuencia%20de%20numeros%20(centinela)/0_3.cpp) | $O(N)$ | `CORRECT` |
| 0.4 | Duplicar secuencia de números (casos ilimitados) | [PDF](0_Introduccion/0.4%20Duplicar%20secuencia%20de%20numeros%20(casos%20ilimitados)/prob-EDAV-DupSecC.pdf) | [0_4.cpp](0_Introduccion/0.4%20Duplicar%20secuencia%20de%20numeros%20(casos%20ilimitados)/0_4.cpp) | $O(N)$ | `CORRECT` |

### Tema 1: Algoritmos Iterativos

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 1.01 | Número de máximos | [PDF](1_Iterativos/1.01%20Numero%20de%20maximos/prob-FAL-IT-MaximoSecuencia-3.pdf) | [1_01.cpp](1_Iterativos/1.01%20Numero%20de%20maximos/1_01.cpp) | $O(N)$ | `CORRECT` |
| 1.02 | Última vez que... | [PDF](1_Iterativos/1.02%20Ultima%20vez%20que/prob-FAL-IT-UltimaVez-3.pdf) | [1_02.cpp](1_Iterativos/1.02%20Ultima%20vez%20que/1_02.cpp) | $O(N)$ | `CORRECT` |
| 1.03 | Caminando voy | [PDF](1_Iterativos/1.03%20Caminando%20voy/prob-FAL-IT-CaminandoVoy-6.pdf) | [1_03.cpp](1_Iterativos/1.03%20Caminando%20voy/1_03.cpp) | $O(N)$ | `CORRECT` |
| 1.04 | Recorridos largos pero no muy duros | [PDF](1_Iterativos/1.04%20Recorridos%20largos%20pero%20no%20muy%20duros/prob-FAL-IT-EC1-E-25.pdf) | [EC_1.cpp](1_Iterativos/1.04%20Recorridos%20largos%20pero%20no%20muy%20duros/EC_1.cpp) | $O(N)$ | `CORRECT` |
| 1.05 | Presa Castoril | [PDF](1_Iterativos/1.05%20Presa%20Castoril/prob-FAL-IT-castores-10.pdf) | [1_05.cpp](1_Iterativos/1.05%20Presa%20Castoril/1_05.cpp) | $O(N)$ | `CORRECT` |
| 1.06 | Zona de peligro | [PDF](1_Iterativos/1.06%20Zona%20de%20peligro/prob-FAL-IT-zonapeligro-10.pdf) | [1_06.cpp](1_Iterativos/1.06%20Zona%20de%20peligro/1_06.cpp) | $O(N)$ | `CORRECT` |
| 1.07 | Rescate aéreo 1 | [PDF](1_Iterativos/1.07%20Rescate%20aereo%201/prob-FAL-IT-RescateAereo-3.pdf) | [1_07.cpp](1_Iterativos/1.07%20Rescate%20aereo%201/1_07.cpp) | $O(N)$ | `CORRECT` |
| 1.08 | Mejorando las carreteras | [PDF](1_Iterativos/1.08%20Mejorando%20las%20carreteras/prob-FAL-IT-MejorandoCarreteras-3.pdf) | [1_08.cpp](1_Iterativos/1.08%20Mejorando%20las%20carreteras/1_08.cpp) | $O(N \log N)$ | `CORRECT` |
| 1.09 | Todos con la selección | [PDF](1_Iterativos/1.09%20Todos%20con%20la%20seleccion/prob-FAL-IT-TodosConLaSeleccion-3.pdf) | [1_09.cpp](1_Iterativos/1.09%20Todos%20con%20la%20seleccion/1_09.cpp) | $O(N)$ | `CORRECT` |
| 1.10 | Descenso prolongado en solitario | [PDF](1_Iterativos/1.10%20Descenso%20prolongado%20en%20solitario/prob-FAL-IT-Descenso-JUN25.pdf) | [1_10.cpp](1_Iterativos/1.10%20Descenso%20prolongado%20en%20solitario/1_10.cpp) | $O(N)$ | `CORRECT` |
| 1.11 | Sensores defectuosos | [PDF](1_Iterativos/1.11%20Sensores%20defectuosos/prob-FAL-IT-EliminarErroneos-3.pdf) | [1_11.cpp](1_Iterativos/1.11%20Sensores%20defectuosos/1_11.cpp) | $O(N)$ | `CORRECT` |
| 1.12 | ¿Cómo van las encuestas? | [PDF](1_Iterativos/1.12%20Como%20van%20las%20encuestas/prob-FAL-IT-MayoresQueMinimo-3.pdf) | [1_12.cpp](1_Iterativos/1.12%20Como%20van%20las%20encuestas/1_12.cpp) | $O(N)$ | `CORRECT` |
| 1.13 | Un apartamento con vistas | [PDF](1_Iterativos/1.13%20Un%20apartamento%20con%20vistas/prob-FAL-IT-ApartamentoConVistas-3.pdf) | [1_13.cpp](1_Iterativos/1.13%20Un%20apartamento%20con%20vistas/1_13.cpp) | $O(N)$ | `CORRECT` |
| 1.14 | ¿Está bien dividido el vector? | [PDF](1_Iterativos/1.14%20Esta%20bien%20dividido%20el%20vector/prob-FAL-IT-VectorBienDividido-3.pdf) | [1_14.cpp](1_Iterativos/1.14%20Esta%20bien%20dividido%20el%20vector/1_14.cpp) | $O(N)$ | `CORRECT` |
| 1.15 | Un móvil nuevo | [PDF](1_Iterativos/1.15%20Un%20movil%20nuevo/prob-FAL-IT-MovilNuevoMezclaOrdenada-3.pdf) | [1_15.cpp](1_Iterativos/1.15%20Un%20movil%20nuevo/1_15.cpp) | $O(N)$ | `CORRECT` |
| 1.16 | Releyendo un libro. Versión 1 | [PDF](1_Iterativos/1.16%20Releyendo%20un%20libro.%20Version%201/prob-FAL-IT-ReleyendoLibroSinPreferida-3.pdf) | [1_16.cpp](1_Iterativos/1.16%20Releyendo%20un%20libro.%20Version%201/1_16.cpp) | $O(N)$ | `CORRECT` |

### Tema 2: Recursión

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 2.01 | Cálculo del máximo común divisor (Método de Euclides) | [PDF](2_Recursion/2.01%20Calculo%20del%20maximo%20comun%20divisor%20(Metodo%20de%20Euclides)/prob-FAL-REC-AlgoritmoEuclides-3.pdf) | [2_01.cpp](2_Recursion/2.01%20Calculo%20del%20maximo%20comun%20divisor%20(Metodo%20de%20Euclides)/2_01.cpp) | $O(\log(\min(a, b)))$ | `CORRECT` |
| 2.02 | Transformar un número decimal a binario | [PDF](2_Recursion/2.02%20Transformar%20un%20numero%20decimal%20a%20binario/prob-FAL-NUM-DecimalBinario-3.pdf) | [2_02.cpp](2_Recursion/2.02%20Transformar%20un%20numero%20decimal%20a%20binario/2_02.cpp) | $O(\log n)$ | `CORRECT` |
| 2.03 | Invertir un número | [PDF](2_Recursion/2.03%20Invertir%20un%20numero/prob-FAL-NUM-InvertirNumero-3.pdf) | [2_03.cpp](2_Recursion/2.03%20Invertir%20un%20numero/2_03.cpp) | $O(\log_{10} n)$ | `CORRECT` |
| 2.04 | Lucky Lucke en busca del culpable | [PDF](2_Recursion/2.04%20Lucky%20Lucke%20en%20busca%20del%20culpable/prob-FAL-DYV-LuckyLuke-3.pdf) | [2_04.cpp](2_Recursion/2.04%20Lucky%20Lucke%20en%20busca%20del%20culpable/2_04.cpp) | $O(\log n)$ | `CORRECT` |
| 2.05 | Números que suman lo mismo | [PDF](2_Recursion/2.05%20Numeros%20que%20suman%20lo%20mismo/prob-FAL-NUM-SumarDigitos-3.pdf) | [2_05.cpp](2_Recursion/2.05%20Numeros%20que%20suman%20lo%20mismo/2_05.cpp) | $O(\log_{10} n)$ | `CORRECT` |
| 2.06 | Dígitos complementarios | [PDF](2_Recursion/2.06%20Digitos%20complementarios/prob-FAL-NUM-DigitosComplementarios-4.pdf) | [2_06.cpp](2_Recursion/2.06%20Digitos%20complementarios/2_06.cpp) | $O(\log_{10} n)$ | `CORRECT` |
| 2.07 | Jugando con los dígitos de un número | [PDF](2_Recursion/2.07%20Jugando%20con%20los%20digitos%20de%20un%20numero/prob-FAL-NUM-JugandoDigitos-3.pdf) | [2_07.cpp](2_Recursion/2.07%20Jugando%20con%20los%20digitos%20de%20un%20numero/2_07.cpp) | $O(\log_{10} n)$ | `CORRECT` |
| 2.08 | Número Sumdivisible | [PDF](2_Recursion/2.08%20Numero%20Sumdivisible/prob-FAL-NUM-SumDivisible-1.pdf) | [2_08.cpp](2_Recursion/2.08%20Numero%20Sumdivisible/2_08.cpp) | $O(\log_{10} n)$ | `CORRECT` |
| 2.09 | Codificar un Numero | [PDF](2_Recursion/2.09%20Codificar%20un%20numero/prob-FAL-NUM-CodificarNumero-4.pdf) | [2_09.cpp](2_Recursion/2.09%20Codificar%20un%20numero/2_09.cpp) | $O(\log_{10} n)$ | `CORRECT` |
| 2.10 | Formar numeros con sus cifras decrecientes | [PDF](2_Recursion/2.10%20Formar%20numeros%20con%20sus%20cifras%20decrecientes/prob-FAL-NUM-DigitosDecrecientesFinalYNoFinal-3.pdf) | [2_10.cpp](2_Recursion/2.10%20Formar%20numeros%20con%20sus%20cifras%20decrecientes/2_10.cpp) | $O(\log_{10} n)$ | `CORRECT` |
| 2.11 | La rareza de un número | [PDF](2_Recursion/2.11%20La%20rareza%20de%20un%20numero/prob-FAL-NUM-Misticos-10.pdf) | [2_11.cpp](2_Recursion/2.11%20La%20rareza%20de%20un%20numero/2_11.cpp) | $O(\log_{10} n)$ | `CORRECT` |
| 2.12 | Dígitos obtusos | [PDF](2_Recursion/2.12%20Digitos%20obtusos/prob-FAL-NUM-Obtusos-10.pdf) | [2_12.cpp](2_Recursion/2.12%20Digitos%20obtusos/2_12.cpp) | $O(\log_{10} n)$ | `CORRECT` |

### Tema 3: Divide y Vencerás

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 3.01 | Obtener el mínimo de un vector | [PDF](3_DivideYVenceras/3.01%20Obtener%20el%20minimo%20de%20un%20vector/prob-FAL-DYV-MinimoVectorRotado-3.pdf) | [3_01.cpp](3_DivideYVenceras/3.01%20Obtener%20el%20minimo%20de%20un%20vector/3_01.cpp) | $O(\log n)$ | `CORRECT` |
| 3.02 | Fuga de la prisión | [PDF](3_DivideYVenceras/3.02%20Fuga%20de%20la%20prision/prob-FAL-DYV-FugaPrision-3.pdf) | [3_02.cpp](3_DivideYVenceras/3.02%20Fuga%20de%20la%20prision/3_02.cpp) | $O(\log n)$ | `CORRECT` |
| 3.03 | El juego del bongo | [PDF](3_DivideYVenceras/3.03%20El%20juego%20del%20bongo/prob-FAL-DYV-Bongo-3.pdf) | [3_03.cpp](3_DivideYVenceras/3.03%20El%20juego%20del%20bongo/3_03.cpp) | $O(\log n)$ | `CORRECT` |
| 3.04 | Vector parcialmente ordenado | [PDF](3_DivideYVenceras/3.04%20Vector%20parcialmente%20ordenado/prob-FAL-DYV-ParcialmenteOrdenado-3.pdf) | [3_04.cpp](3_DivideYVenceras/3.04%20Vector%20parcialmente%20ordenado/3_04.cpp) | $O(n)$ | `CORRECT` |
| 3.05 | Números caucásicos | [PDF](3_DivideYVenceras/3.05%20Numeros%20caucasicos/prob-FAL-DYV-Caucasicos-3.pdf) | [3_05.cpp](3_DivideYVenceras/3.05%20Numeros%20caucasicos/3_05.cpp) | $O(n)$ | `CORRECT` |
| 3.06 | Unico Impar | [PDF](3_DivideYVenceras/3.06%20Unico%20impar/prob-FAL-DYV-UnicoImpar-4.pdf) | [3_06.cpp](3_DivideYVenceras/3.06%20Unico%20impar/3_06.cpp) | $O(\log n)$ | `CORRECT` |

---
