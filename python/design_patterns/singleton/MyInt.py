class MyInt(type):
    def __call__(cls, *args, **kwds):
        print("*** Here's My Int ***", args)
        print("Now do whatever you want with these objects ...")
        return type.__call__(cls, *args, **kwds)

class int(metaclass=MyInt):
    def __init__(self, x, y):
        self.x = x
        self.y = y

i = int(5,6)