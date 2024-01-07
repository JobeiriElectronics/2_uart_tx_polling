#define A GPIOA
#define B GPIOB
#define C GPIOC
#define D GPIOD
#define E GPIOE
#define F GPIOF
#define G GPIOG
#define H GPIOH
#define I GPIOI
#define J GPIOJ
#define K GPIOK

// GPIO definition
#define _GPI0A_ENABLE __HAL_RCC_GPIOA_CLK_ENABLE()
#define _GPI0B_ENABLE __HAL_RCC_GPIOB_CLK_ENABLE()
#define _GPI0C_ENABLE __HAL_RCC_GPIOC_CLK_ENABLE()
#define _GPI0D_ENABLE __HAL_RCC_GPIOD_CLK_ENABLE()
#define _GPI0E_ENABLE __HAL_RCC_GPIOE_CLK_ENABLE()
#define _GPI0F_ENABLE __HAL_RCC_GPIOF_CLK_ENABLE()
#define _GPI0G_ENABLE __HAL_RCC_GPIOG_CLK_ENABLE()
#define _GPI0H_ENABLE __HAL_RCC_GPIOH_CLK_ENABLE()
#define _GPI0I_ENABLE __HAL_RCC_GPIOI_CLK_ENABLE()
#define _GPI0J_ENABLE __HAL_RCC_GPIOJ_CLK_ENABLE()
#define _GPI0K_ENABLE __HAL_RCC_GPIOK_CLK_ENABLE()

// UART definition
#define _UART4_ENABLE __HAL_RCC_UART4_CLK_ENABLE()
#define _UART5_ENABLE __HAL_RCC_UART5_CLK_ENABLE()
#define _UART7_ENABLE __HAL_RCC_UART7_CLK_ENABLE()
#define _UART8_ENABLE __HAL_RCC_UART8_CLK_ENABLE()

// UART 4
void uart_tx_pa0_init (void);
void uart_rx_pa1_init (void);

// UART 5
void uart_tx_pc12_init (void);
void uart_rx_pd2_init (void);

// UART 7
void uart_tx_pe8_init (void);
void uart_rx_pe7_init (void);

// UART 8
void uart_tx_pe1_init (void);
void uart_rx_pe0_init (void);

UART_HandleTypeDef huart4, huart5, huart7, huart8;
