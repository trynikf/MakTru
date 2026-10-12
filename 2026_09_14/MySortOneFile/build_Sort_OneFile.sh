MAIN=my_bubble_sort.cpp
APP=example

echo "Компиляция $MAIN..."
g++ $MAIN -o "$APP"

./"$APP"

if [ -f "$APP" ]; then
    rm "$APP"
fi