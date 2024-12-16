# Derleyici ve bayraklar
CC = C:/msys64/mingw64/bin/gcc
CFLAGS = -std=c11 -Wall

# Kaynak ve çıktı dosyaları
SRC = main.c
OUT = MyProject.exe

# Varsayılan hedef
all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

# Temizlik işlemi
clean:
	rm -f $(OUT)
