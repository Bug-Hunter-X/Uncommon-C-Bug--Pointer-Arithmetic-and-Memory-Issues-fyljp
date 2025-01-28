int main() {
  int x = 10;
  int *ptr = &x; 
  if (ptr != NULL) {
    *ptr = 20; 
    int y = *ptr; 
    printf("%d", y); 
  } else {
    printf("Error: Pointer is NULL\n");
  }
  return 0; 
}