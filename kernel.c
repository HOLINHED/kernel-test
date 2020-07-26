static char* vidmem = (char*)0xb8000;
static int vidmem_b = 0;

int strlen(const char* str) {
   int size = 0;
   while (str[size] != '\0') size++;
   return size;
}

void clear_buffer() {
   for (int i = 0; i < 25 * 80 * 2; i += 2) {
      if (i != 0) vidmem[i] = ' ';
      else vidmem[i] = 'X';
      vidmem[i + 1] = 0x07;
   }
}

void push_buffer(char* message) {
   int m_size = strlen(message);

   for (int i = vidmem_b, j = 0; i < m_size * 2; i += 2, j++) {
      vidmem[i] = message[j];
      vidmem[i + 1] = 0x07;
   }
}

kmain() {
   clear_buffer();
   push_buffer("Hello, world!");

}