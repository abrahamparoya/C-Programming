#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct products_t
{

	char product_code[10];
	char description[50];
	double price;
	int members;

};


int read_products(struct products_t *pa, FILE *fp);

#define MAX_PRODUCTS = 25
#define MAX_LINE_ITEMS = 200
#define MAX_READ_CHARS = 200

int main()
{
	FILE *fp;
	fp = fopen("products.txt", "r");

	struct products_t pa;

	int products = read_products(&pa, fp);

	printf("Number of Products: %d", products);
}
int read_products(struct products_t *pa, FILE *fp) {

	size_t buffer_size = 80;
	char *buffer = malloc(buffer_size * sizeof(char));
	int counter = 0;
	fp = fopen("products.txt", "r");
	if (fp == NULL) {
		printf("Error");
	} else {
		while (getline(&buffer, &buffer_size, fp) != -1) {
			//printf("Line %d: %s", ++counter, buffer);
			counter++;
		}
		fclose(fp);
	}
	return counter;
}
