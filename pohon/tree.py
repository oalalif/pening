import turtle

xy = turtle.Turtle()
xy.screen.bgcolor("black")
xy.pensize(2)
xy.color("green")
xy.left(90)
xy.backward(100)
xy.speed(20000)
xy.shape("turtle")

def tree(e):
    if e<10:
        return
    else:
        xy.forward(e)
        xy.color("orange")
        xy.circle(2)
        xy.color("red")
        xy.left(30)

        tree(3*e/4)

        xy.right(60)

        tree(3*e/4)

        xy.left(30)
        xy.backward(e)
tree(100)
turtle.done