echo "Выберите файл для запуска"
echo "1) Refactoring1.cpp"
echo "2) Refactoring2.cpp"
echo "3) Refactoring3.cpp"
echo "4) Refactoring4.cpp"
echo "5) Refactoring5.cpp"

echo "Введите номер (1, 2, 3, 4, 5)"
read choice

case "$choice" in 
    1)
        MAIN="Refactoring1.cpp"
        ;;
    2)
        MAIN="Refactoring2.cpp"
        ;;
    3)
        MAIN="Refactoring3.cpp"
        ;;
    4)
        MAIN="Refactoring4.cpp"
        ;;
    5)
        MAIN="Refactoring5.cpp"
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