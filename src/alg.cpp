// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int how = 0;
	for (int i = 0; 0 <= size; i++) {
		if (arr[i] == value) {
			how += 1;
		}
	}
	return how;
  return 0; // если ничего не найдено
}
