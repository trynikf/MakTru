echo "Выберите файл для запуска"
echo "1) refactoring1.cpp"
echo "2) refactoring2.cpp"
echo "3) refactoring3.cpp"
echo "4) refactoring4.cpp"
echo "5) refactoring5.cpp"

echo "Введите номер (1, 2, 3, 4, 5)"
read choice

case "$choice" in 
    1)
        MAIN="refactoring1.cpp"
        ;;
    2)
        MAIN="refactoring2.cpp"
        ;;
    3)
        MAIN="refactoring3.cpp"
        ;;
    4)
        MAIN="refactoring4.cpp"
        ;;
    5)
        MAIN="refactoring5.cpp"
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