import os
import time
import subprocess
import threading

#======================================================================

def show_disp(txt_name):
     res = subprocess.run(txt_name, shell = True)
     

def datsleep(second):
     for num in range(second):
          print(".", end="")
          time.sleep(1)



#======================================================================

subprocess.run("cls", shell = True)
subprocess.run("COLOR 0A", shell = True)


print("localhost/root>", end="")
time.sleep(2)
print(" mnt//usr/bin/XXXX_levWARN\n")
time.sleep(1)

print("Hacking System Booting", end="")
datsleep(4)
print(": SUCCESS!!\n")
time.sleep(1)

print('''=========================================================================
  SUCCESSFULLY BOOTING HACKING SYSTEM
  WARNING : This is very dangerous hacking system. You can crack too.
=========================================================================''')
time.sleep(2)

print("\nUser", end="")
datsleep(4)
print(" : ANONYMOUS_")


time.sleep(1)

print("LOGIN", end="")
datsleep(3)
print(" : SUCCESS!!\n")
time.sleep(1)


show_stat = threading.Thread(target=show_disp, args=("start contents/stat.exe",))
show_stat.start()
show_stat.join()


print("Accessing to dark Network", end="")
datsleep(4)

print("\nAccessing Root to XXXXX.xx.XXX[000.000.00.0.00]\n")
time.sleep(2)

print("  1     1 ms     1 ms     1 ms  secret.xx [192.168.10.1]")
time.sleep(1)
print("  2     4 ms     5 ms    18 ms  global1561-111-000.XXXX.ne.jp [451.XXX.188.2]")
time.sleep(1)
print("  3     3 ms     3 ms     2 ms  global217-225.XXXX.ne.jp [451.1.XXX.225]")
time.sleep(1)
print("  4    12 ms    35 ms     3 ms  global216-121.XXXX.ne.jp [451.8.216.XXX]")
time.sleep(1)
print("  5     3 ms     3 ms     2 ms  anony.XXXX.ne.jp [451.1.XXX.456]")
time.sleep(1)
print("  6     4 ms     3 ms     3 ms  210.158.147.136")
time.sleep(1)
print("  7    11 ms     9 ms    25 ms  ff5659.io.llll.ware.jp [261.XXX.XXX.654]")
time.sleep(1)
print("  8     9 ms     9 ms    25 ms  XXX.XX.7X.99")
time.sleep(1)
print("  9     8 ms     8 ms     9 ms  XXX.XX.2XX.452\n")
time.sleep(1)


show_bits = threading.Thread(target=show_disp, args=("start contents/1bit_rand.exe",))
show_bits.start()
show_bits.join()

show_warn = threading.Thread(target=show_disp, args=("start contents/warning.exe",))
show_warn.start()
show_warn.join()

print("Access Complete!!\n")

print("Checking data", end="")
datsleep(10)

input("\n--- Press Any key too continue ---")
