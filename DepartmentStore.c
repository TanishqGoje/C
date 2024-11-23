#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for Product
struct Product
{
    int product_id;
    char name[50];
    float price;
    int stock;
};

// Define a structure for Department Store System
struct DepartmentStoreSystem
{
    struct Product *products; // Dynamic array to store products
    int product_count;        // Number of products
    float total_sales;        // Track total sales
};

// Function to add a product
void add_product(struct DepartmentStoreSystem *store, int product_id, char name[], float price, int stock)
{
    store->products = realloc(store->products, (store->product_count + 1) * sizeof(struct Product));
    if (store->products == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    store->products[store->product_count].product_id = product_id;
    strcpy(store->products[store->product_count].name, name);
    store->products[store->product_count].price = price;
    store->products[store->product_count].stock = stock;

    store->product_count++;
    printf("Product %s added successfully!\n", name);
}

// Function to sell a product
void sell_product(struct DepartmentStoreSystem *store, int product_id, int quantity)
{
    for (int i = 0; i < store->product_count; i++)
    {
        if (store->products[i].product_id == product_id)
        {
            if (store->products[i].stock >= quantity)
            {
                store->products[i].stock -= quantity;
                float sale_amount = quantity * store->products[i].price;
                store->total_sales += sale_amount;
                printf("Sold %d of %s for %.2f.\n", quantity, store->products[i].name, sale_amount);
            }
            else
            {
                printf("Not enough stock for %s.\n", store->products[i].name);
            }
            return;
        }
    }
    printf("Product ID %d not found.\n", product_id);
}

// Function to check stock
void check_stock(struct DepartmentStoreSystem *store, int product_id)
{
    for (int i = 0; i < store->product_count; i++)
    {
        if (store->products[i].product_id == product_id)
        {
            printf("Stock for %s: %d\n", store->products[i].name, store->products[i].stock);
            return;
        }
    }
    printf("Product not found.\n");
}

// Function to display total sales
void total_sales(struct DepartmentStoreSystem *store)
{
    printf("Total sales: %.2f\n", store->total_sales);
}

// Function to free dynamically allocated memory
void free_store(struct DepartmentStoreSystem *store)
{
    free(store->products);
}

// Main function for user interaction
int main()
{
    struct DepartmentStoreSystem store;
    store.products = NULL; // Initialize with no products
    store.product_count = 0;
    store.total_sales = 0.0;

    int choice;
    while (1)
    {
        printf("\n--- Department Store System ---\n");
        printf("1. Add Product\n");
        printf("2. Sell Product\n");
        printf("3. Check Stock\n");
        printf("4. View Total Sales\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int id, stock;
            char name[50];
            float price;

            printf("Enter Product ID: ");
            scanf("%d", &id);
            printf("Enter Product Name: ");
            scanf("%s", name);
            printf("Enter Product Price: ");
            scanf("%f", &price);
            printf("Enter Product Stock: ");
            scanf("%d", &stock);

            add_product(&store, id, name, price, stock);
        }
        else if (choice == 2)
        {
            int id, quantity;

            printf("Enter Product ID to sell: ");
            scanf("%d", &id);
            printf("Enter Quantity to sell: ");
            scanf("%d", &quantity);

            sell_product(&store, id, quantity);
        }
        else if (choice == 3)
        {
            int id;

            printf("Enter Product ID to check stock: ");
            scanf("%d", &id);

            check_stock(&store, id);
        }
        else if (choice == 4)
        {
            total_sales(&store);
        }
        else if (choice == 5)
        {
            printf("Exiting the program...\n");
            free_store(&store);
            break;
        }
        else
        {
            printf("Invalid option, please try again.\n");
        }
    }

    return 0;
}