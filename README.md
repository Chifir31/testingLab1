[![CI/CD GitHub Actions](https://github.com/Chifir31/testingLab1/actions/workflows/test-action.yml/badge.svg)](https://github.com/Chifir31/testingLab1/actions/workflows/test-action.yml)
[![Coverage Status](https://coveralls.io/repos/github/Chifir31/testingLab1/badge.svg?branch=main)](https://coveralls.io/github/Chifir31/testingLab1?branch=main)
[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=Chifir31_testingLab1&metric=alert_status)](https://sonarcloud.io/summary/new_code?id=Chifir31_testingLab1)
[![Security Rating](https://sonarcloud.io/api/project_badges/measure?project=Chifir31_testingLab1&metric=security_rating)](https://sonarcloud.io/summary/new_code?id=Chifir31_testingLab1)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=Chifir31_testingLab1&metric=bugs)](https://sonarcloud.io/summary/new_code?id=Chifir31_testingLab1)

# План тестирования
## Аттестационное тестирование
**Тест А1 (положительный)**
- Начальное состояние: Программа запущена. Программа предлагает пользователю выбор: Найти корни квадратного уравнения?
- Действие: Пользователь выбирает 'y'(да).
- Ожидаемый результат:
```
!** Attention **!
Дальше права на ошибку не будет!
Введите коэффициенты квадратного уравнения
a =
```

**Тест А2 (положительный)**
- Начальное состояние: Программа запущена. Программа предлагает пользователю выбор: Найти корни квадратного уравнения?
- Действие: Пользователь выбирает 'n'(нет).
- Ожидаемый результат: Программа завершает свою работу
```
! FREEDOM !
```

**Тест А3 (негативный)**
- Начальное состояние: Программа запущена. Программа предлагает пользователю выбор: Найти корни квадратного уравнения?
- Действие: Пользователь производит некорректный ввод для программы.
- Ожидаемый результат:
```
Программа глупая, программа не понимает, что хочет от нее пользователь!
Попробуй еще раз!
Почему бы не найти корни какого-нибудь квадратного уравнения?
y - Да, давай!
n - В другой раз.
```

**Тест А4 (положительный)**
- Начальное состояние: Программа предлагает пользователю ввести значение коэффициента a.
- Действие: Пользователь вводит значение коэффициента a.
- Ожидаемый результат:
```
А ты хорош! b =
```

**Тест А5 (негативный)**
- Начальное состояние: Программа предлагает пользователю ввести значение коэффициента a.
- Действие: Пользователь вводит некорректное значение коэффициента a.
- Ожидаемый результат: Программа завершает свою работу с кодом -1.

**Тест А6 (негативный)**
- Начальное состояние: Программа предлагает пользователю ввести значение коэффициента a.
- Действие: Пользователь вводит значение коэффициента a равное нулю.
- Ожидаемый результат: Программа завершает свою работу с кодом -1.

**Тест А7 (положительный)**
- Начальное состояние: Программа предлагает пользователю ввести значение коэффициента b.
- Действие: Пользователь вводит значение коэффициента b.
- Ожидаемый результат:
```
Финишный рывок! c =
```

**Тест А8 (негативный)**
- Начальное состояние: Программа предлагает пользователю ввести значение коэффициента b.
- Действие: Пользователь вводит некорректное значение коэффициента b.
- Ожидаемый результат: Программа завершает свою работу с кодом -1.
  
**Тест А9 (положительный)**
- Начальное состояние: Программа предлагает пользователю ввести значение коэффициента c.
- Действие: Пользователь вводит значение коэффициента c.
- Ожидаемый результат:
```
x1 = 1.666667, x2 = 1.666667

Интересный факт! В последовательности Фибоначчи 2 элемент это 1
! FREEDOM !

```

**Тест А10 (положительный)**
- Начальное состояние: Программа предлагает пользователю ввести значение коэффициента c.
- Действие: Пользователь некорректное значение коэффициента c.</li>
- Ожидаемый результат: Программа завершает свою работу с кодом -1.

## Блочное тестирование
**Тест Б1 (положительный)**
- Описание: Дискриминант в квадратном уравнении больше нуля.
- Входные данные: a = 2, b = 5, c = -3
- Ожидаемый результат: x1 = -3, x2 = -0.5

**Тест Б2 (положительный)**
- Описание: Дискриминант в квадратном уравнении равен нулю.
- Входные данные: a = 16, b = -8, c = 1
- Ожидаемый результат: x1 = 0.25, x2 = 0.25

**Тест Б3 (положительный)**
- Описание: В квадратном уравнении коэффициент a = 0.
- Входные данные: a = 0, b = -6, c = 2
- Ожидаемый результат: x1 = nan, x2 = nan

**Тест Б4 (положительный)**
- Описание: В квадратном уравнении коэффициенты a = b = 0.
- Входные данные: a = 0, b = 0, c = 1
- Ожидаемый результат: x1 = nan, x2 = nan

**Тест Б5 (положительный)**
- Описание: Дискриминант в квадратном уравнении меньше нуля.
- Входные данные: a = 9, b = -6, c = 2
- Ожидаемый результат: x1 = nan, x2 = nan



## Интеграционное тестирование
**Тест И1 (положительный)**
- Методы: int fibonachi(int num), double *findRootQuadraticEquation(double a, double b, double c)
- Описание: Проверка, можно ли результат работы функции Фибоначчи использовать в качестве коэффициента квадратного уравнения.
- Входные данные: findRootQuadraticEquation(double(fibonachi(3)), double(fibonachi(-5)), double(fibonachi(2)))
- Ожидаемый результат: x1 = nan, x2 = nan
