// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int how = 0;
  int elem = 1;
    for (int i = 0; i <= size; i++) {
      elem = *(arr + i);
      if (elem == value) {
        how += 1;
      }
    }
      return how;
      return 0; // если ничего не найдено
}
