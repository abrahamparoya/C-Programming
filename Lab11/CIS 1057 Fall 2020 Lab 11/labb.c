///Abraham Paroya CIS 1057 Fall 2020 Lab 11

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#define MAX_ARRAY_SIZE 50
#define MAX_LINE_ITEMS 200
#define MAX_READ_CHARS 200

typedef struct products_t {
  char product_code[10];
  char description[50];
  double price;
  int members;
}
products_t;

typedef struct line_items_t {
  int invoice_id;
  char product_code_item[10];
  double itemPrice;
  double total;
}
lineitems_t;

products_t pa[MAX_ARRAY_SIZE];

int read_products(struct products_t * pa, FILE * fp);
int read_line_items(struct line_items_t * pb, FILE * fptr);
void print_line_item(struct line_items_t * pb);
void print_line_items(struct line_items_t * pb, int size);
void print_products(struct products_t * pa, int size);
void print_product(struct products_t * pa);

int main() {
  FILE * fp;
  FILE * fptr;
  fp = fopen("products.txt", "r");
  fptr = fopen("lineitems.txt", "r");

  struct products_t pa;
  struct line_items_t pb;

  int line_items_t[MAX_LINE_ITEMS];

  int products = read_products( & pa, fp);
  int items = read_line_items( & pb, fptr);

  printf("Number of Products: %d", products);
  printf("Number of Items: %d", items);
  printf("%d", line_items_t);

  print_products( & pa, products);
  print_line_items( & pb, items);
}

/*int read_products(struct products_t *pa, FILE *fp) {

	size_t buffer_size = 80;
	char *buffer = malloc(buffer_size * sizeof(char));
	int counter = 1;
	fp = fopen("products.txt", "r");
	if (fp == NULL) {
		printf("Error");
	} else {
		while (getline(&buffer, &buffer_size, fp) != -1) {
			//printf("Line %d: %s", ++counter, buffer);
			fscanf(fp, "%[^,],%[^,],%lf,%d", pa->product_code, pa->description, &pa->price, &pa->members);
			counter++;
		}
		fclose(fp);
	}
	return counter;
}*/

int read_products(struct products_t * pa, FILE * fp) {
  size_t buffer_size = 80;
  char * buffer = malloc(buffer_size * sizeof(char));
  int counter = 0;
  int i = 0;
  fp = fopen("products.txt", "r");
  if (fp == NULL) {
    printf("Error");
  } else {
    while (fscanf(fp, "%[^,],%[^,],%lf,%d", &
        pa[i].product_code, &
        pa[i].description, &
        pa[i].price, &
        pa[i].members) != EOF)
    {
      printf("Line %d: %s", ++counter, buffer);
      fscanf(fp, "%[^,],%[^,],%lf,%d", &
        pa -> product_code, &
        pa -> description, &
        pa -> price, &
        pa -> members);
      counter++;
      i++;
    }
    fclose(fp);
  }
  return counter;
}

int read_line_items(struct line_items_t * pb, FILE * fptr) {

  size_t buffer_size = 80;
  char * buffer = malloc(buffer_size * sizeof(char));
  int counter = 0;
  int i = 0;
  fptr = fopen("lineitems.txt", "r");
  if (fptr == NULL) {
    printf("Error");
  } else {
    while (fscanf(fptr, "%[^,],%[^,],%lf,%d", &
        pb[i].invoice_id, &
        pb[i].product_code_item, &
        pb[i].itemPrice, &
        pb[i].total) != EOF) {
      printf("Line %d: %s", ++counter, buffer);
      fscanf(fptr, "%[^,],%[^,],%lf,%d", &
        pb -> invoice_id, &
        pb -> product_code_item, &
        pb -> itemPrice, &
        pb -> total);
      counter++;
      i++;
    }
    fclose(fptr);
  }
  return counter;
}

void print_product(struct products_t * pa) {
  printf("\n%s", pa -> product_code);
  printf("\n%s", pa -> description);
  printf("\n%lf", pa -> price);
  printf("\n%d\n", pa -> members);
}
void print_products(struct products_t * pa, int size) {
    printf("\n%s", pa->product_code);
    printf("\n%s", pa->description);
    printf("\n%lf", pa->price);
    printf("\n%d\n", pa->members);
  int i;
  for (i = 0; i < size; i++) {
    printf("\n%s", pa[i].product_code);
    printf("\n%s", pa[i].description);
    printf("\n%lf", pa[i].price);
    printf("\n%d", pa[i].members);
    printf("\n");
  }
}

void print_line_item(struct line_items_t * pb) {
  printf("\n%s", pb -> invoice_id);
  printf("\n%s", pb -> product_code_item);
  printf("\n%lf", pb -> itemPrice);
  printf("\n%d\n", pb -> total);
}
void print_line_items(struct line_items_t * pb, int size) {
  printf("\n%s", pb -> invoice_id);
  printf("\n%s", pb -> product_code_item);
  printf("\n%lf", pb -> itemPrice);
  printf("\n%d\n", pb -> total);
  int i;
  for (i = 0; i < size; i++) {
    printf("\n%s", pb[i].invoice_id);
    printf("\n%s", pb[i].product_code_item);
    printf("\n%lf", pb[i].itemPrice);
    printf("\n%d", pb[i].total);
    printf("\n");
  }

}

int zero_quantities(int counter) {

  int pa_count;
  int quanity_sum[200];

 //quanity_sum = counter;
  pa_count = sizeof(quanity_sum);

}
calc_report(struct products_t * pa, int pa_count) {

}
