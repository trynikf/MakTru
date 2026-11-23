MAIN="main.cpp menu_functional.cpp menu_items.cpp"
APP=example

echo "Компиляция $MAIN..."
g++ $MAIN -o "$APP"

./"$APP"

if [ -f "$APP" ]; then
    rm "$APP"
fi