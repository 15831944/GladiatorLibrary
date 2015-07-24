/* Copyright (C) 1992, 1995, 1997, 2000, 2002 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
   02111-1307 USA.  */

#include <errno.h>
#include <unistd.h>

/* Clone the calling process, creating an exact copy.
   Return -1 for errors, 0 to the new process,
   and the process ID of the new process to the old process.  */
int
__fork ()
{
  __set_errno (ENOSYS);
  return -1;
}
//libc_hidden_def (__fork)
stub_warning (fork)

//weak_alias (__fork, fork)
#include <stub-tag.h>


/* If we don't have vfork, fork is close enough.  */

__pid_t
__vfork (void)
{
  return __fork ();
}
//libc_hidden_def (__vfork)

weak_alias (__vfork, vfork)
