MAIN=HelloWorld.cpp
APP=example

g++ $MAIN -o "$APP"

./"$APP"

if [ -f "$APP" ]; then
    rm "$APP"
fi