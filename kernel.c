// kernel.c
void kernel_main() {
    const char *message = "Meowl-OS has awakened 🐾";
    char *video_memory = (char *)0xB8000; // VGA text buffer
    int i = 0;

    while(message[i] != '\0') {
        video_memory[i*2] = message[i];      // character
        video_memory[i*2+1] = 0x0F;          // color (white on black)
        i++;
    }

    while(1) {} // Infinite loop to prevent exit
}
