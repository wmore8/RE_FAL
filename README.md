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
│   └── 1.09 Todos con la seleccion/
├── 2_Recursion_DyV/
├── 3_ProgramacionDinamica/
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

---
