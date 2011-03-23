#ifndef __HIREDIS_PY_H
#define __HIREDIS_PY_H

#include <Python.h>
#include <hiredis/hiredis.h>

#ifndef PyMODINIT_FUNC	/* declarations for DLL import/export */
#define PyMODINIT_FUNC void
#endif

extern PyObject *HiErr_Base;
extern PyObject *HiErr_ProtocolError;
extern PyObject *HiErr_ReplyError;

#if PY_MAJOR_VERSION >= 3
PyMODINIT_FUNC PyInit_hiredis(void);
#else
PyMODINIT_FUNC inithiredis(void);
#endif

#endif
