*This project has been created as part of the 42 curriculum by sbenkass.*

# Description

The push swap project is about sorting a stack of integers in ascending order from the lowest to the highest.

To sort those integers, we have two stacks A and B. First, the integers are all in stack A in a random order, and we have a set of moves that we can use to make those integers sorted in order.

## moves

**sa (swap a):** Swap the first 2 elements at the top of stack a. Do nothing if there is only one element or none.

**sb (swap b):** Swap the first 2 elements at the top of stack b. Do nothing if there is only one element or none.

**ss :** sa and sb at the same time.

**pa (push a):** Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.

**pb (push b):** Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.

**ra (rotate a):** Shift up all elements of stack a by 1.
The first element becomes the last one.

**rb (rotate b):** Shift up all elements of stack b by 1. The first element becomes the last one.

**rr :** ra and rb at the same time.

**rra (reverse rotate a):** Shift down all elements of stack a by 1.
The last element becomes the first one.

**rrb (reverse rotate b):** Shift down all elements of stack b by 1. The last element becomes the first one.

**rrr :** rra and rrb at the same time.

## Algorithm used

To sort those integers using the set of moves mentioned above, you need to use an algorithm
You can just push everything to B and then push the biggest number back to A and rotate B until you find the next one, and so on…
But that way, you will need a lot of moves.

Because of that, I chose the K-Sort Algorithm, which sorts the integers in a nearly sorted way, then we push them in a sorted way to A again.

# Instructions

To run the push swap program, first you need to compile all the C source files. To do so, run the ```make``` command in the terminal while you are in the project directory, then run the program using this command
```.\push_swap "3 2 1"```

You can also add any other numbers here, 3 2 1 is just an example
You can also write your preferred integers without  the " " because here all the parsing is handled according to the project requirements

if you add the same integer twice or more, you will get an Error message.

the Error messsage appear when there is a bad input like “3 2 1 helloword”

# Resources

To do the push_swap project, my peers in the 1337 school helped me a lot by explaining a lot of sorting algorithms to me.
[push_swap visualizer](https://codepen.io/ahkoh/full/bGWxmVz)

Also, to be honest AI was used like to help me identify the reasons behind a lot of errors.
