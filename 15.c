 #include <stdio.h>
                #include <string.h>
                
                int main() {
                    char text[100];
                    int alignment;
                
                    // Input
                    printf("Enter a string: ");
                    fgets(text, sizeof(text), stdin);
                
                    // Remove trailing newline character
                    text[strcspn(text, "\n")] = '\0';
                
                    // Input alignment choice
                    printf("Choose text alignment (1 for left, 2 for center, 3 for right): ");
                    scanf("%d", &alignment);
                
                    // Display text based on alignment choice
                    int len = strlen(text);
                    switch (alignment) {
                        case 1: // Left alignment
                            printf("%s\n", text);
                            break;
                        case 2: // Center alignment
                            for (int i = 0; i < (40 - len / 2); i++) {
                                printf(" ");
                            }
                            printf("%s\n", text);
                            break;
                        case 3: // Right alignment
                            for (int i = 0; i < (80 - len); i++) {
                                printf(" ");
                            }
                            printf("%s\n", text);
                            break;
                        default:
                            printf("Invalid alignment choice.\n");
                    }
                
                    return 0;
                }
        
