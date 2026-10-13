MAIN=hello_world.cpp
APP=example

echo "Компиляция $MAIN..."
g++ $MAIN -o "$APP"

./"$APP"

if [ -f "$APP" ]; then
    rm "$APP"
fi