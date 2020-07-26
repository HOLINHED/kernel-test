kmain() {
   char* vidmem = (char*)0xb8000;
   
   for (int i = 0; i < 256 * 70; i++) {
      vidmem[i] = ' ';
      vidmem[i + 1] = 0x00;
   }

   vidmem[0] = 'H';
   vidmem[1] = 0x07;
   vidmem[2] = 'E';
   vidmem[3] = 0x07;
   vidmem[4] = 'L';
   vidmem[5] = 0x07;
   vidmem[6] = 'L';
   vidmem[7] = 0x07;
   vidmem[8] = 'O';
   vidmem[9] = 0x07;
}