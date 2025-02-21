
# DIRS
SOURCE_DIR = src
BUILD_DIR = build
BIN_DIR = bin
CURDIR = $(shell pwd)

# TARGETS
TARGET = $(BIN_DIR)/hechijuego

# OBJECT FILES 
NIVEL_1_OBJ = $(BUILD_DIR)/nivel_1/nivel_1.o
NIVEL_2_OBJ = $(BUILD_DIR)/nivel_2/nivel_2.o
NIVEL_3_OBJ = $(BUILD_DIR)/nivel_3/nivel_3.o
MAZMORRA_NIVEL_1_OBJ = $(BUILD_DIR)/mazmorra_nivel_1/mazmorra_nivel_1.o
MAZMORRA_NIVEL_2_OBJ = $(BUILD_DIR)/mazmorra_nivel_2/mazmorra_nivel_2.o
LLANURA_NIVEL_1_OBJ = $(BUILD_DIR)/llanura_nivel_1/llanura_nivel_1.o
LLANURA_NIVEL_2_OBJ = $(BUILD_DIR)/llanura_nivel_2/llanura_nivel_2.o
SEGUIR_HUELLAS_NIVEL_1_OBJ = $(BUILD_DIR)/seguir_huellas_nivel_1/seguir_huellas_nivel_1.o
ESTADO_OBJ = $(BUILD_DIR)/mundo/estado.o
INVENTARIO_OBJ = $(BUILD_DIR)/mundo/inventario.o

# SOURCES 
MAIN_SRC = $(SOURCE_DIR)/entrypoint.cc
NIVEL_1_SRC = $(SOURCE_DIR)/niveles/nivel_1/nivel_1.cc
NIVEL_2_SRC = $(SOURCE_DIR)/niveles/nivel_2/nivel_2.cc
NIVEL_3_SRC = $(SOURCE_DIR)/niveles/nivel_3/nivel_3.cc
MAZMORRA_NIVEL_1_SRC = $(SOURCE_DIR)/niveles/mazmorra_nivel_1/mazmorra_nivel_1.cc
MAZMORRA_NIVEL_2_SRC = $(SOURCE_DIR)/niveles/mazmorra_nivel_2/mazmorra_nivel_2.cc
LLANURA_NIVEL_1_SRC = $(SOURCE_DIR)/niveles/llanura_nivel_1/llanura_nivel_1.cc
LLANURA_NIVEL_2_SRC = $(SOURCE_DIR)/niveles/llanura_nivel_2/llanura_nivel_2.cc
SEGUIR_HUELLAS_NIVEL_1_SRC = $(SOURCE_DIR)/niveles/seguir_huellas_nivel_1/seguir_huellas_nivel_1.cc
ESTADO_SRC = $(SOURCE_DIR)/mundo/estado.cc
INVENTARIO_SRC = $(SOURCE_DIR)/mundo/inventario.cc

# FLAGS 
CFLAGS = -Wall -g -I$(CURDIR)/$(SOURCE_DIR) -I$(CURDIR)/$(SOURCE_DIR)/niveles -I$(CURDIR)/$(SOURCE_DIR)/mundo
CC = g++

INCLUDE_LIBS = $(NIVEL_1_OBJ) $(NIVEL_2_OBJ) $(NIVEL_3_OBJ) $(LLANURA_NIVEL_1_SRC) $(LLANURA_NIVEL_2_SRC) \
	$(MAZMORRA_NIVEL_1_SRC) $(MAZMORRA_NIVEL_2_SRC) $(SEGUIR_HUELLAS_NIVEL_1_SRC) $(ESTADO_SRC) $(INVENTARIO_SRC)

$(BUILD_DIR)/nivel_1:
	mkdir -p $(BUILD_DIR)/nivel_1

$(BUILD_DIR)/nivel_2:
	mkdir -p $(BUILD_DIR)/nivel_2

$(BUILD_DIR)/nivel_3:
	mkdir -p $(BUILD_DIR)/nivel_3

$(BUILD_DIR)/mazmorra_nivel_1:
	mkdir -p $(BUILD_DIR)/mazmorra_nivel_1

$(BUILD_DIR)/mazmorra_nivel_2:
	mkdir -p $(BUILD_DIR)/mazmorra_nivel_2

$(BUILD_DIR)/llanura_nivel_1:
	mkdir -p $(BUILD_DIR)/llanura_nivel_1

$(BUILD_DIR)/llanura_nivel_2:
	mkdir -p $(BUILD_DIR)/llanura_nivel_2

$(BUILD_DIR)/seguir_huellas_nivel_1:
	mkdir -p $(BUILD_DIR)/seguir_huellas_nivel_1

$(BUILD_DIR)/mundo:
	mkdir -p $(BUILD_DIR)/mundo

$(BUILD_DIR)/mundo/inventario: $(BUILD_DIR)/mundo
	mkdir -p $(BUILD_DIR)/mundo/inventario

$(BUILD_DIR)/mundo/estado: $(BUILD_DIR)/mundo
	mkdir -p $(BUILD_DIR)/mundo/estado


# COMPILAR EL PROGRAMA PRINCIPAL INCLUYENDO -lniveles
all: $(MAIN_SRC) $(INCLUDE_LIBS)
	$(CC) $(CFLAGS) $(MAIN_SRC) $(INCLUDE_LIBS) -o $(TARGET)

# CREAR ARCHIVOS OBJECTO 
$(NIVEL_1_OBJ): $(NIVEL_1_SRC) $(BUILD_DIR)/nivel_1
	$(CC) $(CFLAGS) -c $(NIVEL_1_SRC) -o $(NIVEL_1_OBJ)

$(NIVEL_2_OBJ): $(NIVEL_2_SRC) $(BUILD_DIR)/nivel_2
	$(CC) $(CFLAGS) -c $(NIVEL_2_SRC) -o $(NIVEL_2_OBJ)

$(NIVEL_3_OBJ): $(NIVEL_3_SRC) $(BUILD_DIR)/nivel_3
	$(CC) $(CFLAGS) -c $(NIVEL_3_SRC) -o $(NIVEL_3_OBJ)

$(MAZMORRA_NIVEL_1_OBJ): $(NIVEL_1_SRC) $(BUILD_DIR)/mazmorra_nivel_1
	$(CC) $(CFLAGS) -c $(MAZMORRA_NIVEL_1_SRC) -o $(MAZMORRA_NIVEL_1_OBJ)

$(MAZMORRA_NIVEL_2_OBJ): $(NIVEL_2_SRC) $(BUILD_DIR)/mazmorra_nivel_1
	$(CC) $(CFLAGS) -c $(MAZMORRA_NIVEL_2_SRC) -o $(MAZMORRA_NIVEL_2_OBJ)

$(LLANURA_NIVEL_1_OBJ): $(NIVEL_1_SRC) $(BUILD_DIR)/llanura_nivel_1
	$(CC) $(CFLAGS) -c $(LLANURA_NIVEL_1_SRC) -o $(LLANURA_NIVEL_1_OBJ)

$(LLANURA_NIVEL_2_OBJ): $(NIVEL_2_SRC) $(BUILD_DIR)/llanura_nivel_2
	$(CC) $(CFLAGS) -c $(LLANURA_NIVEL_2_SRC) -o $(LLANURA_NIVEL_2_OBJ)

$(SEGUIR_HUELLAS_NIVEL_1_OBJ): $(NIVEL_1_SRC) $(BUILD_DIR)/seguir_huellas_nivel_1
	$(CC) $(CFLAGS) -c $(SEGUIR_HUELLAS_NIVEL_1_SRC) -o $(SEGUIR_HUELLAS-NIVEL_1_OBJ)

$(INVENTARIO_OBJ): $(NIVEL_1_SRC) $(BUILD_DIR)/mundo/inventario
	$(CC) $(CFLAGS) -c $(INVENTARIO_SRC) -o $(INVENTARIO_OBJ)

$(ESTADO_OBJ): $(NIVEL_2_SRC) $(BUILD_DIR)/mundo/estado
	$(CC) $(CFLAGS) -c $(ESTADO_SRC) -o $(ESTADO_OBJ)

clean:
	rm -rf $(TARGET)
	rm -rf $(NIVELES_OBJ)
	rm -rf $(NIVELES_LIB)
	rm -rf $(BUILD_DIR)/*