/* ************************************************************************** */
/*                           LIBFT TESTER                                     */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Farben für Output
#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define RESET "\033[0m"
#define BLUE "\033[0;34m"

void test_isalpha(void)
{
    printf("\n%s=== ft_isalpha ===%s\n", BLUE, RESET);

    char test_chars[] = {'a', 'Z', '5', ' ', 'M'};
    int i;
    int all_pass = 1;

    for (i = 0; i < 5; i++)
    {
        int my_result = ft_isalpha(test_chars[i]);
        int real_result = isalpha(test_chars[i]);
        int pass = (my_result != 0) == (real_result != 0);

        if (pass)
            printf("  %s✓%s '%c': %d\n", GREEN, RESET, test_chars[i], my_result);
        else
        {
            printf("  %s✗%s '%c': got %d, expected %d\n", RED, RESET, test_chars[i], my_result, real_result);
            all_pass = 0;
        }
    }

    if (all_pass)
        printf("%s✓ All tests passed!%s\n", GREEN, RESET);
}

void test_isdigit(void)
{
    printf("\n%s=== ft_isdigit ===%s\n", BLUE, RESET);

    char test_chars[] = {'0', '9', 'a', ' ', '5'};
    int i;
    int all_pass = 1;

    for (i = 0; i < 5; i++)
    {
        int my_result = ft_isdigit(test_chars[i]);
        int real_result = isdigit(test_chars[i]);
        int pass = (my_result != 0) == (real_result != 0);

        if (pass)
            printf("  %s✓%s '%c': %d\n", GREEN, RESET, test_chars[i], my_result);
        else
        {
            printf("  %s✗%s '%c': got %d, expected %d\n", RED, RESET, test_chars[i], my_result, real_result);
            all_pass = 0;
        }
    }

    if (all_pass)
        printf("%s✓ All tests passed!%s\n", GREEN, RESET);
}

void test_strlen(void)
{
    printf("\n%s=== ft_strlen ===%s\n", BLUE, RESET);

    char *tests[] = {"Hello", "", "42", "Hello World"};
    int i;
    int all_pass = 1;

    for (i = 0; i < 4; i++)
    {
        size_t my_result = ft_strlen(tests[i]);
        size_t real_result = strlen(tests[i]);
        int pass = (my_result == real_result);

        if (pass)
            printf("  %s✓%s \"%s\": %zu\n", GREEN, RESET, tests[i], my_result);
        else
        {
            printf("  %s✗%s \"%s\": got %zu, expected %zu\n", RED, RESET, tests[i], my_result, real_result);
            all_pass = 0;
        }
    }

    if (all_pass)
        printf("%s✓ All tests passed!%s\n", GREEN, RESET);
}

void test_strchr(void)
{
    printf("\n%s=== ft_strchr ===%s\n", BLUE, RESET);

    char *str = "Hello World";
    char tests[] = {'H', 'l', 'x', '\0'};
    int i;
    int all_pass = 1;

    for (i = 0; i < 4; i++)
    {
        char *my_result = ft_strchr(str, tests[i]);
        char *real_result = strchr(str, tests[i]);
        int pass = (my_result == real_result);

        if (pass)
            printf("  %s✓%s '%c': %s\n", GREEN, RESET, tests[i],
                   my_result ? my_result : "(null)");
        else
        {
            printf("  %s✗%s '%c': got %p, expected %p\n", RED, RESET,
                   tests[i], (void*)my_result, (void*)real_result);
            all_pass = 0;
        }
    }

    if (all_pass)
        printf("%s✓ All tests passed!%s\n", GREEN, RESET);
}

void test_strrchr(void)
{
    printf("\n%s=== ft_strrchr ===%s\n", BLUE, RESET);

    char *str = "Hello World";
    char tests[] = {'l', 'o', 'x', '\0'};
    int i;
    int all_pass = 1;

    for (i = 0; i < 4; i++)
    {
        char *my_result = ft_strrchr(str, tests[i]);
        char *real_result = strrchr(str, tests[i]);
        int pass = (my_result == real_result);

        if (pass)
            printf("  %s✓%s '%c': %s\n", GREEN, RESET, tests[i],
                   my_result ? my_result : "(null)");
        else
        {
            printf("  %s✗%s '%c': got %p, expected %p\n", RED, RESET,
                   tests[i], (void*)my_result, (void*)real_result);
            all_pass = 0;
        }
    }

    if (all_pass)
        printf("%s✓ All tests passed!%s\n", GREEN, RESET);
}

void test_strncmp(void)
{
    printf("\n%s=== ft_strncmp ===%s\n", BLUE, RESET);

    struct {
        char *s1;
        char *s2;
        size_t n;
    } tests[] = {
        {"Hello", "Hello", 5},
        {"Hello", "Hella", 5},
        {"ABC", "ABZ", 2},
        {"", "Hello", 5},
        {"Hello", "World", 0}
    };

    int i;
    int all_pass = 1;

    for (i = 0; i < 5; i++)
    {
        int my_result = ft_strncmp(tests[i].s1, tests[i].s2, tests[i].n);
        int real_result = strncmp(tests[i].s1, tests[i].s2, tests[i].n);
        int pass = (my_result == real_result) ||
                   ((my_result > 0) == (real_result > 0) &&
                    (my_result < 0) == (real_result < 0));

        if (pass)
            printf("  %s✓%s \"%s\" vs \"%s\" (%zu): %d\n", GREEN, RESET,
                   tests[i].s1, tests[i].s2, tests[i].n, my_result);
        else
        {
            printf("  %s✗%s \"%s\" vs \"%s\" (%zu): got %d, expected %d\n",
                   RED, RESET, tests[i].s1, tests[i].s2, tests[i].n,
                   my_result, real_result);
            all_pass = 0;
        }
    }

    if (all_pass)
        printf("%s✓ All tests passed!%s\n", GREEN, RESET);
}

void test_lstnew(void)
{
    printf("\n%s=== ft_lstnew ===%s\n", BLUE, RESET);

    char *content = "Hello";
    t_list *node = ft_lstnew(content);

    if (node && node->content == content && node->next == NULL)
        printf("  %s✓ Node created correctly%s\n", GREEN, RESET);
    else
        printf("  %s✗ Node creation failed%s\n", RED, RESET);

    free(node);
}

void test_lstsize(void)
{
    printf("\n%s=== ft_lstsize ===%s\n", BLUE, RESET);

    t_list *node1 = ft_lstnew("1");
    t_list *node2 = ft_lstnew("2");
    t_list *node3 = ft_lstnew("3");

    node1->next = node2;
    node2->next = node3;

    int size = ft_lstsize(node1);

    if (size == 3)
        printf("  %s✓ Size: %d%s\n", GREEN, size, RESET);
    else
        printf("  %s✗ Size: got %d, expected 3%s\n", RED, size, RESET);

    free(node1);
    free(node2);
    free(node3);
}

int main(void)
{
    printf("\n");
    printf("╔════════════════════════════════════════╗\n");
    printf("║        LIBFT FUNCTION TESTER          ║\n");
    printf("╚════════════════════════════════════════╝\n");

    // Character functions
    test_isalpha();
    test_isdigit();

    // String functions
    test_strlen();
    test_strchr();
    test_strrchr();
    test_strncmp();

    // Linked list functions
    test_lstnew();
    test_lstsize();

    printf("\n");
    printf("╔════════════════════════════════════════╗\n");
    printf("║          TESTING COMPLETE!            ║\n");
    printf("╚════════════════════════════════════════╝\n");
    printf("\n");

    return (0);
}
