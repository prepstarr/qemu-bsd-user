
/* sys/ttycom.h tty(4) */
IOCTL(TIOCSETD, IOC_W, MK_PTR(TYPE_INT))
IOCTL(TIOCGETD, IOC_R, MK_PTR(TYPE_INT))
IOCTL(TIOCSBRK, IOC_, TYPE_NULL)
IOCTL(TIOCCBRK, IOC_, TYPE_NULL)
IOCTL(TIOCSDTR, IOC_, TYPE_NULL)
IOCTL(TIOCCDTR, IOC_, TYPE_NULL)
IOCTL(TIOCGPGRP, IOC_R, MK_PTR(TYPE_INT))
IOCTL(TIOCSPGRP, IOC_W, MK_PTR(TYPE_INT))
IOCTL(TIOCGETA, IOC_R, MK_PTR(MK_STRUCT(STRUCT_termios)))
IOCTL(TIOCSETA, IOC_W, MK_PTR(MK_STRUCT(STRUCT_termios)))
IOCTL(TIOCSETAW, IOC_W, MK_PTR(MK_STRUCT(STRUCT_termios)))
IOCTL(TIOCSETAF, IOC_W, MK_PTR(MK_STRUCT(STRUCT_termios)))
IOCTL(TIOCOUTQ, IOC_R, MK_PTR(TYPE_INT))
IOCTL(TIOCSTI, IOC_W, MK_PTR(TYPE_CHAR))
IOCTL(TIOCNOTTY, IOC_, TYPE_NULL)
IOCTL(TIOCSTOP, IOC_, TYPE_NULL)
IOCTL(TIOCSTART, IOC_, TYPE_NULL)
IOCTL(TIOCSCTTY, IOC_, TYPE_NULL)
IOCTL(TIOCDRAIN, IOC_, TYPE_NULL)
IOCTL(TIOCEXCL, IOC_, TYPE_NULL)
IOCTL(TIOCNXCL, IOC_, TYPE_NULL)
IOCTL(TIOCFLUSH, IOC_W, MK_PTR(TYPE_INT))
IOCTL(TIOCGWINSZ, IOC_R, MK_PTR(MK_STRUCT(STRUCT_winsize)))
IOCTL(TIOCSWINSZ, IOC_W, MK_PTR(MK_STRUCT(STRUCT_winsize)))
IOCTL(TIOCCONS, IOC_W, MK_PTR(TYPE_INT))
IOCTL(TIOCMSET, IOC_W, MK_PTR(TYPE_INT))
IOCTL(TIOCMGET, IOC_R, MK_PTR(TYPE_INT))
IOCTL(TIOCMBIS, IOC_W, MK_PTR(TYPE_INT))
IOCTL(TIOCMBIC, IOC_W, MK_PTR(TYPE_INT))

/* sys/filio.h */
IOCTL(FIOCLEX, IOC_, TYPE_NULL)
IOCTL(FIONCLEX, IOC_, TYPE_NULL)
IOCTL(FIONREAD, IOC_R, MK_PTR(TYPE_INT))
IOCTL(FIONBIO, IOC_W, MK_PTR(TYPE_INT))
IOCTL(FIOASYNC, IOC_W, MK_PTR(TYPE_INT))
IOCTL(FIOSETOWN, IOC_W, MK_PTR(TYPE_INT))
IOCTL(FIOGETOWN, IOC_R, MK_PTR(TYPE_INT))
IOCTL(FIODTYPE, IOC_R, MK_PTR(TYPE_INT))
IOCTL(FIOGETLBA, IOC_R, MK_PTR(TYPE_INT))
IOCTL(FIODGNAME, IOC_R, MK_PTR(STRUCT_fiodgname_arg))
IOCTL(FIONWRITE, IOC_R, MK_PTR(TYPE_INT))
IOCTL(FIONSPACE, IOC_R, MK_PTR(TYPE_INT))
IOCTL(FIOSEEKDATA, IOC_RW, MK_PTR(TYPE_ULONG))
IOCTL(FIOSEEKHOLE, IOC_RW, MK_PTR(TYPE_ULONG))
