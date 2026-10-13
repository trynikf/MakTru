echo "Выберите сортировку:"
echo "1) Bubble sort(пузырьковая сортировка)"
echo "2) Selection sort(сортировка выбором)"
echo "3) Insert sort(сортировка выбором)"

echo "Введите номер(1, 2, 3)"
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