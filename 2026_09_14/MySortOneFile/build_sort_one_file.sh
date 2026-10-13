echo "Выберите сортировку:"
echo "1) Bubble sort(пузырьковая сортировка), O(n^2)"
echo "2) Selection sort(сортировка выбором), O(n^2)"
echo "3) Insert sort(сортировка вставкой), O(n^2)"
echo "4) Quick sort(быстрая сортировка), O(n*log(n))"

echo "Введите номер(1, 2, 3, 4)"
read choice

case "$choice" in
    1)
        MAIN="my_bubble_sort.cpp"
        ;;
    2)
        MAIN="my_selection_sort.cpp"
        ;;
    3)
        MAIN="my_insert_sort.cpp"
        ;;
    4)
        MAIN="my_quick_sort.cpp"
        ;;
    *)
        echo "Ошибка: Неверный выбор! Завершение работы."
        exit 1
        ;;

esac
APP=example

if [ ! -f "$MAIN" ]; then
    echo "Ошибка: Файл $MAIN не найден!"
    exit 1
fi

echo "Компиляция $MAIN..."
g++ "$MAIN" -o "$APP"

if [ $? -eq 0 ]; then
    echo "Запуск приложения..."
    ./"$APP"
else
    echo "Ошибка компиляции!"
    exit 1
fi

if [ -f "$APP" ]; then
    rm "$APP"
fi