# Fundamentos de la Algoritmia (FAL)

Repositorio de ejercicios, prácticas y exámenes de la asignatura **Fundamentos de la Algoritmia (FAL)**.

Diseñado para sincronización fluida entre equipos y ejecución nativa en **Visual Studio 2022** sin necesidad de crear proyectos `.vcxproj` ni soluciones `.sln` para cada ejercicio.

---

## Estructura del Repositorio

```text
RE_FAL/
├── CMakeLists.txt                # Configuracion CMake con auto-deteccion de ejercicios
├── .gitignore                    # Filtro de temporales de VS2022 y CMake
├── README.md                     # Indice y panel de control
├── plantillas/                   # Plantillas oficiales para jueces online (Domjudge)
│   ├── PlantillaJuezNumeroCasos.cpp
│   ├── PlantillaJuezCentinela.cpp
│   └── PlantillaJuezCasosIlimitados.cpp
├── 01_Iterativos/
│   └── 1.01_MaximoSecuencia/
│       ├── solucion.cpp          # Codigo fuente con especificacion formal y coste
│       ├── casos.in              # Entrada de prueba
│       ├── casos.ans             # Salida esperada
│       └── prob-*.pdf            # Enunciado del problema
├── 02_Recursion_DyV/
├── 03_ProgramacionDinamica/
├── 04_VueltaAtras/
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
2. Selecciona el ejercicio que quieras ejecutar (ej: `1.01_MaximoSecuencia.exe`).
3. Pulsa **F5** (depuración) o **Ctrl + F5** (ejecución directa).
4. El programa ejecutará automáticamente tomando como directorio su propia carpeta, leyendo de `casos.in` (o `datos.txt`).

### 3. Crear un ejercicio nuevo
1. Crea una carpeta dentro del tema correspondiente (ej: `01_Iterativos/1.02_NombreProblema/`).
2. Copia la plantilla adecuada desde `plantillas/` como `solucion.cpp`.
3. Añade tu archivo de casos `casos.in` y el enunciado `.pdf`.
4. Visual Studio detectará automáticamente el nuevo ejercicio y aparecerá en el desplegable superior para ejecutarlo con **F5**.

---

## Tabla de Seguimiento de Ejercicios

### Tema 1: Algoritmos Iterativos

| Nº | Ejercicio | Enunciado | Solución | Complejidad | Estado |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 1.01 | Máximo de una secuencia | [PDF](01_Iterativos/1.01_MaximoSecuencia/prob-FAL-IT-MaximoSecuencia-3.pdf) | [solucion.cpp](01_Iterativos/1.01_MaximoSecuencia/solucion.cpp) | $O(N)$ tiempo / $O(1)$ espacio | `Aceptado (AC)` |

---

## Sincronización entre portátiles

```powershell
# Al terminar de trabajar en un portatil:
git status
git add 01_Iterativos/1.01_MaximoSecuencia/ README.md
git commit -m "feat(iterativos): ejercicio 1.01 Maximo de una secuencia"
git push

# Al empezar a trabajar en el otro portatil:
git pull
```
