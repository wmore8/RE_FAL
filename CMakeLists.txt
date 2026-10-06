cmake_minimum_required(VERSION 3.20)
project(RE_FAL CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Habilitar soporte UTF-8 en MSVC si se compila con Visual Studio
if(MSVC)
    add_compile_options("/utf-8")
endif()

# Buscar recursivamente todos los archivos .cpp en el repositorio
file(GLOB_RECURSE ALL_CPPS LIST_DIRECTORIES false "*.cpp")

foreach(CPP_FILE ${ALL_CPPS})
    # Omitir carpetas de plantillas, salida de compilacion o cache
    if(NOT CPP_FILE MATCHES "/plantillas/" AND 
       NOT CPP_FILE MATCHES "/out/" AND 
       NOT CPP_FILE MATCHES "/build/" AND
       NOT CPP_FILE MATCHES "/\\.vs/")

        # Obtener el directorio del ejercicio y su nombre
        get_filename_component(EXERCISE_DIR "${CPP_FILE}" DIRECTORY)
        get_filename_component(DIR_NAME "${EXERCISE_DIR}" NAME)

        # Sanitizar el nombre del target para CMake
        string(REGEX REPLACE "[^a-zA-Z0-9_.-]" "_" TARGET_NAME "${DIR_NAME}")

        # Si hay colision de nombres, prefijar con la carpeta padre (tema)
        if(TARGET ${TARGET_NAME})
            get_filename_component(PARENT_DIR "${EXERCISE_DIR}" DIRECTORY)
            get_filename_component(PARENT_NAME "${PARENT_DIR}" NAME)
            string(REGEX REPLACE "[^a-zA-Z0-9_.-]" "_" PARENT_NAME_CLEAN "${PARENT_NAME}")
            set(TARGET_NAME "${PARENT_NAME_CLEAN}_${TARGET_NAME}")
        endif()

        # Registrar el ejecutable
        add_executable(${TARGET_NAME} "${CPP_FILE}")

        # Directorio de ejecucion en VS 2022: La propia carpeta del ejercicio (para leer casos.in / datos.txt)
        set_target_properties(${TARGET_NAME} PROPERTIES
            VS_DEBUGGER_WORKING_DIRECTORY "${EXERCISE_DIR}"
        )
    endif()
endforeach()
