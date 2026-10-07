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

# Lista para acumular las configuraciones de launch.vs.json
set(LAUNCH_CONFIGS "")

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

        # 1. Copiar automaticamente archivos de casos (.in, .ans, .txt) a la carpeta del .exe tras compilar
        file(GLOB TEST_FILES LIST_DIRECTORIES false 
            "${EXERCISE_DIR}/*.in" 
            "${EXERCISE_DIR}/*.ans" 
            "${EXERCISE_DIR}/*.txt"
        )
        foreach(TEST_FILE ${TEST_FILES})
            add_custom_command(
                TARGET ${TARGET_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy_if_different
                        "${TEST_FILE}"
                        "$<TARGET_FILE_DIR:${TARGET_NAME}>"
            )
        endforeach()

        # 2. Propiedad para generadores tradicionales de Visual Studio
        set_target_properties(${TARGET_NAME} PROPERTIES
            VS_DEBUGGER_WORKING_DIRECTORY "${EXERCISE_DIR}"
        )

        # 3. Configuracion de depuracion para Visual Studio 2022 Open Folder (Ninja)
        file(TO_CMAKE_PATH "${EXERCISE_DIR}" EXERCISE_DIR_CMAKE)
        string(APPEND LAUNCH_CONFIGS "    {\n      \"type\": \"default\",\n      \"project\": \"CMakeLists.txt\",\n      \"projectTarget\": \"${TARGET_NAME}.exe\",\n      \"name\": \"${TARGET_NAME}.exe\",\n      \"currentDir\": \"${EXERCISE_DIR_CMAKE}\"\n    },\n")
    endif()
endforeach()

# Generar automaticamente .vs/launch.vs.json para que Visual Studio 2022 establezca el directorio de trabajo
if(NOT "${LAUNCH_CONFIGS}" STREQUAL "")
    string(REGEX REPLACE ",\n$" "\n" LAUNCH_CONFIGS_TRIMMED "${LAUNCH_CONFIGS}")
    set(LAUNCH_JSON "{\n  \"version\": \"0.2.1\",\n  \"defaults\": {},\n  \"configurations\": [\n${LAUNCH_CONFIGS_TRIMMED}  ]\n}\n")
    file(WRITE "${CMAKE_CURRENT_SOURCE_DIR}/.vs/launch.vs.json" "${LAUNCH_JSON}")
endif()
