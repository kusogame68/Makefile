# Simple C Programs with Makefile (Kernel Makefile Learning Practice)

## 🎯 Purpose

This project contains simple C programs and a Makefile to help understand how `make` works.
The goal is to simulate and learn the basic build process similar to how Linux kernel modules use `Makefile`.

---

## 📄 Files

### `Makefile`

✅ Defines separate targets for each program and a `clean` target to remove compiled binaries.
✅ The design is inspired by Linux kernel module Makefiles, but simplified for user-space C programs.

---

## 🛠️ Build & Run

### Build and run `hello.c`

```bash
make no1
```

### Build and run `getValue.c`

```bash
make no2
```

### Clean binaries

```bash
make clean
```

---

## 💡 Learning Purpose

* Understand **Makefile structure** and how to define multiple targets.
* Practice **pointer and array access** in C.
* Simulate kernel-style build habits before moving on to actual **kernel module development**.

---

## ⚙️ Next Steps

To further simulate Linux kernel module style, consider rewriting the Makefile using:

```Makefile
obj-m += mymodule.o
KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules
clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
```

---

## 💬 Contact

If you have questions or want to share learning progress, feel free to discuss!

---

### 📢 Happy Coding & Kernel Hacking!
