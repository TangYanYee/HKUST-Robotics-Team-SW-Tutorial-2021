char square[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

static void grid_create(void) {
  printf("Welcome to Tic-Tac-Toe\n");

  printf("Player 1 (X)  -  Player 2 (O)\n\n");

  printf("     |     |     \n");
  printf("  %c  |  %c  |  %c \n", square[0], square[1], square[2]);

  printf("_____|_____|_____\n");
  printf("     |     |     \n");

  printf("  %c  |  %c  |  %c \n", square[3], square[4], square[5]);

  printf("_____|_____|_____\n");
  printf("     |     |     \n");

  printf("  %c  |  %c  |  %c \n", square[6], square[7], square[8]);

  printf("     |     |     \n\n");
}
