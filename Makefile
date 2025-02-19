# DIRS
SOURCE_DIR = src
BUILD_DIR = build
BIN_DIR = bin
CURDIR = $(shell pwd)

# TARGETS
TARGET = $(BIN_DIR)/mijuego

# OBJECT FILES 
NIVEL_1_OBJ = $(BUILD_DIR)/nivel_1/nivel_1.o
NIVEL_2_OBJ = $(BUILD_DIR)/nivel_2/nivel_2.o
NIVEL_3_OBJ = $(BUILD_DIR)/nivel_3/nivel_3.o
NIVEL_4_OBJ = $(BUILD_DIR)/nivel_4/nivel_4.o
NIVEL_5_OBJ = $(BUILD_DIR)/nivel_5/nivel_5.o
NIVEL_F_OBJ = $(BUILD_DIR)/nivel_final/nivel_final.o

# SOURCES 
MAIN_SRC = $(SOURCE_DIR)/entrypoint.cc
NIVEL_1_SRC = $(SOURCE_DIR)/nivel_1/nivel_1.cc
NIVEL_2_SRC = $(SOURCE_DIR)/nivel_2/nivel_2.cc
NIVEL_3_SRC = $(SOURCE_DIR)/nivel_3/nivel_3.cc
NIVEL_4_SRC = $(SOURCE_DIR)/nivel_4/nivel_4.cc
NIVEL_5_SRC = $(SOURCE_DIR)/nivel_5/nivel_5.cc
NIVEL_F_SRC = $(SOURCE_DIR)/nivel_final/nivel_final.cc

# FLAGS 
CFLAGS = -Wall -g -I$(CURDIR)/$(SOURCE_DIR) -I$(CURDIR)/$(SOURCE_DIR)/nivel_1 -I$(CURDIR)/$(SOURCE_DIR)/nivel_2
CC = g++

NIVELES_OBJ = $(NIVEL_1_OBJ) $(NIVEL_2_OBJ) $(NIVEL_3_OBJ) $(NIVEL_4_OBJ) $(NIVEL_5_OBJ) $(NIVEL_F_OBJ)

$(BUILD_DIR)/nivel_1:
	mkdir -p $(BUILD_DIR)/nivel_1

$(BUILD_DIR)/nivel_2:
	mkdir -p $(BUILD_DIR)/nivel_2

$(BUILD_DIR)/nivel_3:
	mkdir -p $(BUILD_DIR)/nivel_3

$(BUILD_DIR)/nivel_4:
	mkdir -p $(BUILD_DIR)/nivel_4

$(BUILD_DIR)/nivel_5:
	mkdir -p $(BUILD_DIR)/nivel_5

$(BUILD_DIR)/nivel_final:
	mkdir -p $(BUILD_DIR)/nivel_final

# COMPILAR EL PROGRAMA PRINCIPAL INCLUYENDO -lniveles
all: $(MAIN_SRC) $(NIVELES_OBJ)
	$(CC) $(CFLAGS) $(MAIN_SRC) $(NIVELES_OBJ) -o $(TARGET)

# CREAR ARCHIVOS OBJECTO 
$(NIVEL_1_OBJ): $(NIVEL_1_SRC) $(BUILD_DIR)/nivel_1
	$(CC) $(CFLAGS) -c $(NIVEL_1_SRC) -o $(NIVEL_1_OBJ)

$(NIVEL_2_OBJ): $(NIVEL_2_SRC) $(BUILD_DIR)/nivel_2
	$(CC) $(CFLAGS) -c $(NIVEL_2_SRC) -o $(NIVEL_2_OBJ)

$(NIVEL_3_OBJ): $(NIVEL_3_SRC) $(BUILD_DIR)/nivel_3
	$(CC) $(CFLAGS) -c $(NIVEL_3_SRC) -o $(NIVEL_3_OBJ)

$(NIVEL_4_OBJ): $(NIVEL_4_SRC) $(BUILD_DIR)/nivel_4
	$(CC) $(CFLAGS) -c $(NIVEL_4_SRC) -o $(NIVEL_4_OBJ)

$(NIVEL_5_OBJ): $(NIVEL_5_SRC) $(BUILD_DIR)/nivel_5
	$(CC) $(CFLAGS) -c $(NIVEL_5_SRC) -o $(NIVEL_5_OBJ)

$(NIVEL_F_OBJ): $(NIVEL_F_SRC) $(BUILD_DIR)/nivel_final
	$(CC) $(CFLAGS) -c $(NIVEL_F_SRC) -o $(NIVEL_F_OBJ)

clean:
	rm -rf $(TARGET)
	rm -rf $(NIVELES_OBJ)
	rm -rf $(NIVELES_LIB)
	rm -rf $(BUILD_DIR)/*

