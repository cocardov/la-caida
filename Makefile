
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
MAZMORRA_NIVEL_3_OBJ = $(BUILD_DIR)/mazmorra_nivel_3/mazmorra_nivel_3.o
MAZMORRA_NIVEL_4_OBJ = $(BUILD_DIR)/mazmorra_nivel_4/mazmorra_nivel_4.o
MAZMORRA_NIVEL_5_OBJ = $(BUILD_DIR)/mazmorra_nivel_5/mazmorra_nivel_5.o
MAZMORRA_NIVEL_FINAL_OBJ = $(BUILD_DIR)/mazmorra_nivel_final/mazmorra_nivel_final.o
LLANURA_NIVEL_1_OBJ = $(BUILD_DIR)/llanura_nivel_1/llanura_nivel_1.o
LLANURA_NIVEL_2_OBJ = $(BUILD_DIR)/llanura_nivel_2/llanura_nivel_2.o
SEGUIR_HUELLAS_NIVEL_1_OBJ = $(BUILD_DIR)/seguir_huellas_nivel_1/seguir_huellas_nivel_1.o
DERIVA_OBJ = $(BUILD_DIR)/deriva/deriva.o
MERCADO_RURAL_OBJ = $(BUILD_DIR)/mercado_rural.o
MERCADO_RURAL_2_OBJ = $(BUILD_DIR)/mercado_rural_2.o
FINAL_BUENO_OBJ = $(BUILD_DIR)/final_bueno.o
ESTADO_OBJ = $(BUILD_DIR)/mundo/estado.o
INVENTARIO_OBJ = $(BUILD_DIR)/mundo/inventario.o
UTILS_OBJ = $(BUILD_DIR)/utils/utils.o

# SOURCES 
MAIN_SRC = $(SOURCE_DIR)/entrypoint.cc
NIVEL_1_SRC = $(SOURCE_DIR)/niveles/nivel_1/nivel_1.cc
NIVEL_2_SRC = $(SOURCE_DIR)/niveles/nivel_2/nivel_2.cc
NIVEL_3_SRC = $(SOURCE_DIR)/niveles/nivel_3/nivel_3.cc
MAZMORRA_NIVEL_1_SRC = $(SOURCE_DIR)/niveles/mazmorra_nivel_1/mazmorra_nivel_1.cc
MAZMORRA_NIVEL_2_SRC = $(SOURCE_DIR)/niveles/mazmorra_nivel_2/mazmorra_nivel_2.cc
MAZMORRA_NIVEL_3_SRC = $(SOURCE_DIR)/niveles/mazmorra_nivel_3/mazmorra_nivel_3.cc
MAZMORRA_NIVEL_4_SRC = $(SOURCE_DIR)/niveles/mazmorra_nivel_4/mazmorra_nivel_4.cc
MAZMORRA_NIVEL_5_SRC = $(SOURCE_DIR)/niveles/mazmorra_nivel_5/mazmorra_nivel_5.cc
MAZMORRA_NIVEL_FINAL_SRC = $(SOURCE_DIR)/niveles/mazmorra_nivel_final/mazmorra_nivel_final.cc
LLANURA_NIVEL_1_SRC = $(SOURCE_DIR)/niveles/llanura_nivel_1/llanura_nivel_1.cc
LLANURA_NIVEL_2_SRC = $(SOURCE_DIR)/niveles/llanura_nivel_2/llanura_nivel_2.cc
SEGUIR_HUELLAS_NIVEL_1_SRC = $(SOURCE_DIR)/niveles/seguir_huellas_nivel_1/seguir_huellas_nivel_1.cc
DERIVA_SRC = $(SOURCE_DIR)/niveles/deriva/deriva.cc
MERCADO_RURAL_SRC = $(SOURCE_DIR)/niveles/mercado_rural/mercado_rural.cc
MERCADO_RURAL_2_SRC = $(SOURCE_DIR)/niveles/mercado_rural_2/mercado_rural_2.cc
FINAL_BUENO_SRC = $(SOURCE_DIR)/niveles/final_bueno/final_bueno.cc
ESTADO_SRC = $(SOURCE_DIR)/mundo/estado.cc
INVENTARIO_SRC = $(SOURCE_DIR)/mundo/inventario.cc
UTILS_SRC = $(SOURCE_DIR)/utils/utils.cc

# FLAGS 
CFLAGS = -Wall -g -I$(CURDIR)/$(SOURCE_DIR) -I$(CURDIR)/$(SOURCE_DIR)/niveles -I$(CURDIR)/$(SOURCE_DIR)/mundo -lpthread
CC = g++

INCLUDE_LIBS = $(NIVEL_1_OBJ) $(NIVEL_2_OBJ) $(NIVEL_3_OBJ) $(LLANURA_NIVEL_1_OBJ) $(LLANURA_NIVEL_2_OBJ) \
	$(MAZMORRA_NIVEL_1_OBJ) $(MAZMORRA_NIVEL_2_OBJ) $(SEGUIR_HUELLAS_NIVEL_1_OBJ) $(DERIVA_OBJ) $(MERCADO_RURAL_OBJ) \
	$(MERCADO_RURAL_2_OBJ) $(FINAL_BUENO_OBJ) $(ESTADO_OBJ) $(INVENTARIO_OBJ) $(UTILS_OBJ) $(MAZMORRA_NIVEL_3_OBJ) \
	$(MAZMORRA_NIVEL_4_OBJ) $(MAZMORRA_NIVEL_5_OBJ) $(MAZMORRA_NIVEL_FINAL_OBJ)

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

$(BUILD_DIR)/mazmorra_nivel_3:
	mkdir -p $(BUILD_DIR)/mazmorra_nivel_3

$(BUILD_DIR)/mazmorra_nivel_4:
	mkdir -p $(BUILD_DIR)/mazmorra_nivel_4

$(BUILD_DIR)/mazmorra_nivel_5:
	mkdir -p $(BUILD_DIR)/mazmorra_nivel_5

$(BUILD_DIR)/mazmorra_nivel_final:
	mkdir -p $(BUILD_DIR)/mazmorra_nivel_final

$(BUILD_DIR)/llanura_nivel_1:
	mkdir -p $(BUILD_DIR)/llanura_nivel_1

$(BUILD_DIR)/llanura_nivel_2:
	mkdir -p $(BUILD_DIR)/llanura_nivel_2

$(BUILD_DIR)/seguir_huellas_nivel_1:
	mkdir -p $(BUILD_DIR)/seguir_huellas_nivel_1

$(BUILD_DIR)/deriva:
	mkdir -p $(BUILD_DIR)/deriva

$(BUILD_DIR)/mercado_rural:
	mkdir -p $(BUILD_DIR)/mercado_rural

$(BUILD_DIR)/mercado_rural_2:
	mkdir -p $(BUILD_DIR)/mercado_rural_2

$(BUILD_DIR)/final_bueno:
	mkdir -p $(BUILD_DIR)/final_bueno
$(BUILD_DIR)/mundo:
	mkdir -p $(BUILD_DIR)/mundo

$(BUILD_DIR)/mundo/inventario: $(BUILD_DIR)/mundo
	mkdir -p $(BUILD_DIR)/mundo/inventario

$(BUILD_DIR)/mundo/estado: $(BUILD_DIR)/mundo
	mkdir -p $(BUILD_DIR)/mundo/estado

$(BUILD_DIR)/utils: $(BUILD_DIR)/utils
	mkdir -p $(BUILD_DIR)/utils


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

$(MAZMORRA_NIVEL_2_OBJ): $(NIVEL_2_SRC) $(BUILD_DIR)/mazmorra_nivel_2
	$(CC) $(CFLAGS) -c $(MAZMORRA_NIVEL_2_SRC) -o $(MAZMORRA_NIVEL_2_OBJ)
	
$(MAZMORRA_NIVEL_3_OBJ): $(NIVEL_3_SRC) $(BUILD_DIR)/mazmorra_nivel_3
	$(CC) $(CFLAGS) -c $(MAZMORRA_NIVEL_3_SRC) -o $(MAZMORRA_NIVEL_3_OBJ)

$(MAZMORRA_NIVEL_4_OBJ): $(NIVEL_4_SRC) $(BUILD_DIR)/mazmorra_nivel_4
	$(CC) $(CFLAGS) -c $(MAZMORRA_NIVEL_4_SRC) -o $(MAZMORRA_NIVEL_4_OBJ)

$(MAZMORRA_NIVEL_5_OBJ): $(NIVEL_5_SRC) $(BUILD_DIR)/mazmorra_nivel_5
	$(CC) $(CFLAGS) -c $(MAZMORRA_NIVEL_5_SRC) -o $(MAZMORRA_NIVEL_5_OBJ)

$(MAZMORRA_NIVEL_FINAL_OBJ): $(NIVEL_1_SRC) $(BUILD_DIR)/mazmorra_nivel_final
	$(CC) $(CFLAGS) -c $(MAZMORRA_NIVEL_FINAL_SRC) -o $(MAZMORRA_NIVEL_FINAL_OBJ)

$(LLANURA_NIVEL_1_OBJ): $(NIVEL_1_SRC) $(BUILD_DIR)/llanura_nivel_1
	$(CC) $(CFLAGS) -c $(LLANURA_NIVEL_1_SRC) -o $(LLANURA_NIVEL_1_OBJ)

$(LLANURA_NIVEL_2_OBJ): $(NIVEL_2_SRC) $(BUILD_DIR)/llanura_nivel_2
	$(CC) $(CFLAGS) -c $(LLANURA_NIVEL_2_SRC) -o $(LLANURA_NIVEL_2_OBJ)

$(SEGUIR_HUELLAS_NIVEL_1_OBJ): $(NIVEL_1_SRC) $(BUILD_DIR)/seguir_huellas_nivel_1
	$(CC) $(CFLAGS) -c $(SEGUIR_HUELLAS_NIVEL_1_SRC) -o $(SEGUIR_HUELLAS_NIVEL_1_OBJ)

$(DERIVA_OBJ): $(NIVEL_1_SRC) $(BUILD_DIR)/deriva
	$(CC) $(CFLAGS) -c $(DERIVA_SRC) -o $(DERIVA_OBJ)

$(MERCADO_RURAL_OBJ): $(NIVEL_1_SRC) $(BUILD_DIR)/mercado_rural
	$(CC) $(CFLAGS) -c $(MERCADO_RURAL_SRC) -o $(MERCADO_RURAL_OBJ)

$(MERCADO_RURAL_2_OBJ): $(NIVEL_1_SRC) $(BUILD_DIR)/mercado_rural_2
	$(CC) $(CFLAGS) -c $(MERCADO_RURAL_2_SRC) -o $(MERCADO_RURAL_2_OBJ)

$(FINAL_BUENO_OBJ): $(NIVEL_1_SRC) $(BUILD_DIR)/final_bueno
	$(CC) $(CFLAGS) -c $(FINAL_BUENO_SRC) -o $(FINAL_BUENO_OBJ)

$(INVENTARIO_OBJ): $(NIVEL_1_SRC) $(BUILD_DIR)/mundo/inventario
	$(CC) $(CFLAGS) -c $(INVENTARIO_SRC) -o $(INVENTARIO_OBJ)

$(ESTADO_OBJ): $(NIVEL_2_SRC) $(BUILD_DIR)/mundo/estado
	$(CC) $(CFLAGS) -c $(ESTADO_SRC) -o $(ESTADO_OBJ)

$(UTILS_OBJ): $(NIVEL_1_SRC) $(BUILD_DIR)/utils
	$(CC) $(CFLAGS) -c $(UTILS_SRC) -o $(UTILS_OBJ)

clean:
	rm -rf $(TARGET)
	rm -rf $(NIVELES_OBJ)
	rm -rf $(NIVELES_LIB)
	rm -rf $(BUILD_DIR)/*