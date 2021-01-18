///Abraham Paroya ~ Lab 11 Final ~ Section 003

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#define MAX_ARRAY_SIZE 50

#define MAX_PRODUCTS 25
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
line_items_t;

products_t pa1[MAX_ARRAY_SIZE];
line_items_t pbl[MAX_ARRAY_SIZE];

int read_products(struct products_t * pa, FILE * fp);
void print_product(products_t pa);
void print_products(products_t pa1[], int size);

int read_line_items(struct line_items_t * pb, FILE * fptr);
void print_line_item(line_items_t pb);
void print_line_items(line_items_t pbl[], int size);

int main() {

  //int quantity_sums[pa_count];
  products_t pa[MAX_PRODUCTS];
  int pa_count = read_products(pa, "products.txt");
  printf("%d products read.\n", pa_count);
  print_products(pa, pa_count);

  line_items_t pb[MAX_LINE_ITEMS];
  int pb_count = read_line_items(pb, "lineitems.txt");
  printf("%d lineitems read.\n", pb_count);
  print_products(pb, pb_count);
}

int read_products(struct products_t * pa, FILE * fp) {

  fp = fopen("products.csv", "r");
  char buffer[MAX_READ_CHARS];
  int count = 0;
  int i = 0;
  if (fp != NULL)
    while (fgets(buffer, MAX_READ_CHARS, fp) != NULL) {
      strcpy(pa[i].product_code, strtok(buffer, ","));
      strcpy(pa[i].description, strtok(NULL, ","));
      pa[i].price = atof(strtok(NULL, ","));
      pa[i].members = atoi(strtok(NULL, ","));
      i++;
      count++;
    }
  else {
    perror("File not found");
    exit(1);
  }
  fclose(fp);
  return count;
}
int read_line_items(struct line_items_t * pb, FILE * fptr) {
  fptr = fopen("lineitems.csv", "r");
  char buffer[MAX_READ_CHARS];
  int lcount = 0;
  int x = 0;
  if (fptr != NULL)
    while (fgets(buffer, MAX_READ_CHARS, fptr) != NULL) {
      pb[x].invoice_id, atof(strtok(buffer, ","));
      strcpy(pb[x].product_code_item, strtok(NULL, ","));
      pb[x].itemPrice = atof(strtok(NULL, ","));
      pb[x].total = atof(strtok(NULL, ","));
      x++;
      lcount++;
    }
  else {
    perror("File not found");
    exit(1);
  }
  fclose(fptr);
  return lcount;
}

void print_product(products_t pa) {
  printf("%-6s %-50s %10.2f %10d\n", pa.product_code, pa.description,
    pa.price, pa.members);
}
void print_line_item(line_items_t pb) {
  printf("%d %s %d %d\n", pb.invoice_id, pb.product_code_item,
    pb.itemPrice, pb.total);
}

// Prints all products from file to the screen
void print_products(products_t pa1[], int size) {
  printf("%-6s %-50s %10s %10s\n", "code", "desc", "price",
    "amount");
  for (int i = 0; i < size; i++)
    print_product(pa1[i]);
}

// Prints all products from file to the screen
void print_line_items(line_items_t pbl[], int size) {
  printf("%d %s %d %d\n", "invoice id", "product code", "price",
    "total");
  for (int i = 0; i < size; i++)
    print_line_item(pbl[i]);
}

/*zero_totals(double total_sums[pb_count]){

    memset(arr, '0', sizeof(total_sums));

}*/
void calc_report(products_t[MAX_PRODUCTS], int pa_count, line_items_t pb[MAX_LINE_ITEMS], int lcount, double, int total_sums[pa_count], int quantity sum[pb_count]) {
  int x = 0;
  int y = 0;
  for (x = 0; x < pa_count; x++) {
    for (y = 0; y < l count; y++)
  }
  if (strcmp(pa[x].product_code, pb[j].product_code) == 0) {
    int quanitity_sums[0] += pb[x].quantity;
    double total_sums[0] += pa[i].total;
  } else;

}
void update_products() {}
void print_report(product_t pa, int pa_count, total_sums[], quantity_sums[]) {
  int tot_quantity;
  int i;
  int j;

  printf("Product sales Report\n");

}
void write_products() {

  FILE * f2ptr
  f2ptr = fopen("report(2).txt");

}
