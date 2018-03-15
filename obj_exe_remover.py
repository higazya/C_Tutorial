import os


xdir_name = "G:\\01_Amit Courses\\C_course\Session4_Array_Structures_Ptr\\01_Labs"
dir_name = "G:\\01_Amit Courses\\C_course\\Session5_Advaced_Pointers\\01_Labs"
test = os.listdir(dir_name)

for item in test:
    if item.endswith(".o")or item.endswith(".exe"):
        os.remove(os.path.join(dir_name, item))
