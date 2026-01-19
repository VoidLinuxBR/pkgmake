/*
 * Errors generated from
 * [MS-ERREF] http://msdn.microsoft.com/en-us/library/cc704587.aspx
 */
#include "lib/replace/system/python.h"
#include "python/py3compat.h"
#include "includes.h"

static struct PyModuleDef moduledef = {
	PyModuleDef_HEAD_INIT,
	.m_name = "hresult",
	.m_doc = "HRESULT defines",
	.m_size = -1,
	};

MODULE_INIT_FUNC(hresult)
{
	PyObject *m = NULL;
	PyObject *py_obj = NULL;
	int ret;

	m = PyModule_Create(&moduledef);
	if (m == NULL) {
		return NULL;
	}

	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_S_CONVERTED));
	ret = PyModule_AddObject(m, "HRES_STG_S_CONVERTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_S_BLOCK));
	ret = PyModule_AddObject(m, "HRES_STG_S_BLOCK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_S_RETRYNOW));
	ret = PyModule_AddObject(m, "HRES_STG_S_RETRYNOW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_S_MONITORING));
	ret = PyModule_AddObject(m, "HRES_STG_S_MONITORING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_S_MULTIPLEOPENS));
	ret = PyModule_AddObject(m, "HRES_STG_S_MULTIPLEOPENS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_S_CONSOLIDATIONFAILED));
	ret = PyModule_AddObject(m, "HRES_STG_S_CONSOLIDATIONFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_S_CANNOTCONSOLIDATE));
	ret = PyModule_AddObject(m, "HRES_STG_S_CANNOTCONSOLIDATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_S_USEREG));
	ret = PyModule_AddObject(m, "HRES_OLE_S_USEREG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_S_STATIC));
	ret = PyModule_AddObject(m, "HRES_OLE_S_STATIC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_S_MAC_CLIPFORMAT));
	ret = PyModule_AddObject(m, "HRES_OLE_S_MAC_CLIPFORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DRAGDROP_S_DROP));
	ret = PyModule_AddObject(m, "HRES_DRAGDROP_S_DROP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DRAGDROP_S_CANCEL));
	ret = PyModule_AddObject(m, "HRES_DRAGDROP_S_CANCEL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DRAGDROP_S_USEDEFAULTCURSORS));
	ret = PyModule_AddObject(m, "HRES_DRAGDROP_S_USEDEFAULTCURSORS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DATA_S_SAMEFORMATETC));
	ret = PyModule_AddObject(m, "HRES_DATA_S_SAMEFORMATETC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_VIEW_S_ALREADY_FROZEN));
	ret = PyModule_AddObject(m, "HRES_VIEW_S_ALREADY_FROZEN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CACHE_S_FORMATETC_NOTSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_CACHE_S_FORMATETC_NOTSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CACHE_S_SAMECACHE));
	ret = PyModule_AddObject(m, "HRES_CACHE_S_SAMECACHE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CACHE_S_SOMECACHES_NOTUPDATED));
	ret = PyModule_AddObject(m, "HRES_CACHE_S_SOMECACHES_NOTUPDATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLEOBJ_S_INVALIDVERB));
	ret = PyModule_AddObject(m, "HRES_OLEOBJ_S_INVALIDVERB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLEOBJ_S_CANNOT_DOVERB_NOW));
	ret = PyModule_AddObject(m, "HRES_OLEOBJ_S_CANNOT_DOVERB_NOW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLEOBJ_S_INVALIDHWND));
	ret = PyModule_AddObject(m, "HRES_OLEOBJ_S_INVALIDHWND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_INPLACE_S_TRUNCATED));
	ret = PyModule_AddObject(m, "HRES_INPLACE_S_TRUNCATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONVERT10_S_NO_PRESENTATION));
	ret = PyModule_AddObject(m, "HRES_CONVERT10_S_NO_PRESENTATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_S_REDUCED_TO_SELF));
	ret = PyModule_AddObject(m, "HRES_MK_S_REDUCED_TO_SELF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_S_ME));
	ret = PyModule_AddObject(m, "HRES_MK_S_ME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_S_HIM));
	ret = PyModule_AddObject(m, "HRES_MK_S_HIM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_S_US));
	ret = PyModule_AddObject(m, "HRES_MK_S_US", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_S_MONIKERALREADYREGISTERED));
	ret = PyModule_AddObject(m, "HRES_MK_S_MONIKERALREADYREGISTERED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_S_SOME_SUBSCRIBERS_FAILED));
	ret = PyModule_AddObject(m, "HRES_EVENT_S_SOME_SUBSCRIBERS_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_S_NOSUBSCRIBERS));
	ret = PyModule_AddObject(m, "HRES_EVENT_S_NOSUBSCRIBERS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_S_TASK_READY));
	ret = PyModule_AddObject(m, "HRES_SCHED_S_TASK_READY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_S_TASK_RUNNING));
	ret = PyModule_AddObject(m, "HRES_SCHED_S_TASK_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_S_TASK_DISABLED));
	ret = PyModule_AddObject(m, "HRES_SCHED_S_TASK_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_S_TASK_HAS_NOT_RUN));
	ret = PyModule_AddObject(m, "HRES_SCHED_S_TASK_HAS_NOT_RUN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_S_TASK_NO_MORE_RUNS));
	ret = PyModule_AddObject(m, "HRES_SCHED_S_TASK_NO_MORE_RUNS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_S_TASK_NOT_SCHEDULED));
	ret = PyModule_AddObject(m, "HRES_SCHED_S_TASK_NOT_SCHEDULED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_S_TASK_TERMINATED));
	ret = PyModule_AddObject(m, "HRES_SCHED_S_TASK_TERMINATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_S_TASK_NO_VALID_TRIGGERS));
	ret = PyModule_AddObject(m, "HRES_SCHED_S_TASK_NO_VALID_TRIGGERS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_S_EVENT_TRIGGER));
	ret = PyModule_AddObject(m, "HRES_SCHED_S_EVENT_TRIGGER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_S_SOME_TRIGGERS_FAILED));
	ret = PyModule_AddObject(m, "HRES_SCHED_S_SOME_TRIGGERS_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_S_BATCH_LOGON_PROBLEM));
	ret = PyModule_AddObject(m, "HRES_SCHED_S_BATCH_LOGON_PROBLEM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_S_ASYNC));
	ret = PyModule_AddObject(m, "HRES_XACT_S_ASYNC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_S_READONLY));
	ret = PyModule_AddObject(m, "HRES_XACT_S_READONLY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_S_SOMENORETAIN));
	ret = PyModule_AddObject(m, "HRES_XACT_S_SOMENORETAIN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_S_OKINFORM));
	ret = PyModule_AddObject(m, "HRES_XACT_S_OKINFORM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_S_MADECHANGESCONTENT));
	ret = PyModule_AddObject(m, "HRES_XACT_S_MADECHANGESCONTENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_S_MADECHANGESINFORM));
	ret = PyModule_AddObject(m, "HRES_XACT_S_MADECHANGESINFORM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_S_ALLNORETAIN));
	ret = PyModule_AddObject(m, "HRES_XACT_S_ALLNORETAIN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_S_ABORTING));
	ret = PyModule_AddObject(m, "HRES_XACT_S_ABORTING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_S_SINGLEPHASE));
	ret = PyModule_AddObject(m, "HRES_XACT_S_SINGLEPHASE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_S_LOCALLY_OK));
	ret = PyModule_AddObject(m, "HRES_XACT_S_LOCALLY_OK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_S_LASTRESOURCEMANAGER));
	ret = PyModule_AddObject(m, "HRES_XACT_S_LASTRESOURCEMANAGER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_S_NOTALLINTERFACES));
	ret = PyModule_AddObject(m, "HRES_CO_S_NOTALLINTERFACES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_S_MACHINENAMENOTFOUND));
	ret = PyModule_AddObject(m, "HRES_CO_S_MACHINENAMENOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_I_CONTINUE_NEEDED));
	ret = PyModule_AddObject(m, "HRES_SEC_I_CONTINUE_NEEDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_I_COMPLETE_NEEDED));
	ret = PyModule_AddObject(m, "HRES_SEC_I_COMPLETE_NEEDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_I_COMPLETE_AND_CONTINUE));
	ret = PyModule_AddObject(m, "HRES_SEC_I_COMPLETE_AND_CONTINUE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_I_LOCAL_LOGON));
	ret = PyModule_AddObject(m, "HRES_SEC_I_LOCAL_LOGON", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_I_CONTEXT_EXPIRED));
	ret = PyModule_AddObject(m, "HRES_SEC_I_CONTEXT_EXPIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_I_INCOMPLETE_CREDENTIALS));
	ret = PyModule_AddObject(m, "HRES_SEC_I_INCOMPLETE_CREDENTIALS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_I_RENEGOTIATE));
	ret = PyModule_AddObject(m, "HRES_SEC_I_RENEGOTIATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_I_NO_LSA_CONTEXT));
	ret = PyModule_AddObject(m, "HRES_SEC_I_NO_LSA_CONTEXT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_I_SIGNATURE_NEEDED));
	ret = PyModule_AddObject(m, "HRES_SEC_I_SIGNATURE_NEEDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_I_NEW_PROTECTION_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_CRYPT_I_NEW_PROTECTION_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_CALLPENDING));
	ret = PyModule_AddObject(m, "HRES_NS_S_CALLPENDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_CALLABORTED));
	ret = PyModule_AddObject(m, "HRES_NS_S_CALLABORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_STREAM_TRUNCATED));
	ret = PyModule_AddObject(m, "HRES_NS_S_STREAM_TRUNCATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_REBUFFERING));
	ret = PyModule_AddObject(m, "HRES_NS_S_REBUFFERING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_DEGRADING_QUALITY));
	ret = PyModule_AddObject(m, "HRES_NS_S_DEGRADING_QUALITY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_TRANSCRYPTOR_EOF));
	ret = PyModule_AddObject(m, "HRES_NS_S_TRANSCRYPTOR_EOF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMP_UI_VERSIONMISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMP_UI_VERSIONMISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMP_EXCEPTION));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMP_EXCEPTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMP_LOADED_GIF_IMAGE));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMP_LOADED_GIF_IMAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMP_LOADED_PNG_IMAGE));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMP_LOADED_PNG_IMAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMP_LOADED_BMP_IMAGE));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMP_LOADED_BMP_IMAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMP_LOADED_JPG_IMAGE));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMP_LOADED_JPG_IMAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMG_FORCE_DROP_FRAME));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMG_FORCE_DROP_FRAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMR_ALREADYRENDERED));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMR_ALREADYRENDERED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMR_PINTYPEPARTIALMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMR_PINTYPEPARTIALMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMR_PINTYPEFULLMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMR_PINTYPEFULLMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMG_ADVISE_DROP_FRAME));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMG_ADVISE_DROP_FRAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMG_ADVISE_DROP_TO_KEYFRAME));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMG_ADVISE_DROP_TO_KEYFRAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_NEED_TO_BUY_BURN_RIGHTS));
	ret = PyModule_AddObject(m, "HRES_NS_S_NEED_TO_BUY_BURN_RIGHTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMPCORE_PLAYLISTCLEARABORT));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMPCORE_PLAYLISTCLEARABORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMPCORE_PLAYLISTREMOVEITEMABORT));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMPCORE_PLAYLISTREMOVEITEMABORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMPCORE_PLAYLIST_CREATION_PENDING));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMPCORE_PLAYLIST_CREATION_PENDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMPCORE_MEDIA_VALIDATION_PENDING));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMPCORE_MEDIA_VALIDATION_PENDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMPCORE_PLAYLIST_REPEAT_SECONDARY_SEGMENTS_IGNORED));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMPCORE_PLAYLIST_REPEAT_SECONDARY_SEGMENTS_IGNORED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMPCORE_COMMAND_NOT_AVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMPCORE_COMMAND_NOT_AVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMPCORE_PLAYLIST_NAME_AUTO_GENERATED));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMPCORE_PLAYLIST_NAME_AUTO_GENERATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMPCORE_PLAYLIST_IMPORT_MISSING_ITEMS));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMPCORE_PLAYLIST_IMPORT_MISSING_ITEMS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMPCORE_PLAYLIST_COLLAPSED_TO_SINGLE_MEDIA));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMPCORE_PLAYLIST_COLLAPSED_TO_SINGLE_MEDIA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMPCORE_MEDIA_CHILD_PLAYLIST_OPEN_PENDING));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMPCORE_MEDIA_CHILD_PLAYLIST_OPEN_PENDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMPCORE_MORE_NODES_AVAIABLE));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMPCORE_MORE_NODES_AVAIABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMPBR_SUCCESS));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMPBR_SUCCESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMPBR_PARTIALSUCCESS));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMPBR_PARTIALSUCCESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMPEFFECT_TRANSPARENT));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMPEFFECT_TRANSPARENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_WMPEFFECT_OPAQUE));
	ret = PyModule_AddObject(m, "HRES_NS_S_WMPEFFECT_OPAQUE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_OPERATION_PENDING));
	ret = PyModule_AddObject(m, "HRES_NS_S_OPERATION_PENDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_TRACK_BUY_REQUIRES_ALBUM_PURCHASE));
	ret = PyModule_AddObject(m, "HRES_NS_S_TRACK_BUY_REQUIRES_ALBUM_PURCHASE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_NAVIGATION_COMPLETE_WITH_ERRORS));
	ret = PyModule_AddObject(m, "HRES_NS_S_NAVIGATION_COMPLETE_WITH_ERRORS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_TRACK_ALREADY_DOWNLOADED));
	ret = PyModule_AddObject(m, "HRES_NS_S_TRACK_ALREADY_DOWNLOADED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_PUBLISHING_POINT_STARTED_WITH_FAILED_SINKS));
	ret = PyModule_AddObject(m, "HRES_NS_S_PUBLISHING_POINT_STARTED_WITH_FAILED_SINKS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_DRM_LICENSE_ACQUIRED));
	ret = PyModule_AddObject(m, "HRES_NS_S_DRM_LICENSE_ACQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_DRM_INDIVIDUALIZED));
	ret = PyModule_AddObject(m, "HRES_NS_S_DRM_INDIVIDUALIZED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_DRM_MONITOR_CANCELLED));
	ret = PyModule_AddObject(m, "HRES_NS_S_DRM_MONITOR_CANCELLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_DRM_ACQUIRE_CANCELLED));
	ret = PyModule_AddObject(m, "HRES_NS_S_DRM_ACQUIRE_CANCELLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_DRM_BURNABLE_TRACK));
	ret = PyModule_AddObject(m, "HRES_NS_S_DRM_BURNABLE_TRACK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_DRM_BURNABLE_TRACK_WITH_PLAYLIST_RESTRICTION));
	ret = PyModule_AddObject(m, "HRES_NS_S_DRM_BURNABLE_TRACK_WITH_PLAYLIST_RESTRICTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_DRM_NEEDS_INDIVIDUALIZATION));
	ret = PyModule_AddObject(m, "HRES_NS_S_DRM_NEEDS_INDIVIDUALIZATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_REBOOT_RECOMMENDED));
	ret = PyModule_AddObject(m, "HRES_NS_S_REBOOT_RECOMMENDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_REBOOT_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_NS_S_REBOOT_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_EOSRECEDING));
	ret = PyModule_AddObject(m, "HRES_NS_S_EOSRECEDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_S_CHANGENOTICE));
	ret = PyModule_AddObject(m, "HRES_NS_S_CHANGENOTICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_IO_COMPLETE));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_IO_COMPLETE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MODE_NOT_PINNED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MODE_NOT_PINNED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_NO_PREFERRED_MODE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_NO_PREFERRED_MODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_DATASET_IS_EMPTY));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_DATASET_IS_EMPTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_NO_MORE_ELEMENTS_IN_DATASET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_NO_MORE_ELEMENTS_IN_DATASET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_PINNED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_PINNED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_S_PROPERTY_IGNORED));
	ret = PyModule_AddObject(m, "HRES_PLA_S_PROPERTY_IGNORED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_INDICATION_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_INDICATION_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRK_S_OUT_OF_SYNC));
	ret = PyModule_AddObject(m, "HRES_TRK_S_OUT_OF_SYNC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRK_VOLUME_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_TRK_VOLUME_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRK_VOLUME_NOT_OWNED));
	ret = PyModule_AddObject(m, "HRES_TRK_VOLUME_NOT_OWNED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRK_S_NOTIFICATION_QUOTA_EXCEEDED));
	ret = PyModule_AddObject(m, "HRES_TRK_S_NOTIFICATION_QUOTA_EXCEEDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_TIGER_START));
	ret = PyModule_AddObject(m, "HRES_NS_I_TIGER_START", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_CUB_START));
	ret = PyModule_AddObject(m, "HRES_NS_I_CUB_START", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_CUB_RUNNING));
	ret = PyModule_AddObject(m, "HRES_NS_I_CUB_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_DISK_START));
	ret = PyModule_AddObject(m, "HRES_NS_I_DISK_START", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_DISK_REBUILD_STARTED));
	ret = PyModule_AddObject(m, "HRES_NS_I_DISK_REBUILD_STARTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_DISK_REBUILD_FINISHED));
	ret = PyModule_AddObject(m, "HRES_NS_I_DISK_REBUILD_FINISHED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_DISK_REBUILD_ABORTED));
	ret = PyModule_AddObject(m, "HRES_NS_I_DISK_REBUILD_ABORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_LIMIT_FUNNELS));
	ret = PyModule_AddObject(m, "HRES_NS_I_LIMIT_FUNNELS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_START_DISK));
	ret = PyModule_AddObject(m, "HRES_NS_I_START_DISK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_STOP_DISK));
	ret = PyModule_AddObject(m, "HRES_NS_I_STOP_DISK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_STOP_CUB));
	ret = PyModule_AddObject(m, "HRES_NS_I_STOP_CUB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_KILL_USERSESSION));
	ret = PyModule_AddObject(m, "HRES_NS_I_KILL_USERSESSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_KILL_CONNECTION));
	ret = PyModule_AddObject(m, "HRES_NS_I_KILL_CONNECTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_REBUILD_DISK));
	ret = PyModule_AddObject(m, "HRES_NS_I_REBUILD_DISK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MCMADM_I_NO_EVENTS));
	ret = PyModule_AddObject(m, "HRES_MCMADM_I_NO_EVENTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_LOGGING_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_I_LOGGING_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_LIMIT_BANDWIDTH));
	ret = PyModule_AddObject(m, "HRES_NS_I_LIMIT_BANDWIDTH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_CUB_UNFAIL_LINK));
	ret = PyModule_AddObject(m, "HRES_NS_I_CUB_UNFAIL_LINK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_RESTRIPE_START));
	ret = PyModule_AddObject(m, "HRES_NS_I_RESTRIPE_START", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_RESTRIPE_DONE));
	ret = PyModule_AddObject(m, "HRES_NS_I_RESTRIPE_DONE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_RESTRIPE_DISK_OUT));
	ret = PyModule_AddObject(m, "HRES_NS_I_RESTRIPE_DISK_OUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_RESTRIPE_CUB_OUT));
	ret = PyModule_AddObject(m, "HRES_NS_I_RESTRIPE_CUB_OUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_DISK_STOP));
	ret = PyModule_AddObject(m, "HRES_NS_I_DISK_STOP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_PLAYLIST_CHANGE_RECEDING));
	ret = PyModule_AddObject(m, "HRES_NS_I_PLAYLIST_CHANGE_RECEDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_RECONNECTED));
	ret = PyModule_AddObject(m, "HRES_NS_I_RECONNECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_NOLOG_STOP));
	ret = PyModule_AddObject(m, "HRES_NS_I_NOLOG_STOP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_EXISTING_PACKETIZER));
	ret = PyModule_AddObject(m, "HRES_NS_I_EXISTING_PACKETIZER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_MANUAL_PROXY));
	ret = PyModule_AddObject(m, "HRES_NS_I_MANUAL_PROXY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_DRIVER_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_DRIVER_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_UNKNOWN_CHILD_STATUS));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_UNKNOWN_CHILD_STATUS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_LEADLINK_START_DEFERRED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_LEADLINK_START_DEFERRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_POLLING_TOO_FREQUENTLY));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_POLLING_TOO_FREQUENTLY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_START_DEFERRED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_START_DEFERRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_E_PENDING));
	ret = PyModule_AddObject(m, "HRES_E_PENDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_E_NOTIMPL));
	ret = PyModule_AddObject(m, "HRES_E_NOTIMPL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_E_NOINTERFACE));
	ret = PyModule_AddObject(m, "HRES_E_NOINTERFACE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_E_POINTER));
	ret = PyModule_AddObject(m, "HRES_E_POINTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_E_ABORT));
	ret = PyModule_AddObject(m, "HRES_E_ABORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_E_FAIL));
	ret = PyModule_AddObject(m, "HRES_E_FAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INIT_TLS));
	ret = PyModule_AddObject(m, "HRES_CO_E_INIT_TLS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INIT_SHARED_ALLOCATOR));
	ret = PyModule_AddObject(m, "HRES_CO_E_INIT_SHARED_ALLOCATOR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INIT_MEMORY_ALLOCATOR));
	ret = PyModule_AddObject(m, "HRES_CO_E_INIT_MEMORY_ALLOCATOR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INIT_CLASS_CACHE));
	ret = PyModule_AddObject(m, "HRES_CO_E_INIT_CLASS_CACHE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INIT_RPC_CHANNEL));
	ret = PyModule_AddObject(m, "HRES_CO_E_INIT_RPC_CHANNEL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INIT_TLS_SET_CHANNEL_CONTROL));
	ret = PyModule_AddObject(m, "HRES_CO_E_INIT_TLS_SET_CHANNEL_CONTROL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INIT_TLS_CHANNEL_CONTROL));
	ret = PyModule_AddObject(m, "HRES_CO_E_INIT_TLS_CHANNEL_CONTROL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INIT_UNACCEPTED_USER_ALLOCATOR));
	ret = PyModule_AddObject(m, "HRES_CO_E_INIT_UNACCEPTED_USER_ALLOCATOR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INIT_SCM_MUTEX_EXISTS));
	ret = PyModule_AddObject(m, "HRES_CO_E_INIT_SCM_MUTEX_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INIT_SCM_FILE_MAPPING_EXISTS));
	ret = PyModule_AddObject(m, "HRES_CO_E_INIT_SCM_FILE_MAPPING_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INIT_SCM_MAP_VIEW_OF_FILE));
	ret = PyModule_AddObject(m, "HRES_CO_E_INIT_SCM_MAP_VIEW_OF_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INIT_SCM_EXEC_FAILURE));
	ret = PyModule_AddObject(m, "HRES_CO_E_INIT_SCM_EXEC_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INIT_ONLY_SINGLE_THREADED));
	ret = PyModule_AddObject(m, "HRES_CO_E_INIT_ONLY_SINGLE_THREADED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_CANT_REMOTE));
	ret = PyModule_AddObject(m, "HRES_CO_E_CANT_REMOTE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_BAD_SERVER_NAME));
	ret = PyModule_AddObject(m, "HRES_CO_E_BAD_SERVER_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_WRONG_SERVER_IDENTITY));
	ret = PyModule_AddObject(m, "HRES_CO_E_WRONG_SERVER_IDENTITY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_OLE1DDE_DISABLED));
	ret = PyModule_AddObject(m, "HRES_CO_E_OLE1DDE_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_RUNAS_SYNTAX));
	ret = PyModule_AddObject(m, "HRES_CO_E_RUNAS_SYNTAX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_CREATEPROCESS_FAILURE));
	ret = PyModule_AddObject(m, "HRES_CO_E_CREATEPROCESS_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_RUNAS_CREATEPROCESS_FAILURE));
	ret = PyModule_AddObject(m, "HRES_CO_E_RUNAS_CREATEPROCESS_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_RUNAS_LOGON_FAILURE));
	ret = PyModule_AddObject(m, "HRES_CO_E_RUNAS_LOGON_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_LAUNCH_PERMSSION_DENIED));
	ret = PyModule_AddObject(m, "HRES_CO_E_LAUNCH_PERMSSION_DENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_START_SERVICE_FAILURE));
	ret = PyModule_AddObject(m, "HRES_CO_E_START_SERVICE_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_REMOTE_COMMUNICATION_FAILURE));
	ret = PyModule_AddObject(m, "HRES_CO_E_REMOTE_COMMUNICATION_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_SERVER_START_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_CO_E_SERVER_START_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_CLSREG_INCONSISTENT));
	ret = PyModule_AddObject(m, "HRES_CO_E_CLSREG_INCONSISTENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_IIDREG_INCONSISTENT));
	ret = PyModule_AddObject(m, "HRES_CO_E_IIDREG_INCONSISTENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_CO_E_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_RELOAD_DLL));
	ret = PyModule_AddObject(m, "HRES_CO_E_RELOAD_DLL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_MSI_ERROR));
	ret = PyModule_AddObject(m, "HRES_CO_E_MSI_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_ATTEMPT_TO_CREATE_OUTSIDE_CLIENT_CONTEXT));
	ret = PyModule_AddObject(m, "HRES_CO_E_ATTEMPT_TO_CREATE_OUTSIDE_CLIENT_CONTEXT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_SERVER_PAUSED));
	ret = PyModule_AddObject(m, "HRES_CO_E_SERVER_PAUSED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_SERVER_NOT_PAUSED));
	ret = PyModule_AddObject(m, "HRES_CO_E_SERVER_NOT_PAUSED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_CLASS_DISABLED));
	ret = PyModule_AddObject(m, "HRES_CO_E_CLASS_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_CLRNOTAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_CO_E_CLRNOTAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_ASYNC_WORK_REJECTED));
	ret = PyModule_AddObject(m, "HRES_CO_E_ASYNC_WORK_REJECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_SERVER_INIT_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_CO_E_SERVER_INIT_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_NO_SECCTX_IN_ACTIVATE));
	ret = PyModule_AddObject(m, "HRES_CO_E_NO_SECCTX_IN_ACTIVATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_TRACKER_CONFIG));
	ret = PyModule_AddObject(m, "HRES_CO_E_TRACKER_CONFIG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_THREADPOOL_CONFIG));
	ret = PyModule_AddObject(m, "HRES_CO_E_THREADPOOL_CONFIG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_SXS_CONFIG));
	ret = PyModule_AddObject(m, "HRES_CO_E_SXS_CONFIG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_MALFORMED_SPN));
	ret = PyModule_AddObject(m, "HRES_CO_E_MALFORMED_SPN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_E_UNEXPECTED));
	ret = PyModule_AddObject(m, "HRES_E_UNEXPECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_CALL_REJECTED));
	ret = PyModule_AddObject(m, "HRES_RPC_E_CALL_REJECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_CALL_CANCELED));
	ret = PyModule_AddObject(m, "HRES_RPC_E_CALL_CANCELED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_CANTPOST_INSENDCALL));
	ret = PyModule_AddObject(m, "HRES_RPC_E_CANTPOST_INSENDCALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_CANTCALLOUT_INASYNCCALL));
	ret = PyModule_AddObject(m, "HRES_RPC_E_CANTCALLOUT_INASYNCCALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_CANTCALLOUT_INEXTERNALCALL));
	ret = PyModule_AddObject(m, "HRES_RPC_E_CANTCALLOUT_INEXTERNALCALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_CONNECTION_TERMINATED));
	ret = PyModule_AddObject(m, "HRES_RPC_E_CONNECTION_TERMINATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_SERVER_DIED));
	ret = PyModule_AddObject(m, "HRES_RPC_E_SERVER_DIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_CLIENT_DIED));
	ret = PyModule_AddObject(m, "HRES_RPC_E_CLIENT_DIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_INVALID_DATAPACKET));
	ret = PyModule_AddObject(m, "HRES_RPC_E_INVALID_DATAPACKET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_CANTTRANSMIT_CALL));
	ret = PyModule_AddObject(m, "HRES_RPC_E_CANTTRANSMIT_CALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_CLIENT_CANTMARSHAL_DATA));
	ret = PyModule_AddObject(m, "HRES_RPC_E_CLIENT_CANTMARSHAL_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_CLIENT_CANTUNMARSHAL_DATA));
	ret = PyModule_AddObject(m, "HRES_RPC_E_CLIENT_CANTUNMARSHAL_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_SERVER_CANTMARSHAL_DATA));
	ret = PyModule_AddObject(m, "HRES_RPC_E_SERVER_CANTMARSHAL_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_SERVER_CANTUNMARSHAL_DATA));
	ret = PyModule_AddObject(m, "HRES_RPC_E_SERVER_CANTUNMARSHAL_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_INVALID_DATA));
	ret = PyModule_AddObject(m, "HRES_RPC_E_INVALID_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_INVALID_PARAMETER));
	ret = PyModule_AddObject(m, "HRES_RPC_E_INVALID_PARAMETER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_CANTCALLOUT_AGAIN));
	ret = PyModule_AddObject(m, "HRES_RPC_E_CANTCALLOUT_AGAIN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_SERVER_DIED_DNE));
	ret = PyModule_AddObject(m, "HRES_RPC_E_SERVER_DIED_DNE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_SYS_CALL_FAILED));
	ret = PyModule_AddObject(m, "HRES_RPC_E_SYS_CALL_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_OUT_OF_RESOURCES));
	ret = PyModule_AddObject(m, "HRES_RPC_E_OUT_OF_RESOURCES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_ATTEMPTED_MULTITHREAD));
	ret = PyModule_AddObject(m, "HRES_RPC_E_ATTEMPTED_MULTITHREAD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_NOT_REGISTERED));
	ret = PyModule_AddObject(m, "HRES_RPC_E_NOT_REGISTERED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_FAULT));
	ret = PyModule_AddObject(m, "HRES_RPC_E_FAULT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_SERVERFAULT));
	ret = PyModule_AddObject(m, "HRES_RPC_E_SERVERFAULT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_CHANGED_MODE));
	ret = PyModule_AddObject(m, "HRES_RPC_E_CHANGED_MODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_INVALIDMETHOD));
	ret = PyModule_AddObject(m, "HRES_RPC_E_INVALIDMETHOD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_DISCONNECTED));
	ret = PyModule_AddObject(m, "HRES_RPC_E_DISCONNECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_RETRY));
	ret = PyModule_AddObject(m, "HRES_RPC_E_RETRY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_SERVERCALL_RETRYLATER));
	ret = PyModule_AddObject(m, "HRES_RPC_E_SERVERCALL_RETRYLATER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_SERVERCALL_REJECTED));
	ret = PyModule_AddObject(m, "HRES_RPC_E_SERVERCALL_REJECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_INVALID_CALLDATA));
	ret = PyModule_AddObject(m, "HRES_RPC_E_INVALID_CALLDATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_CANTCALLOUT_ININPUTSYNCCALL));
	ret = PyModule_AddObject(m, "HRES_RPC_E_CANTCALLOUT_ININPUTSYNCCALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_WRONG_THREAD));
	ret = PyModule_AddObject(m, "HRES_RPC_E_WRONG_THREAD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_THREAD_NOT_INIT));
	ret = PyModule_AddObject(m, "HRES_RPC_E_THREAD_NOT_INIT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_VERSION_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_RPC_E_VERSION_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_INVALID_HEADER));
	ret = PyModule_AddObject(m, "HRES_RPC_E_INVALID_HEADER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_INVALID_EXTENSION));
	ret = PyModule_AddObject(m, "HRES_RPC_E_INVALID_EXTENSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_INVALID_IPID));
	ret = PyModule_AddObject(m, "HRES_RPC_E_INVALID_IPID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_INVALID_OBJECT));
	ret = PyModule_AddObject(m, "HRES_RPC_E_INVALID_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_S_CALLPENDING));
	ret = PyModule_AddObject(m, "HRES_RPC_S_CALLPENDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_S_WAITONTIMER));
	ret = PyModule_AddObject(m, "HRES_RPC_S_WAITONTIMER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_CALL_COMPLETE));
	ret = PyModule_AddObject(m, "HRES_RPC_E_CALL_COMPLETE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_UNSECURE_CALL));
	ret = PyModule_AddObject(m, "HRES_RPC_E_UNSECURE_CALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_TOO_LATE));
	ret = PyModule_AddObject(m, "HRES_RPC_E_TOO_LATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_NO_GOOD_SECURITY_PACKAGES));
	ret = PyModule_AddObject(m, "HRES_RPC_E_NO_GOOD_SECURITY_PACKAGES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_ACCESS_DENIED));
	ret = PyModule_AddObject(m, "HRES_RPC_E_ACCESS_DENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_REMOTE_DISABLED));
	ret = PyModule_AddObject(m, "HRES_RPC_E_REMOTE_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_INVALID_OBJREF));
	ret = PyModule_AddObject(m, "HRES_RPC_E_INVALID_OBJREF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_NO_CONTEXT));
	ret = PyModule_AddObject(m, "HRES_RPC_E_NO_CONTEXT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_RPC_E_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_NO_SYNC));
	ret = PyModule_AddObject(m, "HRES_RPC_E_NO_SYNC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_FULLSIC_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_RPC_E_FULLSIC_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_INVALID_STD_NAME));
	ret = PyModule_AddObject(m, "HRES_RPC_E_INVALID_STD_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_FAILEDTOIMPERSONATE));
	ret = PyModule_AddObject(m, "HRES_CO_E_FAILEDTOIMPERSONATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_FAILEDTOGETSECCTX));
	ret = PyModule_AddObject(m, "HRES_CO_E_FAILEDTOGETSECCTX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_FAILEDTOOPENTHREADTOKEN));
	ret = PyModule_AddObject(m, "HRES_CO_E_FAILEDTOOPENTHREADTOKEN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_FAILEDTOGETTOKENINFO));
	ret = PyModule_AddObject(m, "HRES_CO_E_FAILEDTOGETTOKENINFO", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_TRUSTEEDOESNTMATCHCLIENT));
	ret = PyModule_AddObject(m, "HRES_CO_E_TRUSTEEDOESNTMATCHCLIENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_FAILEDTOQUERYCLIENTBLANKET));
	ret = PyModule_AddObject(m, "HRES_CO_E_FAILEDTOQUERYCLIENTBLANKET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_FAILEDTOSETDACL));
	ret = PyModule_AddObject(m, "HRES_CO_E_FAILEDTOSETDACL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_ACCESSCHECKFAILED));
	ret = PyModule_AddObject(m, "HRES_CO_E_ACCESSCHECKFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_NETACCESSAPIFAILED));
	ret = PyModule_AddObject(m, "HRES_CO_E_NETACCESSAPIFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_WRONGTRUSTEENAMESYNTAX));
	ret = PyModule_AddObject(m, "HRES_CO_E_WRONGTRUSTEENAMESYNTAX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INVALIDSID));
	ret = PyModule_AddObject(m, "HRES_CO_E_INVALIDSID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_CONVERSIONFAILED));
	ret = PyModule_AddObject(m, "HRES_CO_E_CONVERSIONFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_NOMATCHINGSIDFOUND));
	ret = PyModule_AddObject(m, "HRES_CO_E_NOMATCHINGSIDFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_LOOKUPACCSIDFAILED));
	ret = PyModule_AddObject(m, "HRES_CO_E_LOOKUPACCSIDFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_NOMATCHINGNAMEFOUND));
	ret = PyModule_AddObject(m, "HRES_CO_E_NOMATCHINGNAMEFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_LOOKUPACCNAMEFAILED));
	ret = PyModule_AddObject(m, "HRES_CO_E_LOOKUPACCNAMEFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_SETSERLHNDLFAILED));
	ret = PyModule_AddObject(m, "HRES_CO_E_SETSERLHNDLFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_FAILEDTOGETWINDIR));
	ret = PyModule_AddObject(m, "HRES_CO_E_FAILEDTOGETWINDIR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_PATHTOOLONG));
	ret = PyModule_AddObject(m, "HRES_CO_E_PATHTOOLONG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_FAILEDTOGENUUID));
	ret = PyModule_AddObject(m, "HRES_CO_E_FAILEDTOGENUUID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_FAILEDTOCREATEFILE));
	ret = PyModule_AddObject(m, "HRES_CO_E_FAILEDTOCREATEFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_FAILEDTOCLOSEHANDLE));
	ret = PyModule_AddObject(m, "HRES_CO_E_FAILEDTOCLOSEHANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_EXCEEDSYSACLLIMIT));
	ret = PyModule_AddObject(m, "HRES_CO_E_EXCEEDSYSACLLIMIT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_ACESINWRONGORDER));
	ret = PyModule_AddObject(m, "HRES_CO_E_ACESINWRONGORDER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INCOMPATIBLESTREAMVERSION));
	ret = PyModule_AddObject(m, "HRES_CO_E_INCOMPATIBLESTREAMVERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_FAILEDTOOPENPROCESSTOKEN));
	ret = PyModule_AddObject(m, "HRES_CO_E_FAILEDTOOPENPROCESSTOKEN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_DECODEFAILED));
	ret = PyModule_AddObject(m, "HRES_CO_E_DECODEFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_ACNOTINITIALIZED));
	ret = PyModule_AddObject(m, "HRES_CO_E_ACNOTINITIALIZED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_CANCEL_DISABLED));
	ret = PyModule_AddObject(m, "HRES_CO_E_CANCEL_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_RPC_E_UNEXPECTED));
	ret = PyModule_AddObject(m, "HRES_RPC_E_UNEXPECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_UNKNOWNINTERFACE));
	ret = PyModule_AddObject(m, "HRES_DISP_E_UNKNOWNINTERFACE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_MEMBERNOTFOUND));
	ret = PyModule_AddObject(m, "HRES_DISP_E_MEMBERNOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_PARAMNOTFOUND));
	ret = PyModule_AddObject(m, "HRES_DISP_E_PARAMNOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_TYPEMISMATCH));
	ret = PyModule_AddObject(m, "HRES_DISP_E_TYPEMISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_UNKNOWNNAME));
	ret = PyModule_AddObject(m, "HRES_DISP_E_UNKNOWNNAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_NONAMEDARGS));
	ret = PyModule_AddObject(m, "HRES_DISP_E_NONAMEDARGS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_BADVARTYPE));
	ret = PyModule_AddObject(m, "HRES_DISP_E_BADVARTYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_EXCEPTION));
	ret = PyModule_AddObject(m, "HRES_DISP_E_EXCEPTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_OVERFLOW));
	ret = PyModule_AddObject(m, "HRES_DISP_E_OVERFLOW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_BADINDEX));
	ret = PyModule_AddObject(m, "HRES_DISP_E_BADINDEX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_UNKNOWNLCID));
	ret = PyModule_AddObject(m, "HRES_DISP_E_UNKNOWNLCID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_ARRAYISLOCKED));
	ret = PyModule_AddObject(m, "HRES_DISP_E_ARRAYISLOCKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_BADPARAMCOUNT));
	ret = PyModule_AddObject(m, "HRES_DISP_E_BADPARAMCOUNT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_PARAMNOTOPTIONAL));
	ret = PyModule_AddObject(m, "HRES_DISP_E_PARAMNOTOPTIONAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_BADCALLEE));
	ret = PyModule_AddObject(m, "HRES_DISP_E_BADCALLEE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_NOTACOLLECTION));
	ret = PyModule_AddObject(m, "HRES_DISP_E_NOTACOLLECTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_DIVBYZERO));
	ret = PyModule_AddObject(m, "HRES_DISP_E_DIVBYZERO", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DISP_E_BUFFERTOOSMALL));
	ret = PyModule_AddObject(m, "HRES_DISP_E_BUFFERTOOSMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_BUFFERTOOSMALL));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_BUFFERTOOSMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_FIELDNOTFOUND));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_FIELDNOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_INVDATAREAD));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_INVDATAREAD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_UNSUPFORMAT));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_UNSUPFORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_REGISTRYACCESS));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_REGISTRYACCESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_LIBNOTREGISTERED));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_LIBNOTREGISTERED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_UNDEFINEDTYPE));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_UNDEFINEDTYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_QUALIFIEDNAMEDISALLOWED));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_QUALIFIEDNAMEDISALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_INVALIDSTATE));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_INVALIDSTATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_WRONGTYPEKIND));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_WRONGTYPEKIND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_ELEMENTNOTFOUND));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_ELEMENTNOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_AMBIGUOUSNAME));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_AMBIGUOUSNAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_NAMECONFLICT));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_NAMECONFLICT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_UNKNOWNLCID));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_UNKNOWNLCID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_DLLFUNCTIONNOTFOUND));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_DLLFUNCTIONNOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_BADMODULEKIND));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_BADMODULEKIND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_SIZETOOBIG));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_SIZETOOBIG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_DUPLICATEID));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_DUPLICATEID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_INVALIDID));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_INVALIDID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_TYPEMISMATCH));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_TYPEMISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_OUTOFBOUNDS));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_OUTOFBOUNDS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_IOERROR));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_IOERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_CANTCREATETMPFILE));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_CANTCREATETMPFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_CANTLOADLIBRARY));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_CANTLOADLIBRARY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_INCONSISTENTPROPFUNCS));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_INCONSISTENTPROPFUNCS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TYPE_E_CIRCULARTYPE));
	ret = PyModule_AddObject(m, "HRES_TYPE_E_CIRCULARTYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_INVALIDFUNCTION));
	ret = PyModule_AddObject(m, "HRES_STG_E_INVALIDFUNCTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_FILENOTFOUND));
	ret = PyModule_AddObject(m, "HRES_STG_E_FILENOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_PATHNOTFOUND));
	ret = PyModule_AddObject(m, "HRES_STG_E_PATHNOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_TOOMANYOPENFILES));
	ret = PyModule_AddObject(m, "HRES_STG_E_TOOMANYOPENFILES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_ACCESSDENIED));
	ret = PyModule_AddObject(m, "HRES_STG_E_ACCESSDENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_INVALIDHANDLE));
	ret = PyModule_AddObject(m, "HRES_STG_E_INVALIDHANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_INSUFFICIENTMEMORY));
	ret = PyModule_AddObject(m, "HRES_STG_E_INSUFFICIENTMEMORY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_INVALIDPOINTER));
	ret = PyModule_AddObject(m, "HRES_STG_E_INVALIDPOINTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_NOMOREFILES));
	ret = PyModule_AddObject(m, "HRES_STG_E_NOMOREFILES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_DISKISWRITEPROTECTED));
	ret = PyModule_AddObject(m, "HRES_STG_E_DISKISWRITEPROTECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_SEEKERROR));
	ret = PyModule_AddObject(m, "HRES_STG_E_SEEKERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_WRITEFAULT));
	ret = PyModule_AddObject(m, "HRES_STG_E_WRITEFAULT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_READFAULT));
	ret = PyModule_AddObject(m, "HRES_STG_E_READFAULT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_SHAREVIOLATION));
	ret = PyModule_AddObject(m, "HRES_STG_E_SHAREVIOLATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_LOCKVIOLATION));
	ret = PyModule_AddObject(m, "HRES_STG_E_LOCKVIOLATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_FILEALREADYEXISTS));
	ret = PyModule_AddObject(m, "HRES_STG_E_FILEALREADYEXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_INVALIDPARAMETER));
	ret = PyModule_AddObject(m, "HRES_STG_E_INVALIDPARAMETER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_MEDIUMFULL));
	ret = PyModule_AddObject(m, "HRES_STG_E_MEDIUMFULL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_PROPSETMISMATCHED));
	ret = PyModule_AddObject(m, "HRES_STG_E_PROPSETMISMATCHED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_ABNORMALAPIEXIT));
	ret = PyModule_AddObject(m, "HRES_STG_E_ABNORMALAPIEXIT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_INVALIDHEADER));
	ret = PyModule_AddObject(m, "HRES_STG_E_INVALIDHEADER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_INVALIDNAME));
	ret = PyModule_AddObject(m, "HRES_STG_E_INVALIDNAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_UNKNOWN));
	ret = PyModule_AddObject(m, "HRES_STG_E_UNKNOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_UNIMPLEMENTEDFUNCTION));
	ret = PyModule_AddObject(m, "HRES_STG_E_UNIMPLEMENTEDFUNCTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_INVALIDFLAG));
	ret = PyModule_AddObject(m, "HRES_STG_E_INVALIDFLAG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_INUSE));
	ret = PyModule_AddObject(m, "HRES_STG_E_INUSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_NOTCURRENT));
	ret = PyModule_AddObject(m, "HRES_STG_E_NOTCURRENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_REVERTED));
	ret = PyModule_AddObject(m, "HRES_STG_E_REVERTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_CANTSAVE));
	ret = PyModule_AddObject(m, "HRES_STG_E_CANTSAVE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_OLDFORMAT));
	ret = PyModule_AddObject(m, "HRES_STG_E_OLDFORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_OLDDLL));
	ret = PyModule_AddObject(m, "HRES_STG_E_OLDDLL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_SHAREREQUIRED));
	ret = PyModule_AddObject(m, "HRES_STG_E_SHAREREQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_NOTFILEBASEDSTORAGE));
	ret = PyModule_AddObject(m, "HRES_STG_E_NOTFILEBASEDSTORAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_EXTANTMARSHALLINGS));
	ret = PyModule_AddObject(m, "HRES_STG_E_EXTANTMARSHALLINGS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_DOCFILECORRUPT));
	ret = PyModule_AddObject(m, "HRES_STG_E_DOCFILECORRUPT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_BADBASEADDRESS));
	ret = PyModule_AddObject(m, "HRES_STG_E_BADBASEADDRESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_DOCFILETOOLARGE));
	ret = PyModule_AddObject(m, "HRES_STG_E_DOCFILETOOLARGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_NOTSIMPLEFORMAT));
	ret = PyModule_AddObject(m, "HRES_STG_E_NOTSIMPLEFORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_INCOMPLETE));
	ret = PyModule_AddObject(m, "HRES_STG_E_INCOMPLETE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_TERMINATED));
	ret = PyModule_AddObject(m, "HRES_STG_E_TERMINATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_STATUS_COPY_PROTECTION_FAILURE));
	ret = PyModule_AddObject(m, "HRES_STG_E_STATUS_COPY_PROTECTION_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_CSS_AUTHENTICATION_FAILURE));
	ret = PyModule_AddObject(m, "HRES_STG_E_CSS_AUTHENTICATION_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_CSS_KEY_NOT_PRESENT));
	ret = PyModule_AddObject(m, "HRES_STG_E_CSS_KEY_NOT_PRESENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_CSS_KEY_NOT_ESTABLISHED));
	ret = PyModule_AddObject(m, "HRES_STG_E_CSS_KEY_NOT_ESTABLISHED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_CSS_SCRAMBLED_SECTOR));
	ret = PyModule_AddObject(m, "HRES_STG_E_CSS_SCRAMBLED_SECTOR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_CSS_REGION_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_STG_E_CSS_REGION_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_STG_E_RESETS_EXHAUSTED));
	ret = PyModule_AddObject(m, "HRES_STG_E_RESETS_EXHAUSTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_OLEVERB));
	ret = PyModule_AddObject(m, "HRES_OLE_E_OLEVERB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_ADVF));
	ret = PyModule_AddObject(m, "HRES_OLE_E_ADVF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_ENUM_NOMORE));
	ret = PyModule_AddObject(m, "HRES_OLE_E_ENUM_NOMORE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_ADVISENOTSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_OLE_E_ADVISENOTSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_NOCONNECTION));
	ret = PyModule_AddObject(m, "HRES_OLE_E_NOCONNECTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_NOTRUNNING));
	ret = PyModule_AddObject(m, "HRES_OLE_E_NOTRUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_NOCACHE));
	ret = PyModule_AddObject(m, "HRES_OLE_E_NOCACHE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_BLANK));
	ret = PyModule_AddObject(m, "HRES_OLE_E_BLANK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_CLASSDIFF));
	ret = PyModule_AddObject(m, "HRES_OLE_E_CLASSDIFF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_CANT_GETMONIKER));
	ret = PyModule_AddObject(m, "HRES_OLE_E_CANT_GETMONIKER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_CANT_BINDTOSOURCE));
	ret = PyModule_AddObject(m, "HRES_OLE_E_CANT_BINDTOSOURCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_STATIC));
	ret = PyModule_AddObject(m, "HRES_OLE_E_STATIC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_PROMPTSAVECANCELLED));
	ret = PyModule_AddObject(m, "HRES_OLE_E_PROMPTSAVECANCELLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_INVALIDRECT));
	ret = PyModule_AddObject(m, "HRES_OLE_E_INVALIDRECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_WRONGCOMPOBJ));
	ret = PyModule_AddObject(m, "HRES_OLE_E_WRONGCOMPOBJ", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_INVALIDHWND));
	ret = PyModule_AddObject(m, "HRES_OLE_E_INVALIDHWND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_NOT_INPLACEACTIVE));
	ret = PyModule_AddObject(m, "HRES_OLE_E_NOT_INPLACEACTIVE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_CANTCONVERT));
	ret = PyModule_AddObject(m, "HRES_OLE_E_CANTCONVERT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLE_E_NOSTORAGE));
	ret = PyModule_AddObject(m, "HRES_OLE_E_NOSTORAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DV_E_FORMATETC));
	ret = PyModule_AddObject(m, "HRES_DV_E_FORMATETC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DV_E_DVTARGETDEVICE));
	ret = PyModule_AddObject(m, "HRES_DV_E_DVTARGETDEVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DV_E_STGMEDIUM));
	ret = PyModule_AddObject(m, "HRES_DV_E_STGMEDIUM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DV_E_STATDATA));
	ret = PyModule_AddObject(m, "HRES_DV_E_STATDATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DV_E_LINDEX));
	ret = PyModule_AddObject(m, "HRES_DV_E_LINDEX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DV_E_TYMED));
	ret = PyModule_AddObject(m, "HRES_DV_E_TYMED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DV_E_CLIPFORMAT));
	ret = PyModule_AddObject(m, "HRES_DV_E_CLIPFORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DV_E_DVASPECT));
	ret = PyModule_AddObject(m, "HRES_DV_E_DVASPECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DV_E_DVTARGETDEVICE_SIZE));
	ret = PyModule_AddObject(m, "HRES_DV_E_DVTARGETDEVICE_SIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DV_E_NOIVIEWOBJECT));
	ret = PyModule_AddObject(m, "HRES_DV_E_NOIVIEWOBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DRAGDROP_E_NOTREGISTERED));
	ret = PyModule_AddObject(m, "HRES_DRAGDROP_E_NOTREGISTERED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DRAGDROP_E_ALREADYREGISTERED));
	ret = PyModule_AddObject(m, "HRES_DRAGDROP_E_ALREADYREGISTERED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DRAGDROP_E_INVALIDHWND));
	ret = PyModule_AddObject(m, "HRES_DRAGDROP_E_INVALIDHWND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CLASS_E_NOAGGREGATION));
	ret = PyModule_AddObject(m, "HRES_CLASS_E_NOAGGREGATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CLASS_E_CLASSNOTAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_CLASS_E_CLASSNOTAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CLASS_E_NOTLICENSED));
	ret = PyModule_AddObject(m, "HRES_CLASS_E_NOTLICENSED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_VIEW_E_DRAW));
	ret = PyModule_AddObject(m, "HRES_VIEW_E_DRAW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_REGDB_E_READREGDB));
	ret = PyModule_AddObject(m, "HRES_REGDB_E_READREGDB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_REGDB_E_WRITEREGDB));
	ret = PyModule_AddObject(m, "HRES_REGDB_E_WRITEREGDB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_REGDB_E_KEYMISSING));
	ret = PyModule_AddObject(m, "HRES_REGDB_E_KEYMISSING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_REGDB_E_INVALIDVALUE));
	ret = PyModule_AddObject(m, "HRES_REGDB_E_INVALIDVALUE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_REGDB_E_CLASSNOTREG));
	ret = PyModule_AddObject(m, "HRES_REGDB_E_CLASSNOTREG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_REGDB_E_IIDNOTREG));
	ret = PyModule_AddObject(m, "HRES_REGDB_E_IIDNOTREG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_REGDB_E_BADTHREADINGMODEL));
	ret = PyModule_AddObject(m, "HRES_REGDB_E_BADTHREADINGMODEL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CAT_E_CATIDNOEXIST));
	ret = PyModule_AddObject(m, "HRES_CAT_E_CATIDNOEXIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CAT_E_NODESCRIPTION));
	ret = PyModule_AddObject(m, "HRES_CAT_E_NODESCRIPTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CS_E_PACKAGE_NOTFOUND));
	ret = PyModule_AddObject(m, "HRES_CS_E_PACKAGE_NOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CS_E_NOT_DELETABLE));
	ret = PyModule_AddObject(m, "HRES_CS_E_NOT_DELETABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CS_E_CLASS_NOTFOUND));
	ret = PyModule_AddObject(m, "HRES_CS_E_CLASS_NOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CS_E_INVALID_VERSION));
	ret = PyModule_AddObject(m, "HRES_CS_E_INVALID_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CS_E_NO_CLASSSTORE));
	ret = PyModule_AddObject(m, "HRES_CS_E_NO_CLASSSTORE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CS_E_OBJECT_NOTFOUND));
	ret = PyModule_AddObject(m, "HRES_CS_E_OBJECT_NOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CS_E_OBJECT_ALREADY_EXISTS));
	ret = PyModule_AddObject(m, "HRES_CS_E_OBJECT_ALREADY_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CS_E_INVALID_PATH));
	ret = PyModule_AddObject(m, "HRES_CS_E_INVALID_PATH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CS_E_NETWORK_ERROR));
	ret = PyModule_AddObject(m, "HRES_CS_E_NETWORK_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CS_E_ADMIN_LIMIT_EXCEEDED));
	ret = PyModule_AddObject(m, "HRES_CS_E_ADMIN_LIMIT_EXCEEDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CS_E_SCHEMA_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_CS_E_SCHEMA_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CS_E_INTERNAL_ERROR));
	ret = PyModule_AddObject(m, "HRES_CS_E_INTERNAL_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CACHE_E_NOCACHE_UPDATED));
	ret = PyModule_AddObject(m, "HRES_CACHE_E_NOCACHE_UPDATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLEOBJ_E_NOVERBS));
	ret = PyModule_AddObject(m, "HRES_OLEOBJ_E_NOVERBS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OLEOBJ_E_INVALIDVERB));
	ret = PyModule_AddObject(m, "HRES_OLEOBJ_E_INVALIDVERB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_INPLACE_E_NOTUNDOABLE));
	ret = PyModule_AddObject(m, "HRES_INPLACE_E_NOTUNDOABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_INPLACE_E_NOTOOLSPACE));
	ret = PyModule_AddObject(m, "HRES_INPLACE_E_NOTOOLSPACE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONVERT10_E_OLESTREAM_GET));
	ret = PyModule_AddObject(m, "HRES_CONVERT10_E_OLESTREAM_GET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONVERT10_E_OLESTREAM_PUT));
	ret = PyModule_AddObject(m, "HRES_CONVERT10_E_OLESTREAM_PUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONVERT10_E_OLESTREAM_FMT));
	ret = PyModule_AddObject(m, "HRES_CONVERT10_E_OLESTREAM_FMT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONVERT10_E_OLESTREAM_BITMAP_TO_DIB));
	ret = PyModule_AddObject(m, "HRES_CONVERT10_E_OLESTREAM_BITMAP_TO_DIB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONVERT10_E_STG_FMT));
	ret = PyModule_AddObject(m, "HRES_CONVERT10_E_STG_FMT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONVERT10_E_STG_NO_STD_STREAM));
	ret = PyModule_AddObject(m, "HRES_CONVERT10_E_STG_NO_STD_STREAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONVERT10_E_STG_DIB_TO_BITMAP));
	ret = PyModule_AddObject(m, "HRES_CONVERT10_E_STG_DIB_TO_BITMAP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CLIPBRD_E_CANT_OPEN));
	ret = PyModule_AddObject(m, "HRES_CLIPBRD_E_CANT_OPEN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CLIPBRD_E_CANT_EMPTY));
	ret = PyModule_AddObject(m, "HRES_CLIPBRD_E_CANT_EMPTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CLIPBRD_E_CANT_SET));
	ret = PyModule_AddObject(m, "HRES_CLIPBRD_E_CANT_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CLIPBRD_E_BAD_DATA));
	ret = PyModule_AddObject(m, "HRES_CLIPBRD_E_BAD_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CLIPBRD_E_CANT_CLOSE));
	ret = PyModule_AddObject(m, "HRES_CLIPBRD_E_CANT_CLOSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_CONNECTMANUALLY));
	ret = PyModule_AddObject(m, "HRES_MK_E_CONNECTMANUALLY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_EXCEEDEDDEADLINE));
	ret = PyModule_AddObject(m, "HRES_MK_E_EXCEEDEDDEADLINE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_NEEDGENERIC));
	ret = PyModule_AddObject(m, "HRES_MK_E_NEEDGENERIC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_MK_E_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_SYNTAX));
	ret = PyModule_AddObject(m, "HRES_MK_E_SYNTAX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_NOOBJECT));
	ret = PyModule_AddObject(m, "HRES_MK_E_NOOBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_INVALIDEXTENSION));
	ret = PyModule_AddObject(m, "HRES_MK_E_INVALIDEXTENSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_INTERMEDIATEINTERFACENOTSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_MK_E_INTERMEDIATEINTERFACENOTSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_NOTBINDABLE));
	ret = PyModule_AddObject(m, "HRES_MK_E_NOTBINDABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_NOTBOUND));
	ret = PyModule_AddObject(m, "HRES_MK_E_NOTBOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_CANTOPENFILE));
	ret = PyModule_AddObject(m, "HRES_MK_E_CANTOPENFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_MUSTBOTHERUSER));
	ret = PyModule_AddObject(m, "HRES_MK_E_MUSTBOTHERUSER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_NOINVERSE));
	ret = PyModule_AddObject(m, "HRES_MK_E_NOINVERSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_NOSTORAGE));
	ret = PyModule_AddObject(m, "HRES_MK_E_NOSTORAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_NOPREFIX));
	ret = PyModule_AddObject(m, "HRES_MK_E_NOPREFIX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_ENUMERATION_FAILED));
	ret = PyModule_AddObject(m, "HRES_MK_E_ENUMERATION_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_NOTINITIALIZED));
	ret = PyModule_AddObject(m, "HRES_CO_E_NOTINITIALIZED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_ALREADYINITIALIZED));
	ret = PyModule_AddObject(m, "HRES_CO_E_ALREADYINITIALIZED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_CANTDETERMINECLASS));
	ret = PyModule_AddObject(m, "HRES_CO_E_CANTDETERMINECLASS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_CLASSSTRING));
	ret = PyModule_AddObject(m, "HRES_CO_E_CLASSSTRING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_IIDSTRING));
	ret = PyModule_AddObject(m, "HRES_CO_E_IIDSTRING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_APPNOTFOUND));
	ret = PyModule_AddObject(m, "HRES_CO_E_APPNOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_APPSINGLEUSE));
	ret = PyModule_AddObject(m, "HRES_CO_E_APPSINGLEUSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_ERRORINAPP));
	ret = PyModule_AddObject(m, "HRES_CO_E_ERRORINAPP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_DLLNOTFOUND));
	ret = PyModule_AddObject(m, "HRES_CO_E_DLLNOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_ERRORINDLL));
	ret = PyModule_AddObject(m, "HRES_CO_E_ERRORINDLL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_WRONGOSFORAPP));
	ret = PyModule_AddObject(m, "HRES_CO_E_WRONGOSFORAPP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_OBJNOTREG));
	ret = PyModule_AddObject(m, "HRES_CO_E_OBJNOTREG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_OBJISREG));
	ret = PyModule_AddObject(m, "HRES_CO_E_OBJISREG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_OBJNOTCONNECTED));
	ret = PyModule_AddObject(m, "HRES_CO_E_OBJNOTCONNECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_APPDIDNTREG));
	ret = PyModule_AddObject(m, "HRES_CO_E_APPDIDNTREG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_RELEASED));
	ret = PyModule_AddObject(m, "HRES_CO_E_RELEASED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_E_ALL_SUBSCRIBERS_FAILED));
	ret = PyModule_AddObject(m, "HRES_EVENT_E_ALL_SUBSCRIBERS_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_E_QUERYSYNTAX));
	ret = PyModule_AddObject(m, "HRES_EVENT_E_QUERYSYNTAX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_E_QUERYFIELD));
	ret = PyModule_AddObject(m, "HRES_EVENT_E_QUERYFIELD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_E_INTERNALEXCEPTION));
	ret = PyModule_AddObject(m, "HRES_EVENT_E_INTERNALEXCEPTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_E_INTERNALERROR));
	ret = PyModule_AddObject(m, "HRES_EVENT_E_INTERNALERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_E_INVALID_PER_USER_SID));
	ret = PyModule_AddObject(m, "HRES_EVENT_E_INVALID_PER_USER_SID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_E_USER_EXCEPTION));
	ret = PyModule_AddObject(m, "HRES_EVENT_E_USER_EXCEPTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_E_TOO_MANY_METHODS));
	ret = PyModule_AddObject(m, "HRES_EVENT_E_TOO_MANY_METHODS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_E_MISSING_EVENTCLASS));
	ret = PyModule_AddObject(m, "HRES_EVENT_E_MISSING_EVENTCLASS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_E_NOT_ALL_REMOVED));
	ret = PyModule_AddObject(m, "HRES_EVENT_E_NOT_ALL_REMOVED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_E_COMPLUS_NOT_INSTALLED));
	ret = PyModule_AddObject(m, "HRES_EVENT_E_COMPLUS_NOT_INSTALLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_E_CANT_MODIFY_OR_DELETE_UNCONFIGURED_OBJECT));
	ret = PyModule_AddObject(m, "HRES_EVENT_E_CANT_MODIFY_OR_DELETE_UNCONFIGURED_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_E_CANT_MODIFY_OR_DELETE_CONFIGURED_OBJECT));
	ret = PyModule_AddObject(m, "HRES_EVENT_E_CANT_MODIFY_OR_DELETE_CONFIGURED_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_E_INVALID_EVENT_CLASS_PARTITION));
	ret = PyModule_AddObject(m, "HRES_EVENT_E_INVALID_EVENT_CLASS_PARTITION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_EVENT_E_PER_USER_SID_NOT_LOGGED_ON));
	ret = PyModule_AddObject(m, "HRES_EVENT_E_PER_USER_SID_NOT_LOGGED_ON", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_TRIGGER_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_TRIGGER_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_TASK_NOT_READY));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_TASK_NOT_READY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_TASK_NOT_RUNNING));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_TASK_NOT_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_SERVICE_NOT_INSTALLED));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_SERVICE_NOT_INSTALLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_CANNOT_OPEN_TASK));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_CANNOT_OPEN_TASK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_INVALID_TASK));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_INVALID_TASK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_ACCOUNT_INFORMATION_NOT_SET));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_ACCOUNT_INFORMATION_NOT_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_ACCOUNT_NAME_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_ACCOUNT_NAME_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_ACCOUNT_DBASE_CORRUPT));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_ACCOUNT_DBASE_CORRUPT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_NO_SECURITY_SERVICES));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_NO_SECURITY_SERVICES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_UNKNOWN_OBJECT_VERSION));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_UNKNOWN_OBJECT_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_UNSUPPORTED_ACCOUNT_OPTION));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_UNSUPPORTED_ACCOUNT_OPTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_SERVICE_NOT_RUNNING));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_SERVICE_NOT_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_UNEXPECTEDNODE));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_UNEXPECTEDNODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_NAMESPACE));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_NAMESPACE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_INVALIDVALUE));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_INVALIDVALUE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_MISSINGNODE));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_MISSINGNODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_MALFORMEDXML));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_MALFORMEDXML", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_TOO_MANY_NODES));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_TOO_MANY_NODES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_PAST_END_BOUNDARY));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_PAST_END_BOUNDARY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_ALREADY_RUNNING));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_ALREADY_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_USER_NOT_LOGGED_ON));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_USER_NOT_LOGGED_ON", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_INVALID_TASK_HASH));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_INVALID_TASK_HASH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_SERVICE_NOT_AVAILABLE));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_SERVICE_NOT_AVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_SERVICE_TOO_BUSY));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_SERVICE_TOO_BUSY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCHED_E_TASK_ATTEMPTED));
	ret = PyModule_AddObject(m, "HRES_SCHED_E_TASK_ATTEMPTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_ALREADYOTHERSINGLEPHASE));
	ret = PyModule_AddObject(m, "HRES_XACT_E_ALREADYOTHERSINGLEPHASE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_CANTRETAIN));
	ret = PyModule_AddObject(m, "HRES_XACT_E_CANTRETAIN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_COMMITFAILED));
	ret = PyModule_AddObject(m, "HRES_XACT_E_COMMITFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_COMMITPREVENTED));
	ret = PyModule_AddObject(m, "HRES_XACT_E_COMMITPREVENTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_HEURISTICABORT));
	ret = PyModule_AddObject(m, "HRES_XACT_E_HEURISTICABORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_HEURISTICCOMMIT));
	ret = PyModule_AddObject(m, "HRES_XACT_E_HEURISTICCOMMIT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_HEURISTICDAMAGE));
	ret = PyModule_AddObject(m, "HRES_XACT_E_HEURISTICDAMAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_HEURISTICDANGER));
	ret = PyModule_AddObject(m, "HRES_XACT_E_HEURISTICDANGER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_ISOLATIONLEVEL));
	ret = PyModule_AddObject(m, "HRES_XACT_E_ISOLATIONLEVEL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_NOASYNC));
	ret = PyModule_AddObject(m, "HRES_XACT_E_NOASYNC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_NOENLIST));
	ret = PyModule_AddObject(m, "HRES_XACT_E_NOENLIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_NOISORETAIN));
	ret = PyModule_AddObject(m, "HRES_XACT_E_NOISORETAIN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_NORESOURCE));
	ret = PyModule_AddObject(m, "HRES_XACT_E_NORESOURCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_NOTCURRENT));
	ret = PyModule_AddObject(m, "HRES_XACT_E_NOTCURRENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_NOTRANSACTION));
	ret = PyModule_AddObject(m, "HRES_XACT_E_NOTRANSACTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_NOTSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_XACT_E_NOTSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_UNKNOWNRMGRID));
	ret = PyModule_AddObject(m, "HRES_XACT_E_UNKNOWNRMGRID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_WRONGSTATE));
	ret = PyModule_AddObject(m, "HRES_XACT_E_WRONGSTATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_WRONGUOW));
	ret = PyModule_AddObject(m, "HRES_XACT_E_WRONGUOW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_XTIONEXISTS));
	ret = PyModule_AddObject(m, "HRES_XACT_E_XTIONEXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_NOIMPORTOBJECT));
	ret = PyModule_AddObject(m, "HRES_XACT_E_NOIMPORTOBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_INVALIDCOOKIE));
	ret = PyModule_AddObject(m, "HRES_XACT_E_INVALIDCOOKIE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_INDOUBT));
	ret = PyModule_AddObject(m, "HRES_XACT_E_INDOUBT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_NOTIMEOUT));
	ret = PyModule_AddObject(m, "HRES_XACT_E_NOTIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_ALREADYINPROGRESS));
	ret = PyModule_AddObject(m, "HRES_XACT_E_ALREADYINPROGRESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_ABORTED));
	ret = PyModule_AddObject(m, "HRES_XACT_E_ABORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_LOGFULL));
	ret = PyModule_AddObject(m, "HRES_XACT_E_LOGFULL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_TMNOTAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_XACT_E_TMNOTAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_CONNECTION_DOWN));
	ret = PyModule_AddObject(m, "HRES_XACT_E_CONNECTION_DOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_CONNECTION_DENIED));
	ret = PyModule_AddObject(m, "HRES_XACT_E_CONNECTION_DENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_REENLISTTIMEOUT));
	ret = PyModule_AddObject(m, "HRES_XACT_E_REENLISTTIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_TIP_CONNECT_FAILED));
	ret = PyModule_AddObject(m, "HRES_XACT_E_TIP_CONNECT_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_TIP_PROTOCOL_ERROR));
	ret = PyModule_AddObject(m, "HRES_XACT_E_TIP_PROTOCOL_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_TIP_PULL_FAILED));
	ret = PyModule_AddObject(m, "HRES_XACT_E_TIP_PULL_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_DEST_TMNOTAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_XACT_E_DEST_TMNOTAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_TIP_DISABLED));
	ret = PyModule_AddObject(m, "HRES_XACT_E_TIP_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_NETWORK_TX_DISABLED));
	ret = PyModule_AddObject(m, "HRES_XACT_E_NETWORK_TX_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_PARTNER_NETWORK_TX_DISABLED));
	ret = PyModule_AddObject(m, "HRES_XACT_E_PARTNER_NETWORK_TX_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_XA_TX_DISABLED));
	ret = PyModule_AddObject(m, "HRES_XACT_E_XA_TX_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_UNABLE_TO_READ_DTC_CONFIG));
	ret = PyModule_AddObject(m, "HRES_XACT_E_UNABLE_TO_READ_DTC_CONFIG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_UNABLE_TO_LOAD_DTC_PROXY));
	ret = PyModule_AddObject(m, "HRES_XACT_E_UNABLE_TO_LOAD_DTC_PROXY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_ABORTING));
	ret = PyModule_AddObject(m, "HRES_XACT_E_ABORTING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_CLERKNOTFOUND));
	ret = PyModule_AddObject(m, "HRES_XACT_E_CLERKNOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_CLERKEXISTS));
	ret = PyModule_AddObject(m, "HRES_XACT_E_CLERKEXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_RECOVERYINPROGRESS));
	ret = PyModule_AddObject(m, "HRES_XACT_E_RECOVERYINPROGRESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_TRANSACTIONCLOSED));
	ret = PyModule_AddObject(m, "HRES_XACT_E_TRANSACTIONCLOSED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_INVALIDLSN));
	ret = PyModule_AddObject(m, "HRES_XACT_E_INVALIDLSN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_REPLAYREQUEST));
	ret = PyModule_AddObject(m, "HRES_XACT_E_REPLAYREQUEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_CONNECTION_REQUEST_DENIED));
	ret = PyModule_AddObject(m, "HRES_XACT_E_CONNECTION_REQUEST_DENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_TOOMANY_ENLISTMENTS));
	ret = PyModule_AddObject(m, "HRES_XACT_E_TOOMANY_ENLISTMENTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_DUPLICATE_GUID));
	ret = PyModule_AddObject(m, "HRES_XACT_E_DUPLICATE_GUID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_NOTSINGLEPHASE));
	ret = PyModule_AddObject(m, "HRES_XACT_E_NOTSINGLEPHASE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_RECOVERYALREADYDONE));
	ret = PyModule_AddObject(m, "HRES_XACT_E_RECOVERYALREADYDONE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_PROTOCOL));
	ret = PyModule_AddObject(m, "HRES_XACT_E_PROTOCOL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_RM_FAILURE));
	ret = PyModule_AddObject(m, "HRES_XACT_E_RM_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_RECOVERY_FAILED));
	ret = PyModule_AddObject(m, "HRES_XACT_E_RECOVERY_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_LU_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_XACT_E_LU_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_DUPLICATE_LU));
	ret = PyModule_AddObject(m, "HRES_XACT_E_DUPLICATE_LU", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_LU_NOT_CONNECTED));
	ret = PyModule_AddObject(m, "HRES_XACT_E_LU_NOT_CONNECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_DUPLICATE_TRANSID));
	ret = PyModule_AddObject(m, "HRES_XACT_E_DUPLICATE_TRANSID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_LU_BUSY));
	ret = PyModule_AddObject(m, "HRES_XACT_E_LU_BUSY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_LU_NO_RECOVERY_PROCESS));
	ret = PyModule_AddObject(m, "HRES_XACT_E_LU_NO_RECOVERY_PROCESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_LU_DOWN));
	ret = PyModule_AddObject(m, "HRES_XACT_E_LU_DOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_LU_RECOVERING));
	ret = PyModule_AddObject(m, "HRES_XACT_E_LU_RECOVERING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_LU_RECOVERY_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_XACT_E_LU_RECOVERY_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XACT_E_RM_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_XACT_E_RM_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONTEXT_E_ABORTED));
	ret = PyModule_AddObject(m, "HRES_CONTEXT_E_ABORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONTEXT_E_ABORTING));
	ret = PyModule_AddObject(m, "HRES_CONTEXT_E_ABORTING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONTEXT_E_NOCONTEXT));
	ret = PyModule_AddObject(m, "HRES_CONTEXT_E_NOCONTEXT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONTEXT_E_WOULD_DEADLOCK));
	ret = PyModule_AddObject(m, "HRES_CONTEXT_E_WOULD_DEADLOCK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONTEXT_E_SYNCH_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_CONTEXT_E_SYNCH_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONTEXT_E_OLDREF));
	ret = PyModule_AddObject(m, "HRES_CONTEXT_E_OLDREF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONTEXT_E_ROLENOTFOUND));
	ret = PyModule_AddObject(m, "HRES_CONTEXT_E_ROLENOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONTEXT_E_TMNOTAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_CONTEXT_E_TMNOTAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_ACTIVATIONFAILED));
	ret = PyModule_AddObject(m, "HRES_CO_E_ACTIVATIONFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_ACTIVATIONFAILED_EVENTLOGGED));
	ret = PyModule_AddObject(m, "HRES_CO_E_ACTIVATIONFAILED_EVENTLOGGED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_ACTIVATIONFAILED_CATALOGERROR));
	ret = PyModule_AddObject(m, "HRES_CO_E_ACTIVATIONFAILED_CATALOGERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_ACTIVATIONFAILED_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_CO_E_ACTIVATIONFAILED_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_INITIALIZATIONFAILED));
	ret = PyModule_AddObject(m, "HRES_CO_E_INITIALIZATIONFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONTEXT_E_NOJIT));
	ret = PyModule_AddObject(m, "HRES_CONTEXT_E_NOJIT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CONTEXT_E_NOTRANSACTION));
	ret = PyModule_AddObject(m, "HRES_CONTEXT_E_NOTRANSACTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_THREADINGMODEL_CHANGED));
	ret = PyModule_AddObject(m, "HRES_CO_E_THREADINGMODEL_CHANGED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_NOIISINTRINSICS));
	ret = PyModule_AddObject(m, "HRES_CO_E_NOIISINTRINSICS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_NOCOOKIES));
	ret = PyModule_AddObject(m, "HRES_CO_E_NOCOOKIES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_DBERROR));
	ret = PyModule_AddObject(m, "HRES_CO_E_DBERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_NOTPOOLED));
	ret = PyModule_AddObject(m, "HRES_CO_E_NOTPOOLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_NOTCONSTRUCTED));
	ret = PyModule_AddObject(m, "HRES_CO_E_NOTCONSTRUCTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_NOSYNCHRONIZATION));
	ret = PyModule_AddObject(m, "HRES_CO_E_NOSYNCHRONIZATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_ISOLEVELMISMATCH));
	ret = PyModule_AddObject(m, "HRES_CO_E_ISOLEVELMISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_CALL_OUT_OF_TX_SCOPE_NOT_ALLOWED));
	ret = PyModule_AddObject(m, "HRES_CO_E_CALL_OUT_OF_TX_SCOPE_NOT_ALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_EXIT_TRANSACTION_SCOPE_NOT_CALLED));
	ret = PyModule_AddObject(m, "HRES_CO_E_EXIT_TRANSACTION_SCOPE_NOT_CALLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_E_ACCESSDENIED));
	ret = PyModule_AddObject(m, "HRES_E_ACCESSDENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_E_OUTOFMEMORY));
	ret = PyModule_AddObject(m, "HRES_E_OUTOFMEMORY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_E_INVALIDARG));
	ret = PyModule_AddObject(m, "HRES_E_INVALIDARG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_DISK_FULL));
	ret = PyModule_AddObject(m, "HRES_ERROR_DISK_FULL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_CLASS_CREATE_FAILED));
	ret = PyModule_AddObject(m, "HRES_CO_E_CLASS_CREATE_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_SCM_ERROR));
	ret = PyModule_AddObject(m, "HRES_CO_E_SCM_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_SCM_RPC_FAILURE));
	ret = PyModule_AddObject(m, "HRES_CO_E_SCM_RPC_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_BAD_PATH));
	ret = PyModule_AddObject(m, "HRES_CO_E_BAD_PATH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_SERVER_EXEC_FAILURE));
	ret = PyModule_AddObject(m, "HRES_CO_E_SERVER_EXEC_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_OBJSRV_RPC_FAILURE));
	ret = PyModule_AddObject(m, "HRES_CO_E_OBJSRV_RPC_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MK_E_NO_NORMALIZED));
	ret = PyModule_AddObject(m, "HRES_MK_E_NO_NORMALIZED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_SERVER_STOPPING));
	ret = PyModule_AddObject(m, "HRES_CO_E_SERVER_STOPPING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MEM_E_INVALID_ROOT));
	ret = PyModule_AddObject(m, "HRES_MEM_E_INVALID_ROOT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MEM_E_INVALID_LINK));
	ret = PyModule_AddObject(m, "HRES_MEM_E_INVALID_LINK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MEM_E_INVALID_SIZE));
	ret = PyModule_AddObject(m, "HRES_MEM_E_INVALID_SIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_MISSING_DISPLAYNAME));
	ret = PyModule_AddObject(m, "HRES_CO_E_MISSING_DISPLAYNAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_RUNAS_VALUE_MUST_BE_AAA));
	ret = PyModule_AddObject(m, "HRES_CO_E_RUNAS_VALUE_MUST_BE_AAA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CO_E_ELEVATION_DISABLED));
	ret = PyModule_AddObject(m, "HRES_CO_E_ELEVATION_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_UID));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_UID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_HASH));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_HASH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_KEY));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_KEY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_LEN));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_LEN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_DATA));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_SIGNATURE));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_SIGNATURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_VER));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_VER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_ALGID));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_ALGID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_FLAGS));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_FLAGS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_TYPE));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_KEY_STATE));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_KEY_STATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_HASH_STATE));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_HASH_STATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_NO_KEY));
	ret = PyModule_AddObject(m, "HRES_NTE_NO_KEY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_NO_MEMORY));
	ret = PyModule_AddObject(m, "HRES_NTE_NO_MEMORY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_EXISTS));
	ret = PyModule_AddObject(m, "HRES_NTE_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_PERM));
	ret = PyModule_AddObject(m, "HRES_NTE_PERM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NTE_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_DOUBLE_ENCRYPT));
	ret = PyModule_AddObject(m, "HRES_NTE_DOUBLE_ENCRYPT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_PROVIDER));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_PROVIDER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_PROV_TYPE));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_PROV_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_PUBLIC_KEY));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_PUBLIC_KEY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_KEYSET));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_KEYSET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_PROV_TYPE_NOT_DEF));
	ret = PyModule_AddObject(m, "HRES_NTE_PROV_TYPE_NOT_DEF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_PROV_TYPE_ENTRY_BAD));
	ret = PyModule_AddObject(m, "HRES_NTE_PROV_TYPE_ENTRY_BAD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_KEYSET_NOT_DEF));
	ret = PyModule_AddObject(m, "HRES_NTE_KEYSET_NOT_DEF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_KEYSET_ENTRY_BAD));
	ret = PyModule_AddObject(m, "HRES_NTE_KEYSET_ENTRY_BAD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_PROV_TYPE_NO_MATCH));
	ret = PyModule_AddObject(m, "HRES_NTE_PROV_TYPE_NO_MATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_SIGNATURE_FILE_BAD));
	ret = PyModule_AddObject(m, "HRES_NTE_SIGNATURE_FILE_BAD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_PROVIDER_DLL_FAIL));
	ret = PyModule_AddObject(m, "HRES_NTE_PROVIDER_DLL_FAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_PROV_DLL_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NTE_PROV_DLL_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BAD_KEYSET_PARAM));
	ret = PyModule_AddObject(m, "HRES_NTE_BAD_KEYSET_PARAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_FAIL));
	ret = PyModule_AddObject(m, "HRES_NTE_FAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_SYS_ERR));
	ret = PyModule_AddObject(m, "HRES_NTE_SYS_ERR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_SILENT_CONTEXT));
	ret = PyModule_AddObject(m, "HRES_NTE_SILENT_CONTEXT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_TOKEN_KEYSET_STORAGE_FULL));
	ret = PyModule_AddObject(m, "HRES_NTE_TOKEN_KEYSET_STORAGE_FULL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_TEMPORARY_PROFILE));
	ret = PyModule_AddObject(m, "HRES_NTE_TEMPORARY_PROFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_FIXEDPARAMETER));
	ret = PyModule_AddObject(m, "HRES_NTE_FIXEDPARAMETER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_INVALID_HANDLE));
	ret = PyModule_AddObject(m, "HRES_NTE_INVALID_HANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_INVALID_PARAMETER));
	ret = PyModule_AddObject(m, "HRES_NTE_INVALID_PARAMETER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BUFFER_TOO_SMALL));
	ret = PyModule_AddObject(m, "HRES_NTE_BUFFER_TOO_SMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NTE_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_NO_MORE_ITEMS));
	ret = PyModule_AddObject(m, "HRES_NTE_NO_MORE_ITEMS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_BUFFERS_OVERLAP));
	ret = PyModule_AddObject(m, "HRES_NTE_BUFFERS_OVERLAP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_DECRYPTION_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NTE_DECRYPTION_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_INTERNAL_ERROR));
	ret = PyModule_AddObject(m, "HRES_NTE_INTERNAL_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_UI_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_NTE_UI_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NTE_HMAC_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NTE_HMAC_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_INSUFFICIENT_MEMORY));
	ret = PyModule_AddObject(m, "HRES_SEC_E_INSUFFICIENT_MEMORY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_INVALID_HANDLE));
	ret = PyModule_AddObject(m, "HRES_SEC_E_INVALID_HANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_UNSUPPORTED_FUNCTION));
	ret = PyModule_AddObject(m, "HRES_SEC_E_UNSUPPORTED_FUNCTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_TARGET_UNKNOWN));
	ret = PyModule_AddObject(m, "HRES_SEC_E_TARGET_UNKNOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_INTERNAL_ERROR));
	ret = PyModule_AddObject(m, "HRES_SEC_E_INTERNAL_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_SECPKG_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_SEC_E_SECPKG_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_NOT_OWNER));
	ret = PyModule_AddObject(m, "HRES_SEC_E_NOT_OWNER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_CANNOT_INSTALL));
	ret = PyModule_AddObject(m, "HRES_SEC_E_CANNOT_INSTALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_INVALID_TOKEN));
	ret = PyModule_AddObject(m, "HRES_SEC_E_INVALID_TOKEN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_CANNOT_PACK));
	ret = PyModule_AddObject(m, "HRES_SEC_E_CANNOT_PACK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_QOP_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_QOP_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_NO_IMPERSONATION));
	ret = PyModule_AddObject(m, "HRES_SEC_E_NO_IMPERSONATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_LOGON_DENIED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_LOGON_DENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_UNKNOWN_CREDENTIALS));
	ret = PyModule_AddObject(m, "HRES_SEC_E_UNKNOWN_CREDENTIALS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_NO_CREDENTIALS));
	ret = PyModule_AddObject(m, "HRES_SEC_E_NO_CREDENTIALS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_MESSAGE_ALTERED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_MESSAGE_ALTERED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_OUT_OF_SEQUENCE));
	ret = PyModule_AddObject(m, "HRES_SEC_E_OUT_OF_SEQUENCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_NO_AUTHENTICATING_AUTHORITY));
	ret = PyModule_AddObject(m, "HRES_SEC_E_NO_AUTHENTICATING_AUTHORITY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_BAD_PKGID));
	ret = PyModule_AddObject(m, "HRES_SEC_E_BAD_PKGID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_CONTEXT_EXPIRED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_CONTEXT_EXPIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_INCOMPLETE_MESSAGE));
	ret = PyModule_AddObject(m, "HRES_SEC_E_INCOMPLETE_MESSAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_INCOMPLETE_CREDENTIALS));
	ret = PyModule_AddObject(m, "HRES_SEC_E_INCOMPLETE_CREDENTIALS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_BUFFER_TOO_SMALL));
	ret = PyModule_AddObject(m, "HRES_SEC_E_BUFFER_TOO_SMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_WRONG_PRINCIPAL));
	ret = PyModule_AddObject(m, "HRES_SEC_E_WRONG_PRINCIPAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_TIME_SKEW));
	ret = PyModule_AddObject(m, "HRES_SEC_E_TIME_SKEW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_UNTRUSTED_ROOT));
	ret = PyModule_AddObject(m, "HRES_SEC_E_UNTRUSTED_ROOT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_ILLEGAL_MESSAGE));
	ret = PyModule_AddObject(m, "HRES_SEC_E_ILLEGAL_MESSAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_CERT_UNKNOWN));
	ret = PyModule_AddObject(m, "HRES_SEC_E_CERT_UNKNOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_CERT_EXPIRED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_CERT_EXPIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_ENCRYPT_FAILURE));
	ret = PyModule_AddObject(m, "HRES_SEC_E_ENCRYPT_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_DECRYPT_FAILURE));
	ret = PyModule_AddObject(m, "HRES_SEC_E_DECRYPT_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_ALGORITHM_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_SEC_E_ALGORITHM_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_SECURITY_QOS_FAILED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_SECURITY_QOS_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_UNFINISHED_CONTEXT_DELETED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_UNFINISHED_CONTEXT_DELETED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_NO_TGT_REPLY));
	ret = PyModule_AddObject(m, "HRES_SEC_E_NO_TGT_REPLY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_NO_IP_ADDRESSES));
	ret = PyModule_AddObject(m, "HRES_SEC_E_NO_IP_ADDRESSES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_WRONG_CREDENTIAL_HANDLE));
	ret = PyModule_AddObject(m, "HRES_SEC_E_WRONG_CREDENTIAL_HANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_CRYPTO_SYSTEM_INVALID));
	ret = PyModule_AddObject(m, "HRES_SEC_E_CRYPTO_SYSTEM_INVALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_MAX_REFERRALS_EXCEEDED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_MAX_REFERRALS_EXCEEDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_MUST_BE_KDC));
	ret = PyModule_AddObject(m, "HRES_SEC_E_MUST_BE_KDC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_STRONG_CRYPTO_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_STRONG_CRYPTO_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_TOO_MANY_PRINCIPALS));
	ret = PyModule_AddObject(m, "HRES_SEC_E_TOO_MANY_PRINCIPALS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_NO_PA_DATA));
	ret = PyModule_AddObject(m, "HRES_SEC_E_NO_PA_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_PKINIT_NAME_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_SEC_E_PKINIT_NAME_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_SMARTCARD_LOGON_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_SMARTCARD_LOGON_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_SHUTDOWN_IN_PROGRESS));
	ret = PyModule_AddObject(m, "HRES_SEC_E_SHUTDOWN_IN_PROGRESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_KDC_INVALID_REQUEST));
	ret = PyModule_AddObject(m, "HRES_SEC_E_KDC_INVALID_REQUEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_KDC_UNABLE_TO_REFER));
	ret = PyModule_AddObject(m, "HRES_SEC_E_KDC_UNABLE_TO_REFER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_KDC_UNKNOWN_ETYPE));
	ret = PyModule_AddObject(m, "HRES_SEC_E_KDC_UNKNOWN_ETYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_UNSUPPORTED_PREAUTH));
	ret = PyModule_AddObject(m, "HRES_SEC_E_UNSUPPORTED_PREAUTH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_DELEGATION_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_DELEGATION_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_BAD_BINDINGS));
	ret = PyModule_AddObject(m, "HRES_SEC_E_BAD_BINDINGS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_MULTIPLE_ACCOUNTS));
	ret = PyModule_AddObject(m, "HRES_SEC_E_MULTIPLE_ACCOUNTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_NO_KERB_KEY));
	ret = PyModule_AddObject(m, "HRES_SEC_E_NO_KERB_KEY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_CERT_WRONG_USAGE));
	ret = PyModule_AddObject(m, "HRES_SEC_E_CERT_WRONG_USAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_DOWNGRADE_DETECTED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_DOWNGRADE_DETECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_SMARTCARD_CERT_REVOKED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_SMARTCARD_CERT_REVOKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_ISSUING_CA_UNTRUSTED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_ISSUING_CA_UNTRUSTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_REVOCATION_OFFLINE_C));
	ret = PyModule_AddObject(m, "HRES_SEC_E_REVOCATION_OFFLINE_C", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_PKINIT_CLIENT_FAILURE));
	ret = PyModule_AddObject(m, "HRES_SEC_E_PKINIT_CLIENT_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_SMARTCARD_CERT_EXPIRED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_SMARTCARD_CERT_EXPIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_NO_S4U_PROT_SUPPORT));
	ret = PyModule_AddObject(m, "HRES_SEC_E_NO_S4U_PROT_SUPPORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_CROSSREALM_DELEGATION_FAILURE));
	ret = PyModule_AddObject(m, "HRES_SEC_E_CROSSREALM_DELEGATION_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_REVOCATION_OFFLINE_KDC));
	ret = PyModule_AddObject(m, "HRES_SEC_E_REVOCATION_OFFLINE_KDC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_ISSUING_CA_UNTRUSTED_KDC));
	ret = PyModule_AddObject(m, "HRES_SEC_E_ISSUING_CA_UNTRUSTED_KDC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_KDC_CERT_EXPIRED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_KDC_CERT_EXPIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_KDC_CERT_REVOKED));
	ret = PyModule_AddObject(m, "HRES_SEC_E_KDC_CERT_REVOKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_INVALID_PARAMETER));
	ret = PyModule_AddObject(m, "HRES_SEC_E_INVALID_PARAMETER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_DELEGATION_POLICY));
	ret = PyModule_AddObject(m, "HRES_SEC_E_DELEGATION_POLICY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SEC_E_POLICY_NLTM_ONLY));
	ret = PyModule_AddObject(m, "HRES_SEC_E_POLICY_NLTM_ONLY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_MSG_ERROR));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_MSG_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_UNKNOWN_ALGO));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_UNKNOWN_ALGO", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_OID_FORMAT));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_OID_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_INVALID_MSG_TYPE));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_INVALID_MSG_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_UNEXPECTED_ENCODING));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_UNEXPECTED_ENCODING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_AUTH_ATTR_MISSING));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_AUTH_ATTR_MISSING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_HASH_VALUE));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_HASH_VALUE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_INVALID_INDEX));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_INVALID_INDEX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ALREADY_DECRYPTED));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ALREADY_DECRYPTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_NOT_DECRYPTED));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_NOT_DECRYPTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_RECIPIENT_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_RECIPIENT_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_CONTROL_TYPE));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_CONTROL_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ISSUER_SERIALNUMBER));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ISSUER_SERIALNUMBER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_SIGNER_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_SIGNER_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ATTRIBUTES_MISSING));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ATTRIBUTES_MISSING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_STREAM_MSG_NOT_READY));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_STREAM_MSG_NOT_READY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_STREAM_INSUFFICIENT_DATA));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_STREAM_INSUFFICIENT_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_BAD_LEN));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_BAD_LEN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_BAD_ENCODE));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_BAD_ENCODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_FILE_ERROR));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_FILE_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_EXISTS));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_NO_PROVIDER));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_NO_PROVIDER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_SELF_SIGNED));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_SELF_SIGNED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_DELETED_PREV));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_DELETED_PREV", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_NO_MATCH));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_NO_MATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_UNEXPECTED_MSG_TYPE));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_UNEXPECTED_MSG_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_NO_KEY_PROPERTY));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_NO_KEY_PROPERTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_NO_DECRYPT_CERT));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_NO_DECRYPT_CERT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_BAD_MSG));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_BAD_MSG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_NO_SIGNER));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_NO_SIGNER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_PENDING_CLOSE));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_PENDING_CLOSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_REVOKED));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_REVOKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_NO_REVOCATION_DLL));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_NO_REVOCATION_DLL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_NO_REVOCATION_CHECK));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_NO_REVOCATION_CHECK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_REVOCATION_OFFLINE));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_REVOCATION_OFFLINE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_NOT_IN_REVOCATION_DATABASE));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_NOT_IN_REVOCATION_DATABASE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_INVALID_NUMERIC_STRING));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_INVALID_NUMERIC_STRING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_INVALID_PRINTABLE_STRING));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_INVALID_PRINTABLE_STRING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_INVALID_IA5_STRING));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_INVALID_IA5_STRING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_INVALID_X500_STRING));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_INVALID_X500_STRING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_NOT_CHAR_STRING));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_NOT_CHAR_STRING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_FILERESIZED));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_FILERESIZED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_SECURITY_SETTINGS));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_SECURITY_SETTINGS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_NO_VERIFY_USAGE_DLL));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_NO_VERIFY_USAGE_DLL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_NO_VERIFY_USAGE_CHECK));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_NO_VERIFY_USAGE_CHECK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_VERIFY_USAGE_OFFLINE));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_VERIFY_USAGE_OFFLINE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_NOT_IN_CTL));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_NOT_IN_CTL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_NO_TRUSTED_SIGNER));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_NO_TRUSTED_SIGNER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_MISSING_PUBKEY_PARA));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_MISSING_PUBKEY_PARA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_OSS_ERROR));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_OSS_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_MORE_BUF));
	ret = PyModule_AddObject(m, "HRES_OSS_MORE_BUF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_NEGATIVE_UINTEGER));
	ret = PyModule_AddObject(m, "HRES_OSS_NEGATIVE_UINTEGER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_PDU_RANGE));
	ret = PyModule_AddObject(m, "HRES_OSS_PDU_RANGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_MORE_INPUT));
	ret = PyModule_AddObject(m, "HRES_OSS_MORE_INPUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_DATA_ERROR));
	ret = PyModule_AddObject(m, "HRES_OSS_DATA_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_BAD_ARG));
	ret = PyModule_AddObject(m, "HRES_OSS_BAD_ARG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_BAD_VERSION));
	ret = PyModule_AddObject(m, "HRES_OSS_BAD_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_OUT_MEMORY));
	ret = PyModule_AddObject(m, "HRES_OSS_OUT_MEMORY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_PDU_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_OSS_PDU_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_LIMITED));
	ret = PyModule_AddObject(m, "HRES_OSS_LIMITED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_BAD_PTR));
	ret = PyModule_AddObject(m, "HRES_OSS_BAD_PTR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_BAD_TIME));
	ret = PyModule_AddObject(m, "HRES_OSS_BAD_TIME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_INDEFINITE_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_OSS_INDEFINITE_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_MEM_ERROR));
	ret = PyModule_AddObject(m, "HRES_OSS_MEM_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_BAD_TABLE));
	ret = PyModule_AddObject(m, "HRES_OSS_BAD_TABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_TOO_LONG));
	ret = PyModule_AddObject(m, "HRES_OSS_TOO_LONG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_CONSTRAINT_VIOLATED));
	ret = PyModule_AddObject(m, "HRES_OSS_CONSTRAINT_VIOLATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_FATAL_ERROR));
	ret = PyModule_AddObject(m, "HRES_OSS_FATAL_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_ACCESS_SERIALIZATION_ERROR));
	ret = PyModule_AddObject(m, "HRES_OSS_ACCESS_SERIALIZATION_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_NULL_TBL));
	ret = PyModule_AddObject(m, "HRES_OSS_NULL_TBL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_NULL_FCN));
	ret = PyModule_AddObject(m, "HRES_OSS_NULL_FCN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_BAD_ENCRULES));
	ret = PyModule_AddObject(m, "HRES_OSS_BAD_ENCRULES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_UNAVAIL_ENCRULES));
	ret = PyModule_AddObject(m, "HRES_OSS_UNAVAIL_ENCRULES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_CANT_OPEN_TRACE_WINDOW));
	ret = PyModule_AddObject(m, "HRES_OSS_CANT_OPEN_TRACE_WINDOW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_UNIMPLEMENTED));
	ret = PyModule_AddObject(m, "HRES_OSS_UNIMPLEMENTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_OID_DLL_NOT_LINKED));
	ret = PyModule_AddObject(m, "HRES_OSS_OID_DLL_NOT_LINKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_CANT_OPEN_TRACE_FILE));
	ret = PyModule_AddObject(m, "HRES_OSS_CANT_OPEN_TRACE_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_TRACE_FILE_ALREADY_OPEN));
	ret = PyModule_AddObject(m, "HRES_OSS_TRACE_FILE_ALREADY_OPEN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_TABLE_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_OSS_TABLE_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_TYPE_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_OSS_TYPE_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_REAL_DLL_NOT_LINKED));
	ret = PyModule_AddObject(m, "HRES_OSS_REAL_DLL_NOT_LINKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_REAL_CODE_NOT_LINKED));
	ret = PyModule_AddObject(m, "HRES_OSS_REAL_CODE_NOT_LINKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_OUT_OF_RANGE));
	ret = PyModule_AddObject(m, "HRES_OSS_OUT_OF_RANGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_COPIER_DLL_NOT_LINKED));
	ret = PyModule_AddObject(m, "HRES_OSS_COPIER_DLL_NOT_LINKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_CONSTRAINT_DLL_NOT_LINKED));
	ret = PyModule_AddObject(m, "HRES_OSS_CONSTRAINT_DLL_NOT_LINKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_COMPARATOR_DLL_NOT_LINKED));
	ret = PyModule_AddObject(m, "HRES_OSS_COMPARATOR_DLL_NOT_LINKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_COMPARATOR_CODE_NOT_LINKED));
	ret = PyModule_AddObject(m, "HRES_OSS_COMPARATOR_CODE_NOT_LINKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_MEM_MGR_DLL_NOT_LINKED));
	ret = PyModule_AddObject(m, "HRES_OSS_MEM_MGR_DLL_NOT_LINKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_PDV_DLL_NOT_LINKED));
	ret = PyModule_AddObject(m, "HRES_OSS_PDV_DLL_NOT_LINKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_PDV_CODE_NOT_LINKED));
	ret = PyModule_AddObject(m, "HRES_OSS_PDV_CODE_NOT_LINKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_API_DLL_NOT_LINKED));
	ret = PyModule_AddObject(m, "HRES_OSS_API_DLL_NOT_LINKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_BERDER_DLL_NOT_LINKED));
	ret = PyModule_AddObject(m, "HRES_OSS_BERDER_DLL_NOT_LINKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_PER_DLL_NOT_LINKED));
	ret = PyModule_AddObject(m, "HRES_OSS_PER_DLL_NOT_LINKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_OPEN_TYPE_ERROR));
	ret = PyModule_AddObject(m, "HRES_OSS_OPEN_TYPE_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_MUTEX_NOT_CREATED));
	ret = PyModule_AddObject(m, "HRES_OSS_MUTEX_NOT_CREATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_OSS_CANT_CLOSE_TRACE_FILE));
	ret = PyModule_AddObject(m, "HRES_OSS_CANT_CLOSE_TRACE_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_ERROR));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_INTERNAL));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_INTERNAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_EOD));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_EOD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_CORRUPT));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_CORRUPT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_LARGE));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_LARGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_CONSTRAINT));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_CONSTRAINT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_MEMORY));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_MEMORY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_OVERFLOW));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_OVERFLOW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_BADPDU));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_BADPDU", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_BADARGS));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_BADARGS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_BADREAL));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_BADREAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_BADTAG));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_BADTAG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_CHOICE));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_CHOICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_RULE));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_RULE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_UTF8));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_UTF8", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_PDU_TYPE));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_PDU_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_NYI));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_NYI", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_EXTENDED));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_EXTENDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CRYPT_E_ASN1_NOEOD));
	ret = PyModule_AddObject(m, "HRES_CRYPT_E_ASN1_NOEOD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_BAD_REQUESTSUBJECT));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_BAD_REQUESTSUBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_NO_REQUEST));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_NO_REQUEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_BAD_REQUESTSTATUS));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_BAD_REQUESTSTATUS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_PROPERTY_EMPTY));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_PROPERTY_EMPTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_INVALID_CA_CERTIFICATE));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_INVALID_CA_CERTIFICATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_SERVER_SUSPENDED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_SERVER_SUSPENDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_ENCODING_LENGTH));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_ENCODING_LENGTH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_ROLECONFLICT));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_ROLECONFLICT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_RESTRICTEDOFFICER));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_RESTRICTEDOFFICER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_KEY_ARCHIVAL_NOT_CONFIGURED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_KEY_ARCHIVAL_NOT_CONFIGURED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_NO_VALID_KRA));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_NO_VALID_KRA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_BAD_REQUEST_KEY_ARCHIVAL));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_BAD_REQUEST_KEY_ARCHIVAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_NO_CAADMIN_DEFINED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_NO_CAADMIN_DEFINED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_BAD_RENEWAL_CERT_ATTRIBUTE));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_BAD_RENEWAL_CERT_ATTRIBUTE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_NO_DB_SESSIONS));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_NO_DB_SESSIONS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_ALIGNMENT_FAULT));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_ALIGNMENT_FAULT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_ENROLL_DENIED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_ENROLL_DENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_TEMPLATE_DENIED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_TEMPLATE_DENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_DOWNLEVEL_DC_SSL_OR_UPGRADE));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_DOWNLEVEL_DC_SSL_OR_UPGRADE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_UNSUPPORTED_CERT_TYPE));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_UNSUPPORTED_CERT_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_NO_CERT_TYPE));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_NO_CERT_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_TEMPLATE_CONFLICT));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_TEMPLATE_CONFLICT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_SUBJECT_ALT_NAME_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_SUBJECT_ALT_NAME_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_ARCHIVED_KEY_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_ARCHIVED_KEY_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_SMIME_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_SMIME_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_BAD_RENEWAL_SUBJECT));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_BAD_RENEWAL_SUBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_BAD_TEMPLATE_VERSION));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_BAD_TEMPLATE_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_TEMPLATE_POLICY_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_TEMPLATE_POLICY_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_SIGNATURE_POLICY_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_SIGNATURE_POLICY_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_SIGNATURE_COUNT));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_SIGNATURE_COUNT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_SIGNATURE_REJECTED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_SIGNATURE_REJECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_ISSUANCE_POLICY_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_ISSUANCE_POLICY_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_SUBJECT_UPN_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_SUBJECT_UPN_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_SUBJECT_DIRECTORY_GUID_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_SUBJECT_DIRECTORY_GUID_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_SUBJECT_DNS_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_SUBJECT_DNS_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_ARCHIVED_KEY_UNEXPECTED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_ARCHIVED_KEY_UNEXPECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_KEY_LENGTH));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_KEY_LENGTH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_SUBJECT_EMAIL_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_SUBJECT_EMAIL_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_UNKNOWN_CERT_TYPE));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_UNKNOWN_CERT_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_CERT_TYPE_OVERLAP));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_CERT_TYPE_OVERLAP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_TOO_MANY_SIGNATURES));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_TOO_MANY_SIGNATURES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_RENEWAL_BAD_PUBLIC_KEY));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_RENEWAL_BAD_PUBLIC_KEY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_INVALID_EK));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_INVALID_EK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERTSRV_E_KEY_ATTESTATION));
	ret = PyModule_AddObject(m, "HRES_CERTSRV_E_KEY_ATTESTATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XENROLL_E_KEY_NOT_EXPORTABLE));
	ret = PyModule_AddObject(m, "HRES_XENROLL_E_KEY_NOT_EXPORTABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XENROLL_E_CANNOT_ADD_ROOT_CERT));
	ret = PyModule_AddObject(m, "HRES_XENROLL_E_CANNOT_ADD_ROOT_CERT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XENROLL_E_RESPONSE_KA_HASH_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_XENROLL_E_RESPONSE_KA_HASH_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XENROLL_E_RESPONSE_UNEXPECTED_KA_HASH));
	ret = PyModule_AddObject(m, "HRES_XENROLL_E_RESPONSE_UNEXPECTED_KA_HASH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XENROLL_E_RESPONSE_KA_HASH_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_XENROLL_E_RESPONSE_KA_HASH_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_XENROLL_E_KEYSPEC_SMIME_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_XENROLL_E_KEYSPEC_SMIME_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRUST_E_SYSTEM_ERROR));
	ret = PyModule_AddObject(m, "HRES_TRUST_E_SYSTEM_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRUST_E_NO_SIGNER_CERT));
	ret = PyModule_AddObject(m, "HRES_TRUST_E_NO_SIGNER_CERT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRUST_E_COUNTER_SIGNER));
	ret = PyModule_AddObject(m, "HRES_TRUST_E_COUNTER_SIGNER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRUST_E_CERT_SIGNATURE));
	ret = PyModule_AddObject(m, "HRES_TRUST_E_CERT_SIGNATURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRUST_E_TIME_STAMP));
	ret = PyModule_AddObject(m, "HRES_TRUST_E_TIME_STAMP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRUST_E_BAD_DIGEST));
	ret = PyModule_AddObject(m, "HRES_TRUST_E_BAD_DIGEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRUST_E_BASIC_CONSTRAINTS));
	ret = PyModule_AddObject(m, "HRES_TRUST_E_BASIC_CONSTRAINTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRUST_E_FINANCIAL_CRITERIA));
	ret = PyModule_AddObject(m, "HRES_TRUST_E_FINANCIAL_CRITERIA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_OUTOFMEMRANGE));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_OUTOFMEMRANGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_CANTGETOBJECT));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_CANTGETOBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_NOHEADTABLE));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_NOHEADTABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_BAD_MAGICNUMBER));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_BAD_MAGICNUMBER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_BAD_OFFSET_TABLE));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_BAD_OFFSET_TABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_TABLE_TAGORDER));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_TABLE_TAGORDER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_TABLE_LONGWORD));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_TABLE_LONGWORD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_BAD_FIRST_TABLE_PLACEMENT));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_BAD_FIRST_TABLE_PLACEMENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_TABLES_OVERLAP));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_TABLES_OVERLAP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_TABLE_PADBYTES));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_TABLE_PADBYTES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_FILETOOSMALL));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_FILETOOSMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_TABLE_CHECKSUM));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_TABLE_CHECKSUM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_FILE_CHECKSUM));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_FILE_CHECKSUM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_FAILED_POLICY));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_FAILED_POLICY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_FAILED_HINTS_CHECK));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_FAILED_HINTS_CHECK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_NOT_OPENTYPE));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_NOT_OPENTYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_FILE));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_CRYPT));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_CRYPT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_BADVERSION));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_BADVERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_DSIG_STRUCTURE));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_DSIG_STRUCTURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_PCONST_CHECK));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_PCONST_CHECK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSSIPOTF_E_STRUCTURE));
	ret = PyModule_AddObject(m, "HRES_MSSIPOTF_E_STRUCTURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_CRED_REQUIRES_CONFIRMATION));
	ret = PyModule_AddObject(m, "HRES_ERROR_CRED_REQUIRES_CONFIRMATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRUST_E_PROVIDER_UNKNOWN));
	ret = PyModule_AddObject(m, "HRES_TRUST_E_PROVIDER_UNKNOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRUST_E_ACTION_UNKNOWN));
	ret = PyModule_AddObject(m, "HRES_TRUST_E_ACTION_UNKNOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRUST_E_SUBJECT_FORM_UNKNOWN));
	ret = PyModule_AddObject(m, "HRES_TRUST_E_SUBJECT_FORM_UNKNOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRUST_E_SUBJECT_NOT_TRUSTED));
	ret = PyModule_AddObject(m, "HRES_TRUST_E_SUBJECT_NOT_TRUSTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DIGSIG_E_ENCODE));
	ret = PyModule_AddObject(m, "HRES_DIGSIG_E_ENCODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DIGSIG_E_DECODE));
	ret = PyModule_AddObject(m, "HRES_DIGSIG_E_DECODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DIGSIG_E_EXTENSIBILITY));
	ret = PyModule_AddObject(m, "HRES_DIGSIG_E_EXTENSIBILITY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DIGSIG_E_CRYPTO));
	ret = PyModule_AddObject(m, "HRES_DIGSIG_E_CRYPTO", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PERSIST_E_SIZEDEFINITE));
	ret = PyModule_AddObject(m, "HRES_PERSIST_E_SIZEDEFINITE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PERSIST_E_SIZEINDEFINITE));
	ret = PyModule_AddObject(m, "HRES_PERSIST_E_SIZEINDEFINITE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PERSIST_E_NOTSELFSIZING));
	ret = PyModule_AddObject(m, "HRES_PERSIST_E_NOTSELFSIZING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRUST_E_NOSIGNATURE));
	ret = PyModule_AddObject(m, "HRES_TRUST_E_NOSIGNATURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_EXPIRED));
	ret = PyModule_AddObject(m, "HRES_CERT_E_EXPIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_VALIDITYPERIODNESTING));
	ret = PyModule_AddObject(m, "HRES_CERT_E_VALIDITYPERIODNESTING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_ROLE));
	ret = PyModule_AddObject(m, "HRES_CERT_E_ROLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_PATHLENCONST));
	ret = PyModule_AddObject(m, "HRES_CERT_E_PATHLENCONST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_CRITICAL));
	ret = PyModule_AddObject(m, "HRES_CERT_E_CRITICAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_PURPOSE));
	ret = PyModule_AddObject(m, "HRES_CERT_E_PURPOSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_ISSUERCHAINING));
	ret = PyModule_AddObject(m, "HRES_CERT_E_ISSUERCHAINING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_MALFORMED));
	ret = PyModule_AddObject(m, "HRES_CERT_E_MALFORMED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_UNTRUSTEDROOT));
	ret = PyModule_AddObject(m, "HRES_CERT_E_UNTRUSTEDROOT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_CHAINING));
	ret = PyModule_AddObject(m, "HRES_CERT_E_CHAINING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRUST_E_FAIL));
	ret = PyModule_AddObject(m, "HRES_TRUST_E_FAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_REVOKED));
	ret = PyModule_AddObject(m, "HRES_CERT_E_REVOKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_UNTRUSTEDTESTROOT));
	ret = PyModule_AddObject(m, "HRES_CERT_E_UNTRUSTEDTESTROOT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_REVOCATION_FAILURE));
	ret = PyModule_AddObject(m, "HRES_CERT_E_REVOCATION_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_CN_NO_MATCH));
	ret = PyModule_AddObject(m, "HRES_CERT_E_CN_NO_MATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_WRONG_USAGE));
	ret = PyModule_AddObject(m, "HRES_CERT_E_WRONG_USAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRUST_E_EXPLICIT_DISTRUST));
	ret = PyModule_AddObject(m, "HRES_TRUST_E_EXPLICIT_DISTRUST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_UNTRUSTEDCA));
	ret = PyModule_AddObject(m, "HRES_CERT_E_UNTRUSTEDCA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_INVALID_POLICY));
	ret = PyModule_AddObject(m, "HRES_CERT_E_INVALID_POLICY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_CERT_E_INVALID_NAME));
	ret = PyModule_AddObject(m, "HRES_CERT_E_INVALID_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_W_SERVER_BANDWIDTH_LIMIT));
	ret = PyModule_AddObject(m, "HRES_NS_W_SERVER_BANDWIDTH_LIMIT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_W_FILE_BANDWIDTH_LIMIT));
	ret = PyModule_AddObject(m, "HRES_NS_W_FILE_BANDWIDTH_LIMIT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_W_UNKNOWN_EVENT));
	ret = PyModule_AddObject(m, "HRES_NS_W_UNKNOWN_EVENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_CATATONIC_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_I_CATATONIC_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_I_CATATONIC_AUTO_UNFAIL));
	ret = PyModule_AddObject(m, "HRES_NS_I_CATATONIC_AUTO_UNFAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_EXPECTED_SECTION_NAME));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_EXPECTED_SECTION_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_BAD_SECTION_NAME_LINE));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_BAD_SECTION_NAME_LINE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_SECTION_NAME_TOO_LONG));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_SECTION_NAME_TOO_LONG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_GENERAL_SYNTAX));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_GENERAL_SYNTAX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_WRONG_INF_STYLE));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_WRONG_INF_STYLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_SECTION_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_SECTION_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_LINE_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_LINE_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_BACKUP));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_BACKUP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_ASSOCIATED_CLASS));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_ASSOCIATED_CLASS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_CLASS_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_CLASS_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DUPLICATE_FOUND));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DUPLICATE_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_DRIVER_SELECTED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_DRIVER_SELECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_KEY_DOES_NOT_EXIST));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_KEY_DOES_NOT_EXIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_INVALID_DEVINST_NAME));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_INVALID_DEVINST_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_INVALID_CLASS));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_INVALID_CLASS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DEVINST_ALREADY_EXISTS));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DEVINST_ALREADY_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DEVINFO_NOT_REGISTERED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DEVINFO_NOT_REGISTERED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_INVALID_REG_PROPERTY));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_INVALID_REG_PROPERTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_INF));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_INF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_SUCH_DEVINST));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_SUCH_DEVINST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_CANT_LOAD_CLASS_ICON));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_CANT_LOAD_CLASS_ICON", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_INVALID_CLASS_INSTALLER));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_INVALID_CLASS_INSTALLER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DI_DO_DEFAULT));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DI_DO_DEFAULT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DI_NOFILECOPY));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DI_NOFILECOPY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_INVALID_HWPROFILE));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_INVALID_HWPROFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_DEVICE_SELECTED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_DEVICE_SELECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DEVINFO_LIST_LOCKED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DEVINFO_LIST_LOCKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DEVINFO_DATA_LOCKED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DEVINFO_DATA_LOCKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DI_BAD_PATH));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DI_BAD_PATH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_CLASSINSTALL_PARAMS));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_CLASSINSTALL_PARAMS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_FILEQUEUE_LOCKED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_FILEQUEUE_LOCKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_BAD_SERVICE_INSTALLSECT));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_BAD_SERVICE_INSTALLSECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_CLASS_DRIVER_LIST));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_CLASS_DRIVER_LIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_ASSOCIATED_SERVICE));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_ASSOCIATED_SERVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_DEFAULT_DEVICE_INTERFACE));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_DEFAULT_DEVICE_INTERFACE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DEVICE_INTERFACE_ACTIVE));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DEVICE_INTERFACE_ACTIVE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DEVICE_INTERFACE_REMOVED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DEVICE_INTERFACE_REMOVED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_BAD_INTERFACE_INSTALLSECT));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_BAD_INTERFACE_INSTALLSECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_SUCH_INTERFACE_CLASS));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_SUCH_INTERFACE_CLASS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_INVALID_REFERENCE_STRING));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_INVALID_REFERENCE_STRING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_INVALID_MACHINENAME));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_INVALID_MACHINENAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_REMOTE_COMM_FAILURE));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_REMOTE_COMM_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_MACHINE_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_MACHINE_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_CONFIGMGR_SERVICES));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_CONFIGMGR_SERVICES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_INVALID_PROPPAGE_PROVIDER));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_INVALID_PROPPAGE_PROVIDER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_SUCH_DEVICE_INTERFACE));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_SUCH_DEVICE_INTERFACE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DI_POSTPROCESSING_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DI_POSTPROCESSING_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_INVALID_COINSTALLER));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_INVALID_COINSTALLER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_COMPAT_DRIVERS));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_COMPAT_DRIVERS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_DEVICE_ICON));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_DEVICE_ICON", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_INVALID_INF_LOGCONFIG));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_INVALID_INF_LOGCONFIG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DI_DONT_INSTALL));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DI_DONT_INSTALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_INVALID_FILTER_DRIVER));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_INVALID_FILTER_DRIVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NON_WINDOWS_NT_DRIVER));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NON_WINDOWS_NT_DRIVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NON_WINDOWS_DRIVER));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NON_WINDOWS_DRIVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_CATALOG_FOR_OEM_INF));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_CATALOG_FOR_OEM_INF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DEVINSTALL_QUEUE_NONNATIVE));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DEVINSTALL_QUEUE_NONNATIVE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NOT_DISABLEABLE));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NOT_DISABLEABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_CANT_REMOVE_DEVINST));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_CANT_REMOVE_DEVINST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_INVALID_TARGET));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_INVALID_TARGET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DRIVER_NONNATIVE));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DRIVER_NONNATIVE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_IN_WOW64));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_IN_WOW64", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_SET_SYSTEM_RESTORE_POINT));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_SET_SYSTEM_RESTORE_POINT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_INCORRECTLY_COPIED_INF));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_INCORRECTLY_COPIED_INF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_SCE_DISABLED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_SCE_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_UNKNOWN_EXCEPTION));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_UNKNOWN_EXCEPTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_PNP_REGISTRY_ERROR));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_PNP_REGISTRY_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_REMOTE_REQUEST_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_REMOTE_REQUEST_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NOT_AN_INSTALLED_OEM_INF));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NOT_AN_INSTALLED_OEM_INF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_INF_IN_USE_BY_DEVICES));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_INF_IN_USE_BY_DEVICES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DI_FUNCTION_OBSOLETE));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DI_FUNCTION_OBSOLETE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_NO_AUTHENTICODE_CATALOG));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_NO_AUTHENTICODE_CATALOG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_AUTHENTICODE_DISALLOWED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_AUTHENTICODE_DISALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_AUTHENTICODE_TRUSTED_PUBLISHER));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_AUTHENTICODE_TRUSTED_PUBLISHER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_AUTHENTICODE_TRUST_NOT_ESTABLISHED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_AUTHENTICODE_TRUST_NOT_ESTABLISHED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_AUTHENTICODE_PUBLISHER_NOT_TRUSTED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_AUTHENTICODE_PUBLISHER_NOT_TRUSTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_SIGNATURE_OSATTRIBUTE_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_SIGNATURE_OSATTRIBUTE_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_ONLY_VALIDATE_VIA_AUTHENTICODE));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_ONLY_VALIDATE_VIA_AUTHENTICODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DEVICE_INSTALLER_NOT_READY));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DEVICE_INSTALLER_NOT_READY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DRIVER_STORE_ADD_FAILED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DRIVER_STORE_ADD_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DEVICE_INSTALL_BLOCKED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DEVICE_INSTALL_BLOCKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DRIVER_INSTALL_BLOCKED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DRIVER_INSTALL_BLOCKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_WRONG_INF_TYPE));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_WRONG_INF_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_FILE_HASH_NOT_IN_CATALOG));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_FILE_HASH_NOT_IN_CATALOG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_DRIVER_STORE_DELETE_FAILED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_DRIVER_STORE_DELETE_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_UNRECOVERABLE_STACK_OVERFLOW));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_UNRECOVERABLE_STACK_OVERFLOW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SPAPI_E_ERROR_NOT_INSTALLED));
	ret = PyModule_AddObject(m, "HRES_SPAPI_E_ERROR_NOT_INSTALLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_F_INTERNAL_ERROR));
	ret = PyModule_AddObject(m, "HRES_SCARD_F_INTERNAL_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_CANCELLED));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_CANCELLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_INVALID_HANDLE));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_INVALID_HANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_INVALID_PARAMETER));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_INVALID_PARAMETER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_INVALID_TARGET));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_INVALID_TARGET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_NO_MEMORY));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_NO_MEMORY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_F_WAITED_TOO_LONG));
	ret = PyModule_AddObject(m, "HRES_SCARD_F_WAITED_TOO_LONG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_INSUFFICIENT_BUFFER));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_INSUFFICIENT_BUFFER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_UNKNOWN_READER));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_UNKNOWN_READER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_SHARING_VIOLATION));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_SHARING_VIOLATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_NO_SMARTCARD));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_NO_SMARTCARD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_UNKNOWN_CARD));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_UNKNOWN_CARD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_CANT_DISPOSE));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_CANT_DISPOSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_PROTO_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_PROTO_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_NOT_READY));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_NOT_READY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_INVALID_VALUE));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_INVALID_VALUE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_SYSTEM_CANCELLED));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_SYSTEM_CANCELLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_F_COMM_ERROR));
	ret = PyModule_AddObject(m, "HRES_SCARD_F_COMM_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_F_UNKNOWN_ERROR));
	ret = PyModule_AddObject(m, "HRES_SCARD_F_UNKNOWN_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_INVALID_ATR));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_INVALID_ATR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_NOT_TRANSACTED));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_NOT_TRANSACTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_READER_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_READER_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_P_SHUTDOWN));
	ret = PyModule_AddObject(m, "HRES_SCARD_P_SHUTDOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_PCI_TOO_SMALL));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_PCI_TOO_SMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_READER_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_READER_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_DUPLICATE_READER));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_DUPLICATE_READER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_CARD_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_CARD_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_NO_SERVICE));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_NO_SERVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_SERVICE_STOPPED));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_SERVICE_STOPPED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_UNEXPECTED));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_UNEXPECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_ICC_INSTALLATION));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_ICC_INSTALLATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_ICC_CREATEORDER));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_ICC_CREATEORDER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_UNSUPPORTED_FEATURE));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_UNSUPPORTED_FEATURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_DIR_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_DIR_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_FILE_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_FILE_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_NO_DIR));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_NO_DIR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_NO_FILE));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_NO_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_NO_ACCESS));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_NO_ACCESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_WRITE_TOO_MANY));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_WRITE_TOO_MANY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_BAD_SEEK));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_BAD_SEEK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_INVALID_CHV));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_INVALID_CHV", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_UNKNOWN_RES_MNG));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_UNKNOWN_RES_MNG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_NO_SUCH_CERTIFICATE));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_NO_SUCH_CERTIFICATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_CERTIFICATE_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_CERTIFICATE_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_NO_READERS_AVAILABLE));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_NO_READERS_AVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_COMM_DATA_LOST));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_COMM_DATA_LOST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_NO_KEY_CONTAINER));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_NO_KEY_CONTAINER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_E_SERVER_TOO_BUSY));
	ret = PyModule_AddObject(m, "HRES_SCARD_E_SERVER_TOO_BUSY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_W_UNSUPPORTED_CARD));
	ret = PyModule_AddObject(m, "HRES_SCARD_W_UNSUPPORTED_CARD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_W_UNRESPONSIVE_CARD));
	ret = PyModule_AddObject(m, "HRES_SCARD_W_UNRESPONSIVE_CARD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_W_UNPOWERED_CARD));
	ret = PyModule_AddObject(m, "HRES_SCARD_W_UNPOWERED_CARD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_W_RESET_CARD));
	ret = PyModule_AddObject(m, "HRES_SCARD_W_RESET_CARD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_W_REMOVED_CARD));
	ret = PyModule_AddObject(m, "HRES_SCARD_W_REMOVED_CARD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_W_SECURITY_VIOLATION));
	ret = PyModule_AddObject(m, "HRES_SCARD_W_SECURITY_VIOLATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_W_WRONG_CHV));
	ret = PyModule_AddObject(m, "HRES_SCARD_W_WRONG_CHV", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_W_CHV_BLOCKED));
	ret = PyModule_AddObject(m, "HRES_SCARD_W_CHV_BLOCKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_W_EOF));
	ret = PyModule_AddObject(m, "HRES_SCARD_W_EOF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_W_CANCELLED_BY_USER));
	ret = PyModule_AddObject(m, "HRES_SCARD_W_CANCELLED_BY_USER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_SCARD_W_CARD_NOT_AUTHENTICATED));
	ret = PyModule_AddObject(m, "HRES_SCARD_W_CARD_NOT_AUTHENTICATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_OBJECTERRORS));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_OBJECTERRORS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_OBJECTINVALID));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_OBJECTINVALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_KEYMISSING));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_KEYMISSING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_ALREADYINSTALLED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_ALREADYINSTALLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_APP_FILE_WRITEFAIL));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_APP_FILE_WRITEFAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_APP_FILE_READFAIL));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_APP_FILE_READFAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_APP_FILE_VERSION));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_APP_FILE_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_BADPATH));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_BADPATH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_APPLICATIONEXISTS));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_APPLICATIONEXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_ROLEEXISTS));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_ROLEEXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CANTCOPYFILE));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CANTCOPYFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_NOUSER));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_NOUSER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_INVALIDUSERIDS));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_INVALIDUSERIDS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_NOREGISTRYCLSID));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_NOREGISTRYCLSID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_BADREGISTRYPROGID));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_BADREGISTRYPROGID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_AUTHENTICATIONLEVEL));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_AUTHENTICATIONLEVEL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_USERPASSWDNOTVALID));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_USERPASSWDNOTVALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CLSIDORIIDMISMATCH));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CLSIDORIIDMISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_REMOTEINTERFACE));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_REMOTEINTERFACE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_DLLREGISTERSERVER));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_DLLREGISTERSERVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_NOSERVERSHARE));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_NOSERVERSHARE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_DLLLOADFAILED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_DLLLOADFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_BADREGISTRYLIBID));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_BADREGISTRYLIBID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_APPDIRNOTFOUND));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_APPDIRNOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_REGISTRARFAILED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_REGISTRARFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_COMPFILE_DOESNOTEXIST));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_COMPFILE_DOESNOTEXIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_COMPFILE_LOADDLLFAIL));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_COMPFILE_LOADDLLFAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_COMPFILE_GETCLASSOBJ));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_COMPFILE_GETCLASSOBJ", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_COMPFILE_CLASSNOTAVAIL));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_COMPFILE_CLASSNOTAVAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_COMPFILE_BADTLB));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_COMPFILE_BADTLB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_COMPFILE_NOTINSTALLABLE));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_COMPFILE_NOTINSTALLABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_NOTCHANGEABLE));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_NOTCHANGEABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_NOTDELETEABLE));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_NOTDELETEABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_SESSION));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_SESSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_COMP_MOVE_LOCKED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_COMP_MOVE_LOCKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_COMP_MOVE_BAD_DEST));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_COMP_MOVE_BAD_DEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_REGISTERTLB));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_REGISTERTLB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_SYSTEMAPP));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_SYSTEMAPP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_COMPFILE_NOREGISTRAR));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_COMPFILE_NOREGISTRAR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_COREQCOMPINSTALLED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_COREQCOMPINSTALLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_SERVICENOTINSTALLED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_SERVICENOTINSTALLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_PROPERTYSAVEFAILED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_PROPERTYSAVEFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_OBJECTEXISTS));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_OBJECTEXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_COMPONENTEXISTS));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_COMPONENTEXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_REGFILE_CORRUPT));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_REGFILE_CORRUPT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_PROPERTY_OVERFLOW));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_PROPERTY_OVERFLOW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_NOTINREGISTRY));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_NOTINREGISTRY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_OBJECTNOTPOOLABLE));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_OBJECTNOTPOOLABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_APPLID_MATCHES_CLSID));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_APPLID_MATCHES_CLSID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_ROLE_DOES_NOT_EXIST));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_ROLE_DOES_NOT_EXIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_START_APP_NEEDS_COMPONENTS));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_START_APP_NEEDS_COMPONENTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_REQUIRES_DIFFERENT_PLATFORM));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_REQUIRES_DIFFERENT_PLATFORM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CAN_NOT_EXPORT_APP_PROXY));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CAN_NOT_EXPORT_APP_PROXY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CAN_NOT_START_APP));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CAN_NOT_START_APP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CAN_NOT_EXPORT_SYS_APP));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CAN_NOT_EXPORT_SYS_APP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CANT_SUBSCRIBE_TO_COMPONENT));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CANT_SUBSCRIBE_TO_COMPONENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_EVENTCLASS_CANT_BE_SUBSCRIBER));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_EVENTCLASS_CANT_BE_SUBSCRIBER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_LIB_APP_PROXY_INCOMPATIBLE));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_LIB_APP_PROXY_INCOMPATIBLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_BASE_PARTITION_ONLY));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_BASE_PARTITION_ONLY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_START_APP_DISABLED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_START_APP_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CAT_DUPLICATE_PARTITION_NAME));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CAT_DUPLICATE_PARTITION_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CAT_INVALID_PARTITION_NAME));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CAT_INVALID_PARTITION_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CAT_PARTITION_IN_USE));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CAT_PARTITION_IN_USE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_FILE_PARTITION_DUPLICATE_FILES));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_FILE_PARTITION_DUPLICATE_FILES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CAT_IMPORTED_COMPONENTS_NOT_ALLOWED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CAT_IMPORTED_COMPONENTS_NOT_ALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_AMBIGUOUS_APPLICATION_NAME));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_AMBIGUOUS_APPLICATION_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_AMBIGUOUS_PARTITION_NAME));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_AMBIGUOUS_PARTITION_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_REGDB_NOTINITIALIZED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_REGDB_NOTINITIALIZED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_REGDB_NOTOPEN));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_REGDB_NOTOPEN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_REGDB_SYSTEMERR));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_REGDB_SYSTEMERR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_REGDB_ALREADYRUNNING));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_REGDB_ALREADYRUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_MIG_VERSIONNOTSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_MIG_VERSIONNOTSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_MIG_SCHEMANOTFOUND));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_MIG_SCHEMANOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CAT_BITNESSMISMATCH));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CAT_BITNESSMISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CAT_UNACCEPTABLEBITNESS));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CAT_UNACCEPTABLEBITNESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CAT_WRONGAPPBITNESS));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CAT_WRONGAPPBITNESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CAT_PAUSE_RESUME_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CAT_PAUSE_RESUME_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CAT_SERVERFAULT));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CAT_SERVERFAULT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMQC_E_APPLICATION_NOT_QUEUED));
	ret = PyModule_AddObject(m, "HRES_COMQC_E_APPLICATION_NOT_QUEUED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMQC_E_NO_QUEUEABLE_INTERFACES));
	ret = PyModule_AddObject(m, "HRES_COMQC_E_NO_QUEUEABLE_INTERFACES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMQC_E_QUEUING_SERVICE_NOT_AVAILABLE));
	ret = PyModule_AddObject(m, "HRES_COMQC_E_QUEUING_SERVICE_NOT_AVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMQC_E_NO_IPERSISTSTREAM));
	ret = PyModule_AddObject(m, "HRES_COMQC_E_NO_IPERSISTSTREAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMQC_E_BAD_MESSAGE));
	ret = PyModule_AddObject(m, "HRES_COMQC_E_BAD_MESSAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMQC_E_UNAUTHENTICATED));
	ret = PyModule_AddObject(m, "HRES_COMQC_E_UNAUTHENTICATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMQC_E_UNTRUSTED_ENQUEUER));
	ret = PyModule_AddObject(m, "HRES_COMQC_E_UNTRUSTED_ENQUEUER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MSDTC_E_DUPLICATE_RESOURCE));
	ret = PyModule_AddObject(m, "HRES_MSDTC_E_DUPLICATE_RESOURCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_OBJECT_PARENT_MISSING));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_OBJECT_PARENT_MISSING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_OBJECT_DOES_NOT_EXIST));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_OBJECT_DOES_NOT_EXIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_APP_NOT_RUNNING));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_APP_NOT_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_INVALID_PARTITION));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_INVALID_PARTITION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_SVCAPP_NOT_POOLABLE_OR_RECYCLABLE));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_SVCAPP_NOT_POOLABLE_OR_RECYCLABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_USER_IN_SET));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_USER_IN_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CANTRECYCLELIBRARYAPPS));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CANTRECYCLELIBRARYAPPS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CANTRECYCLESERVICEAPPS));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CANTRECYCLESERVICEAPPS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_PROCESSALREADYRECYCLED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_PROCESSALREADYRECYCLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_PAUSEDPROCESSMAYNOTBERECYCLED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_PAUSEDPROCESSMAYNOTBERECYCLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CANTMAKEINPROCSERVICE));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CANTMAKEINPROCSERVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_PROGIDINUSEBYCLSID));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_PROGIDINUSEBYCLSID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_DEFAULT_PARTITION_NOT_IN_SET));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_DEFAULT_PARTITION_NOT_IN_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_RECYCLEDPROCESSMAYNOTBEPAUSED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_RECYCLEDPROCESSMAYNOTBEPAUSED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_PARTITION_ACCESSDENIED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_PARTITION_ACCESSDENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_PARTITION_MSI_ONLY));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_PARTITION_MSI_ONLY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_LEGACYCOMPS_NOT_ALLOWED_IN_1_0_FORMAT));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_LEGACYCOMPS_NOT_ALLOWED_IN_1_0_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_LEGACYCOMPS_NOT_ALLOWED_IN_NONBASE_PARTITIONS));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_LEGACYCOMPS_NOT_ALLOWED_IN_NONBASE_PARTITIONS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_COMP_MOVE_SOURCE));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_COMP_MOVE_SOURCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_COMP_MOVE_DEST));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_COMP_MOVE_DEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_COMP_MOVE_PRIVATE));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_COMP_MOVE_PRIVATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_BASEPARTITION_REQUIRED_IN_SET));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_BASEPARTITION_REQUIRED_IN_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_CANNOT_ALIAS_EVENTCLASS));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_CANNOT_ALIAS_EVENTCLASS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_PRIVATE_ACCESSDENIED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_PRIVATE_ACCESSDENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_SAFERINVALID));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_SAFERINVALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_REGISTRY_ACCESSDENIED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_REGISTRY_ACCESSDENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_COMADMIN_E_PARTITIONS_DISABLED));
	ret = PyModule_AddObject(m, "HRES_COMADMIN_E_PARTITIONS_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_NO_HANDLER_DEFINED));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_NO_HANDLER_DEFINED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_CONTEXT_ALREADY_DEFINED));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_CONTEXT_ALREADY_DEFINED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_INVALID_ASYNCHRONOUS_REQUEST));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_INVALID_ASYNCHRONOUS_REQUEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_DISALLOW_FAST_IO));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_DISALLOW_FAST_IO", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_INVALID_NAME_REQUEST));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_INVALID_NAME_REQUEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_NOT_SAFE_TO_POST_OPERATION));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_NOT_SAFE_TO_POST_OPERATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_NOT_INITIALIZED));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_NOT_INITIALIZED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_FILTER_NOT_READY));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_FILTER_NOT_READY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_POST_OPERATION_CLEANUP));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_POST_OPERATION_CLEANUP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_INTERNAL_ERROR));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_INTERNAL_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_DELETING_OBJECT));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_DELETING_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_MUST_BE_NONPAGED_POOL));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_MUST_BE_NONPAGED_POOL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_DUPLICATE_ENTRY));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_DUPLICATE_ENTRY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_CBDQ_DISABLED));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_CBDQ_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_DO_NOT_ATTACH));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_DO_NOT_ATTACH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_DO_NOT_DETACH));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_DO_NOT_DETACH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_INSTANCE_ALTITUDE_COLLISION));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_INSTANCE_ALTITUDE_COLLISION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_INSTANCE_NAME_COLLISION));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_INSTANCE_NAME_COLLISION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_FILTER_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_FILTER_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_VOLUME_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_VOLUME_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_INSTANCE_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_INSTANCE_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_CONTEXT_ALLOCATION_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_CONTEXT_ALLOCATION_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_INVALID_CONTEXT_REGISTRATION));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_INVALID_CONTEXT_REGISTRATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_NAME_CACHE_MISS));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_NAME_CACHE_MISS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_NO_DEVICE_OBJECT));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_NO_DEVICE_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_VOLUME_ALREADY_MOUNTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_VOLUME_ALREADY_MOUNTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_ALREADY_ENLISTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_ALREADY_ENLISTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_CONTEXT_ALREADY_LINKED));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_CONTEXT_ALREADY_LINKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_FLT_NO_WAITER_FOR_REPLY));
	ret = PyModule_AddObject(m, "HRES_ERROR_FLT_NO_WAITER_FOR_REPLY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_HUNG_DISPLAY_DRIVER_THREAD));
	ret = PyModule_AddObject(m, "HRES_ERROR_HUNG_DISPLAY_DRIVER_THREAD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_MONITOR_NO_DESCRIPTOR));
	ret = PyModule_AddObject(m, "HRES_ERROR_MONITOR_NO_DESCRIPTOR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_MONITOR_UNKNOWN_DESCRIPTOR_FORMAT));
	ret = PyModule_AddObject(m, "HRES_ERROR_MONITOR_UNKNOWN_DESCRIPTOR_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DWM_E_COMPOSITIONDISABLED));
	ret = PyModule_AddObject(m, "HRES_DWM_E_COMPOSITIONDISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DWM_E_REMOTING_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_DWM_E_REMOTING_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DWM_E_NO_REDIRECTION_SURFACE_AVAILABLE));
	ret = PyModule_AddObject(m, "HRES_DWM_E_NO_REDIRECTION_SURFACE_AVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_DWM_E_NOT_QUEUING_PRESENTS));
	ret = PyModule_AddObject(m, "HRES_DWM_E_NOT_QUEUING_PRESENTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_ERROR_MASK));
	ret = PyModule_AddObject(m, "HRES_TPM_E_ERROR_MASK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_AUTHFAIL));
	ret = PyModule_AddObject(m, "HRES_TPM_E_AUTHFAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BADINDEX));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BADINDEX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_PARAMETER));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_PARAMETER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_AUDITFAILURE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_AUDITFAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_CLEAR_DISABLED));
	ret = PyModule_AddObject(m, "HRES_TPM_E_CLEAR_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DEACTIVATED));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DEACTIVATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DISABLED));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DISABLED_CMD));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DISABLED_CMD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_FAIL));
	ret = PyModule_AddObject(m, "HRES_TPM_E_FAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_ORDINAL));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_ORDINAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_INSTALL_DISABLED));
	ret = PyModule_AddObject(m, "HRES_TPM_E_INSTALL_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_INVALID_KEYHANDLE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_INVALID_KEYHANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_KEYNOTFOUND));
	ret = PyModule_AddObject(m, "HRES_TPM_E_KEYNOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_INAPPROPRIATE_ENC));
	ret = PyModule_AddObject(m, "HRES_TPM_E_INAPPROPRIATE_ENC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_MIGRATEFAIL));
	ret = PyModule_AddObject(m, "HRES_TPM_E_MIGRATEFAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_INVALID_PCR_INFO));
	ret = PyModule_AddObject(m, "HRES_TPM_E_INVALID_PCR_INFO", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_NOSPACE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_NOSPACE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_NOSRK));
	ret = PyModule_AddObject(m, "HRES_TPM_E_NOSRK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_NOTSEALED_BLOB));
	ret = PyModule_AddObject(m, "HRES_TPM_E_NOTSEALED_BLOB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_OWNER_SET));
	ret = PyModule_AddObject(m, "HRES_TPM_E_OWNER_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_RESOURCES));
	ret = PyModule_AddObject(m, "HRES_TPM_E_RESOURCES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_SHORTRANDOM));
	ret = PyModule_AddObject(m, "HRES_TPM_E_SHORTRANDOM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_SIZE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_SIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_WRONGPCRVAL));
	ret = PyModule_AddObject(m, "HRES_TPM_E_WRONGPCRVAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_PARAM_SIZE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_PARAM_SIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_SHA_THREAD));
	ret = PyModule_AddObject(m, "HRES_TPM_E_SHA_THREAD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_SHA_ERROR));
	ret = PyModule_AddObject(m, "HRES_TPM_E_SHA_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_FAILEDSELFTEST));
	ret = PyModule_AddObject(m, "HRES_TPM_E_FAILEDSELFTEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_AUTH2FAIL));
	ret = PyModule_AddObject(m, "HRES_TPM_E_AUTH2FAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BADTAG));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BADTAG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_IOERROR));
	ret = PyModule_AddObject(m, "HRES_TPM_E_IOERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_ENCRYPT_ERROR));
	ret = PyModule_AddObject(m, "HRES_TPM_E_ENCRYPT_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DECRYPT_ERROR));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DECRYPT_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_INVALID_AUTHHANDLE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_INVALID_AUTHHANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_NO_ENDORSEMENT));
	ret = PyModule_AddObject(m, "HRES_TPM_E_NO_ENDORSEMENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_INVALID_KEYUSAGE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_INVALID_KEYUSAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_WRONG_ENTITYTYPE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_WRONG_ENTITYTYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_INVALID_POSTINIT));
	ret = PyModule_AddObject(m, "HRES_TPM_E_INVALID_POSTINIT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_INAPPROPRIATE_SIG));
	ret = PyModule_AddObject(m, "HRES_TPM_E_INAPPROPRIATE_SIG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_KEY_PROPERTY));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_KEY_PROPERTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_MIGRATION));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_MIGRATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_SCHEME));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_SCHEME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_DATASIZE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_DATASIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_MODE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_MODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_PRESENCE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_PRESENCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_VERSION));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_NO_WRAP_TRANSPORT));
	ret = PyModule_AddObject(m, "HRES_TPM_E_NO_WRAP_TRANSPORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_AUDITFAIL_UNSUCCESSFUL));
	ret = PyModule_AddObject(m, "HRES_TPM_E_AUDITFAIL_UNSUCCESSFUL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_AUDITFAIL_SUCCESSFUL));
	ret = PyModule_AddObject(m, "HRES_TPM_E_AUDITFAIL_SUCCESSFUL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_NOTRESETABLE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_NOTRESETABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_NOTLOCAL));
	ret = PyModule_AddObject(m, "HRES_TPM_E_NOTLOCAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_TYPE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_INVALID_RESOURCE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_INVALID_RESOURCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_NOTFIPS));
	ret = PyModule_AddObject(m, "HRES_TPM_E_NOTFIPS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_INVALID_FAMILY));
	ret = PyModule_AddObject(m, "HRES_TPM_E_INVALID_FAMILY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_NO_NV_PERMISSION));
	ret = PyModule_AddObject(m, "HRES_TPM_E_NO_NV_PERMISSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_REQUIRES_SIGN));
	ret = PyModule_AddObject(m, "HRES_TPM_E_REQUIRES_SIGN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_KEY_NOTSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_TPM_E_KEY_NOTSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_AUTH_CONFLICT));
	ret = PyModule_AddObject(m, "HRES_TPM_E_AUTH_CONFLICT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_AREA_LOCKED));
	ret = PyModule_AddObject(m, "HRES_TPM_E_AREA_LOCKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_LOCALITY));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_LOCALITY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_READ_ONLY));
	ret = PyModule_AddObject(m, "HRES_TPM_E_READ_ONLY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_PER_NOWRITE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_PER_NOWRITE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_FAMILYCOUNT));
	ret = PyModule_AddObject(m, "HRES_TPM_E_FAMILYCOUNT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_WRITE_LOCKED));
	ret = PyModule_AddObject(m, "HRES_TPM_E_WRITE_LOCKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_ATTRIBUTES));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_ATTRIBUTES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_INVALID_STRUCTURE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_INVALID_STRUCTURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_KEY_OWNER_CONTROL));
	ret = PyModule_AddObject(m, "HRES_TPM_E_KEY_OWNER_CONTROL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_COUNTER));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_COUNTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_NOT_FULLWRITE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_NOT_FULLWRITE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_CONTEXT_GAP));
	ret = PyModule_AddObject(m, "HRES_TPM_E_CONTEXT_GAP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_MAXNVWRITES));
	ret = PyModule_AddObject(m, "HRES_TPM_E_MAXNVWRITES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_NOOPERATOR));
	ret = PyModule_AddObject(m, "HRES_TPM_E_NOOPERATOR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_RESOURCEMISSING));
	ret = PyModule_AddObject(m, "HRES_TPM_E_RESOURCEMISSING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DELEGATE_LOCK));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DELEGATE_LOCK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DELEGATE_FAMILY));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DELEGATE_FAMILY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DELEGATE_ADMIN));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DELEGATE_ADMIN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_TRANSPORT_NOTEXCLUSIVE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_TRANSPORT_NOTEXCLUSIVE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_OWNER_CONTROL));
	ret = PyModule_AddObject(m, "HRES_TPM_E_OWNER_CONTROL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DAA_RESOURCES));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DAA_RESOURCES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DAA_INPUT_DATA0));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DAA_INPUT_DATA0", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DAA_INPUT_DATA1));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DAA_INPUT_DATA1", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DAA_ISSUER_SETTINGS));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DAA_ISSUER_SETTINGS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DAA_TPM_SETTINGS));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DAA_TPM_SETTINGS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DAA_STAGE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DAA_STAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DAA_ISSUER_VALIDITY));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DAA_ISSUER_VALIDITY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DAA_WRONG_W));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DAA_WRONG_W", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_HANDLE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_HANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_DELEGATE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_DELEGATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BADCONTEXT));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BADCONTEXT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_TOOMANYCONTEXTS));
	ret = PyModule_AddObject(m, "HRES_TPM_E_TOOMANYCONTEXTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_MA_TICKET_SIGNATURE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_MA_TICKET_SIGNATURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_MA_DESTINATION));
	ret = PyModule_AddObject(m, "HRES_TPM_E_MA_DESTINATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_MA_SOURCE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_MA_SOURCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_MA_AUTHORITY));
	ret = PyModule_AddObject(m, "HRES_TPM_E_MA_AUTHORITY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_PERMANENTEK));
	ret = PyModule_AddObject(m, "HRES_TPM_E_PERMANENTEK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_BAD_SIGNATURE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_BAD_SIGNATURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_NOCONTEXTSPACE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_NOCONTEXTSPACE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_COMMAND_BLOCKED));
	ret = PyModule_AddObject(m, "HRES_TPM_E_COMMAND_BLOCKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_INVALID_HANDLE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_INVALID_HANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DUPLICATE_VHANDLE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DUPLICATE_VHANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_EMBEDDED_COMMAND_BLOCKED));
	ret = PyModule_AddObject(m, "HRES_TPM_E_EMBEDDED_COMMAND_BLOCKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_EMBEDDED_COMMAND_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_TPM_E_EMBEDDED_COMMAND_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_RETRY));
	ret = PyModule_AddObject(m, "HRES_TPM_E_RETRY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_NEEDS_SELFTEST));
	ret = PyModule_AddObject(m, "HRES_TPM_E_NEEDS_SELFTEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DOING_SELFTEST));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DOING_SELFTEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_DEFEND_LOCK_RUNNING));
	ret = PyModule_AddObject(m, "HRES_TPM_E_DEFEND_LOCK_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBS_E_INTERNAL_ERROR));
	ret = PyModule_AddObject(m, "HRES_TBS_E_INTERNAL_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBS_E_BAD_PARAMETER));
	ret = PyModule_AddObject(m, "HRES_TBS_E_BAD_PARAMETER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBS_E_INVALID_OUTPUT_POINTER));
	ret = PyModule_AddObject(m, "HRES_TBS_E_INVALID_OUTPUT_POINTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBS_E_INVALID_CONTEXT));
	ret = PyModule_AddObject(m, "HRES_TBS_E_INVALID_CONTEXT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBS_E_INSUFFICIENT_BUFFER));
	ret = PyModule_AddObject(m, "HRES_TBS_E_INSUFFICIENT_BUFFER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBS_E_IOERROR));
	ret = PyModule_AddObject(m, "HRES_TBS_E_IOERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBS_E_INVALID_CONTEXT_PARAM));
	ret = PyModule_AddObject(m, "HRES_TBS_E_INVALID_CONTEXT_PARAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBS_E_SERVICE_NOT_RUNNING));
	ret = PyModule_AddObject(m, "HRES_TBS_E_SERVICE_NOT_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBS_E_TOO_MANY_TBS_CONTEXTS));
	ret = PyModule_AddObject(m, "HRES_TBS_E_TOO_MANY_TBS_CONTEXTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBS_E_TOO_MANY_RESOURCES));
	ret = PyModule_AddObject(m, "HRES_TBS_E_TOO_MANY_RESOURCES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBS_E_SERVICE_START_PENDING));
	ret = PyModule_AddObject(m, "HRES_TBS_E_SERVICE_START_PENDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBS_E_PPI_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_TBS_E_PPI_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBS_E_COMMAND_CANCELED));
	ret = PyModule_AddObject(m, "HRES_TBS_E_COMMAND_CANCELED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBS_E_BUFFER_TOO_LARGE));
	ret = PyModule_AddObject(m, "HRES_TBS_E_BUFFER_TOO_LARGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_INVALID_STATE));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_INVALID_STATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_NOT_ENOUGH_DATA));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_NOT_ENOUGH_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_TOO_MUCH_DATA));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_TOO_MUCH_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_INVALID_OUTPUT_POINTER));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_INVALID_OUTPUT_POINTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_INVALID_PARAMETER));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_INVALID_PARAMETER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_OUT_OF_MEMORY));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_OUT_OF_MEMORY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_BUFFER_TOO_SMALL));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_BUFFER_TOO_SMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_INTERNAL_ERROR));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_INTERNAL_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_ACCESS_DENIED));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_ACCESS_DENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_AUTHORIZATION_FAILED));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_AUTHORIZATION_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_INVALID_CONTEXT_HANDLE));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_INVALID_CONTEXT_HANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_TBS_COMMUNICATION_ERROR));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_TBS_COMMUNICATION_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_TPM_COMMAND_ERROR));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_TPM_COMMAND_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_MESSAGE_TOO_LARGE));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_MESSAGE_TOO_LARGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_INVALID_ENCODING));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_INVALID_ENCODING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_INVALID_KEY_SIZE));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_INVALID_KEY_SIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_ENCRYPTION_FAILED));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_ENCRYPTION_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_INVALID_KEY_PARAMS));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_INVALID_KEY_PARAMS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_INVALID_MIGRATION_AUTHORIZATION_BLOB));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_INVALID_MIGRATION_AUTHORIZATION_BLOB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_INVALID_PCR_INDEX));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_INVALID_PCR_INDEX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_INVALID_DELEGATE_BLOB));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_INVALID_DELEGATE_BLOB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_INVALID_CONTEXT_PARAMS));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_INVALID_CONTEXT_PARAMS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_INVALID_KEY_BLOB));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_INVALID_KEY_BLOB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_INVALID_PCR_DATA));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_INVALID_PCR_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPMAPI_E_INVALID_OWNER_AUTH));
	ret = PyModule_AddObject(m, "HRES_TPMAPI_E_INVALID_OWNER_AUTH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_BUFFER_TOO_SMALL));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_BUFFER_TOO_SMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_CLEANUP_FAILED));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_CLEANUP_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_INVALID_CONTEXT_HANDLE));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_INVALID_CONTEXT_HANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_INVALID_CONTEXT_PARAM));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_INVALID_CONTEXT_PARAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_TPM_ERROR));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_TPM_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_HASH_BAD_KEY));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_HASH_BAD_KEY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_DUPLICATE_VHANDLE));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_DUPLICATE_VHANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_INVALID_OUTPUT_POINTER));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_INVALID_OUTPUT_POINTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_INVALID_PARAMETER));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_INVALID_PARAMETER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_RPC_INIT_FAILED));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_RPC_INIT_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_SCHEDULER_NOT_RUNNING));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_SCHEDULER_NOT_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_COMMAND_CANCELED));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_COMMAND_CANCELED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_OUT_OF_MEMORY));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_OUT_OF_MEMORY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_LIST_NO_MORE_ITEMS));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_LIST_NO_MORE_ITEMS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_LIST_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_LIST_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_NOT_ENOUGH_SPACE));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_NOT_ENOUGH_SPACE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_NOT_ENOUGH_TPM_CONTEXTS));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_NOT_ENOUGH_TPM_CONTEXTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_COMMAND_FAILED));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_COMMAND_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_UNKNOWN_ORDINAL));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_UNKNOWN_ORDINAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_RESOURCE_EXPIRED));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_RESOURCE_EXPIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_INVALID_RESOURCE));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_INVALID_RESOURCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_NOTHING_TO_UNLOAD));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_NOTHING_TO_UNLOAD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_HASH_TABLE_FULL));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_HASH_TABLE_FULL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_TOO_MANY_TBS_CONTEXTS));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_TOO_MANY_TBS_CONTEXTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_TOO_MANY_RESOURCES));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_TOO_MANY_RESOURCES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_PPI_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_PPI_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TBSIMP_E_TPM_INCOMPATIBLE));
	ret = PyModule_AddObject(m, "HRES_TBSIMP_E_TPM_INCOMPATIBLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_PPI_ACPI_FAILURE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_PPI_ACPI_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_PPI_USER_ABORT));
	ret = PyModule_AddObject(m, "HRES_TPM_E_PPI_USER_ABORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_PPI_BIOS_FAILURE));
	ret = PyModule_AddObject(m, "HRES_TPM_E_PPI_BIOS_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TPM_E_PPI_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_TPM_E_PPI_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_DCS_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_PLA_E_DCS_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_TOO_MANY_FOLDERS));
	ret = PyModule_AddObject(m, "HRES_PLA_E_TOO_MANY_FOLDERS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_NO_MIN_DISK));
	ret = PyModule_AddObject(m, "HRES_PLA_E_NO_MIN_DISK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_DCS_IN_USE));
	ret = PyModule_AddObject(m, "HRES_PLA_E_DCS_IN_USE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_DCS_ALREADY_EXISTS));
	ret = PyModule_AddObject(m, "HRES_PLA_E_DCS_ALREADY_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_PROPERTY_CONFLICT));
	ret = PyModule_AddObject(m, "HRES_PLA_E_PROPERTY_CONFLICT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_DCS_SINGLETON_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_PLA_E_DCS_SINGLETON_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_CREDENTIALS_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_PLA_E_CREDENTIALS_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_DCS_NOT_RUNNING));
	ret = PyModule_AddObject(m, "HRES_PLA_E_DCS_NOT_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_CONFLICT_INCL_EXCL_API));
	ret = PyModule_AddObject(m, "HRES_PLA_E_CONFLICT_INCL_EXCL_API", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_NETWORK_EXE_NOT_VALID));
	ret = PyModule_AddObject(m, "HRES_PLA_E_NETWORK_EXE_NOT_VALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_EXE_ALREADY_CONFIGURED));
	ret = PyModule_AddObject(m, "HRES_PLA_E_EXE_ALREADY_CONFIGURED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_EXE_PATH_NOT_VALID));
	ret = PyModule_AddObject(m, "HRES_PLA_E_EXE_PATH_NOT_VALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_DC_ALREADY_EXISTS));
	ret = PyModule_AddObject(m, "HRES_PLA_E_DC_ALREADY_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_DCS_START_WAIT_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_PLA_E_DCS_START_WAIT_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_DC_START_WAIT_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_PLA_E_DC_START_WAIT_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_REPORT_WAIT_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_PLA_E_REPORT_WAIT_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_NO_DUPLICATES));
	ret = PyModule_AddObject(m, "HRES_PLA_E_NO_DUPLICATES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_EXE_FULL_PATH_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_PLA_E_EXE_FULL_PATH_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_INVALID_SESSION_NAME));
	ret = PyModule_AddObject(m, "HRES_PLA_E_INVALID_SESSION_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_PLA_CHANNEL_NOT_ENABLED));
	ret = PyModule_AddObject(m, "HRES_PLA_E_PLA_CHANNEL_NOT_ENABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_PLA_E_TASKSCHED_CHANNEL_NOT_ENABLED));
	ret = PyModule_AddObject(m, "HRES_PLA_E_TASKSCHED_CHANNEL_NOT_ENABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_LOCKED_VOLUME));
	ret = PyModule_AddObject(m, "HRES_FVE_E_LOCKED_VOLUME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_NOT_ENCRYPTED));
	ret = PyModule_AddObject(m, "HRES_FVE_E_NOT_ENCRYPTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_NO_TPM_BIOS));
	ret = PyModule_AddObject(m, "HRES_FVE_E_NO_TPM_BIOS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_NO_MBR_METRIC));
	ret = PyModule_AddObject(m, "HRES_FVE_E_NO_MBR_METRIC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_NO_BOOTSECTOR_METRIC));
	ret = PyModule_AddObject(m, "HRES_FVE_E_NO_BOOTSECTOR_METRIC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_NO_BOOTMGR_METRIC));
	ret = PyModule_AddObject(m, "HRES_FVE_E_NO_BOOTMGR_METRIC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_WRONG_BOOTMGR));
	ret = PyModule_AddObject(m, "HRES_FVE_E_WRONG_BOOTMGR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_SECURE_KEY_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_FVE_E_SECURE_KEY_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_NOT_ACTIVATED));
	ret = PyModule_AddObject(m, "HRES_FVE_E_NOT_ACTIVATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_ACTION_NOT_ALLOWED));
	ret = PyModule_AddObject(m, "HRES_FVE_E_ACTION_NOT_ALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_AD_SCHEMA_NOT_INSTALLED));
	ret = PyModule_AddObject(m, "HRES_FVE_E_AD_SCHEMA_NOT_INSTALLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_AD_INVALID_DATATYPE));
	ret = PyModule_AddObject(m, "HRES_FVE_E_AD_INVALID_DATATYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_AD_INVALID_DATASIZE));
	ret = PyModule_AddObject(m, "HRES_FVE_E_AD_INVALID_DATASIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_AD_NO_VALUES));
	ret = PyModule_AddObject(m, "HRES_FVE_E_AD_NO_VALUES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_AD_ATTR_NOT_SET));
	ret = PyModule_AddObject(m, "HRES_FVE_E_AD_ATTR_NOT_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_AD_GUID_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_FVE_E_AD_GUID_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_BAD_INFORMATION));
	ret = PyModule_AddObject(m, "HRES_FVE_E_BAD_INFORMATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_TOO_SMALL));
	ret = PyModule_AddObject(m, "HRES_FVE_E_TOO_SMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_SYSTEM_VOLUME));
	ret = PyModule_AddObject(m, "HRES_FVE_E_SYSTEM_VOLUME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_FAILED_WRONG_FS));
	ret = PyModule_AddObject(m, "HRES_FVE_E_FAILED_WRONG_FS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_FAILED_BAD_FS));
	ret = PyModule_AddObject(m, "HRES_FVE_E_FAILED_BAD_FS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_FVE_E_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_BAD_DATA));
	ret = PyModule_AddObject(m, "HRES_FVE_E_BAD_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_VOLUME_NOT_BOUND));
	ret = PyModule_AddObject(m, "HRES_FVE_E_VOLUME_NOT_BOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_TPM_NOT_OWNED));
	ret = PyModule_AddObject(m, "HRES_FVE_E_TPM_NOT_OWNED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_NOT_DATA_VOLUME));
	ret = PyModule_AddObject(m, "HRES_FVE_E_NOT_DATA_VOLUME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_AD_INSUFFICIENT_BUFFER));
	ret = PyModule_AddObject(m, "HRES_FVE_E_AD_INSUFFICIENT_BUFFER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_CONV_READ));
	ret = PyModule_AddObject(m, "HRES_FVE_E_CONV_READ", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_CONV_WRITE));
	ret = PyModule_AddObject(m, "HRES_FVE_E_CONV_WRITE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_KEY_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_FVE_E_KEY_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_CLUSTERING_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_FVE_E_CLUSTERING_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_VOLUME_BOUND_ALREADY));
	ret = PyModule_AddObject(m, "HRES_FVE_E_VOLUME_BOUND_ALREADY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_OS_NOT_PROTECTED));
	ret = PyModule_AddObject(m, "HRES_FVE_E_OS_NOT_PROTECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_PROTECTION_DISABLED));
	ret = PyModule_AddObject(m, "HRES_FVE_E_PROTECTION_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_RECOVERY_KEY_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_FVE_E_RECOVERY_KEY_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_FOREIGN_VOLUME));
	ret = PyModule_AddObject(m, "HRES_FVE_E_FOREIGN_VOLUME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_OVERLAPPED_UPDATE));
	ret = PyModule_AddObject(m, "HRES_FVE_E_OVERLAPPED_UPDATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_TPM_SRK_AUTH_NOT_ZERO));
	ret = PyModule_AddObject(m, "HRES_FVE_E_TPM_SRK_AUTH_NOT_ZERO", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_FAILED_SECTOR_SIZE));
	ret = PyModule_AddObject(m, "HRES_FVE_E_FAILED_SECTOR_SIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_FAILED_AUTHENTICATION));
	ret = PyModule_AddObject(m, "HRES_FVE_E_FAILED_AUTHENTICATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_NOT_OS_VOLUME));
	ret = PyModule_AddObject(m, "HRES_FVE_E_NOT_OS_VOLUME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_AUTOUNLOCK_ENABLED));
	ret = PyModule_AddObject(m, "HRES_FVE_E_AUTOUNLOCK_ENABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_WRONG_BOOTSECTOR));
	ret = PyModule_AddObject(m, "HRES_FVE_E_WRONG_BOOTSECTOR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_WRONG_SYSTEM_FS));
	ret = PyModule_AddObject(m, "HRES_FVE_E_WRONG_SYSTEM_FS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_POLICY_PASSWORD_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_FVE_E_POLICY_PASSWORD_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_CANNOT_SET_FVEK_ENCRYPTED));
	ret = PyModule_AddObject(m, "HRES_FVE_E_CANNOT_SET_FVEK_ENCRYPTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_CANNOT_ENCRYPT_NO_KEY));
	ret = PyModule_AddObject(m, "HRES_FVE_E_CANNOT_ENCRYPT_NO_KEY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_BOOTABLE_CDDVD));
	ret = PyModule_AddObject(m, "HRES_FVE_E_BOOTABLE_CDDVD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_PROTECTOR_EXISTS));
	ret = PyModule_AddObject(m, "HRES_FVE_E_PROTECTOR_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FVE_E_RELATIVE_PATH));
	ret = PyModule_AddObject(m, "HRES_FVE_E_RELATIVE_PATH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_CALLOUT_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_FWP_E_CALLOUT_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_CONDITION_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_FWP_E_CONDITION_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_FILTER_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_FWP_E_FILTER_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_LAYER_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_FWP_E_LAYER_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_PROVIDER_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_FWP_E_PROVIDER_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_PROVIDER_CONTEXT_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_FWP_E_PROVIDER_CONTEXT_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_SUBLAYER_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_FWP_E_SUBLAYER_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_FWP_E_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_ALREADY_EXISTS));
	ret = PyModule_AddObject(m, "HRES_FWP_E_ALREADY_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_IN_USE));
	ret = PyModule_AddObject(m, "HRES_FWP_E_IN_USE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_DYNAMIC_SESSION_IN_PROGRESS));
	ret = PyModule_AddObject(m, "HRES_FWP_E_DYNAMIC_SESSION_IN_PROGRESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_WRONG_SESSION));
	ret = PyModule_AddObject(m, "HRES_FWP_E_WRONG_SESSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_NO_TXN_IN_PROGRESS));
	ret = PyModule_AddObject(m, "HRES_FWP_E_NO_TXN_IN_PROGRESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_TXN_IN_PROGRESS));
	ret = PyModule_AddObject(m, "HRES_FWP_E_TXN_IN_PROGRESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_TXN_ABORTED));
	ret = PyModule_AddObject(m, "HRES_FWP_E_TXN_ABORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_SESSION_ABORTED));
	ret = PyModule_AddObject(m, "HRES_FWP_E_SESSION_ABORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_INCOMPATIBLE_TXN));
	ret = PyModule_AddObject(m, "HRES_FWP_E_INCOMPATIBLE_TXN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_FWP_E_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_NET_EVENTS_DISABLED));
	ret = PyModule_AddObject(m, "HRES_FWP_E_NET_EVENTS_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_INCOMPATIBLE_LAYER));
	ret = PyModule_AddObject(m, "HRES_FWP_E_INCOMPATIBLE_LAYER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_KM_CLIENTS_ONLY));
	ret = PyModule_AddObject(m, "HRES_FWP_E_KM_CLIENTS_ONLY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_LIFETIME_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_FWP_E_LIFETIME_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_BUILTIN_OBJECT));
	ret = PyModule_AddObject(m, "HRES_FWP_E_BUILTIN_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_TOO_MANY_BOOTTIME_FILTERS));
	ret = PyModule_AddObject(m, "HRES_FWP_E_TOO_MANY_BOOTTIME_FILTERS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_NOTIFICATION_DROPPED));
	ret = PyModule_AddObject(m, "HRES_FWP_E_NOTIFICATION_DROPPED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_TRAFFIC_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_FWP_E_TRAFFIC_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_INCOMPATIBLE_SA_STATE));
	ret = PyModule_AddObject(m, "HRES_FWP_E_INCOMPATIBLE_SA_STATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_NULL_POINTER));
	ret = PyModule_AddObject(m, "HRES_FWP_E_NULL_POINTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_INVALID_ENUMERATOR));
	ret = PyModule_AddObject(m, "HRES_FWP_E_INVALID_ENUMERATOR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_INVALID_FLAGS));
	ret = PyModule_AddObject(m, "HRES_FWP_E_INVALID_FLAGS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_INVALID_NET_MASK));
	ret = PyModule_AddObject(m, "HRES_FWP_E_INVALID_NET_MASK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_INVALID_RANGE));
	ret = PyModule_AddObject(m, "HRES_FWP_E_INVALID_RANGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_INVALID_INTERVAL));
	ret = PyModule_AddObject(m, "HRES_FWP_E_INVALID_INTERVAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_ZERO_LENGTH_ARRAY));
	ret = PyModule_AddObject(m, "HRES_FWP_E_ZERO_LENGTH_ARRAY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_NULL_DISPLAY_NAME));
	ret = PyModule_AddObject(m, "HRES_FWP_E_NULL_DISPLAY_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_INVALID_ACTION_TYPE));
	ret = PyModule_AddObject(m, "HRES_FWP_E_INVALID_ACTION_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_INVALID_WEIGHT));
	ret = PyModule_AddObject(m, "HRES_FWP_E_INVALID_WEIGHT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_MATCH_TYPE_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_FWP_E_MATCH_TYPE_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_TYPE_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_FWP_E_TYPE_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_OUT_OF_BOUNDS));
	ret = PyModule_AddObject(m, "HRES_FWP_E_OUT_OF_BOUNDS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_RESERVED));
	ret = PyModule_AddObject(m, "HRES_FWP_E_RESERVED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_DUPLICATE_CONDITION));
	ret = PyModule_AddObject(m, "HRES_FWP_E_DUPLICATE_CONDITION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_DUPLICATE_KEYMOD));
	ret = PyModule_AddObject(m, "HRES_FWP_E_DUPLICATE_KEYMOD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_ACTION_INCOMPATIBLE_WITH_LAYER));
	ret = PyModule_AddObject(m, "HRES_FWP_E_ACTION_INCOMPATIBLE_WITH_LAYER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_ACTION_INCOMPATIBLE_WITH_SUBLAYER));
	ret = PyModule_AddObject(m, "HRES_FWP_E_ACTION_INCOMPATIBLE_WITH_SUBLAYER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_CONTEXT_INCOMPATIBLE_WITH_LAYER));
	ret = PyModule_AddObject(m, "HRES_FWP_E_CONTEXT_INCOMPATIBLE_WITH_LAYER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_CONTEXT_INCOMPATIBLE_WITH_CALLOUT));
	ret = PyModule_AddObject(m, "HRES_FWP_E_CONTEXT_INCOMPATIBLE_WITH_CALLOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_INCOMPATIBLE_AUTH_METHOD));
	ret = PyModule_AddObject(m, "HRES_FWP_E_INCOMPATIBLE_AUTH_METHOD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_INCOMPATIBLE_DH_GROUP));
	ret = PyModule_AddObject(m, "HRES_FWP_E_INCOMPATIBLE_DH_GROUP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_EM_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_FWP_E_EM_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_NEVER_MATCH));
	ret = PyModule_AddObject(m, "HRES_FWP_E_NEVER_MATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_PROVIDER_CONTEXT_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_FWP_E_PROVIDER_CONTEXT_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_INVALID_PARAMETER));
	ret = PyModule_AddObject(m, "HRES_FWP_E_INVALID_PARAMETER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_TOO_MANY_SUBLAYERS));
	ret = PyModule_AddObject(m, "HRES_FWP_E_TOO_MANY_SUBLAYERS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_CALLOUT_NOTIFICATION_FAILED));
	ret = PyModule_AddObject(m, "HRES_FWP_E_CALLOUT_NOTIFICATION_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_INCOMPATIBLE_AUTH_CONFIG));
	ret = PyModule_AddObject(m, "HRES_FWP_E_INCOMPATIBLE_AUTH_CONFIG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_FWP_E_INCOMPATIBLE_CIPHER_CONFIG));
	ret = PyModule_AddObject(m, "HRES_FWP_E_INCOMPATIBLE_CIPHER_CONFIG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_INTERFACE_CLOSING));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_INTERFACE_CLOSING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_BAD_VERSION));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_BAD_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_BAD_CHARACTERISTICS));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_BAD_CHARACTERISTICS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_ADAPTER_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_ADAPTER_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_OPEN_FAILED));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_OPEN_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_DEVICE_FAILED));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_DEVICE_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_MULTICAST_FULL));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_MULTICAST_FULL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_MULTICAST_EXISTS));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_MULTICAST_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_MULTICAST_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_MULTICAST_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_REQUEST_ABORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_REQUEST_ABORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_RESET_IN_PROGRESS));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_RESET_IN_PROGRESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_INVALID_PACKET));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_INVALID_PACKET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_INVALID_DEVICE_REQUEST));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_INVALID_DEVICE_REQUEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_ADAPTER_NOT_READY));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_ADAPTER_NOT_READY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_INVALID_LENGTH));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_INVALID_LENGTH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_INVALID_DATA));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_INVALID_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_BUFFER_TOO_SHORT));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_BUFFER_TOO_SHORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_INVALID_OID));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_INVALID_OID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_ADAPTER_REMOVED));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_ADAPTER_REMOVED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_UNSUPPORTED_MEDIA));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_UNSUPPORTED_MEDIA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_GROUP_ADDRESS_IN_USE));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_GROUP_ADDRESS_IN_USE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_FILE_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_FILE_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_ERROR_READING_FILE));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_ERROR_READING_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_ALREADY_MAPPED));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_ALREADY_MAPPED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_RESOURCE_CONFLICT));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_RESOURCE_CONFLICT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_MEDIA_DISCONNECTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_MEDIA_DISCONNECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_INVALID_ADDRESS));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_INVALID_ADDRESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_PAUSED));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_PAUSED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_INTERFACE_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_INTERFACE_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_UNSUPPORTED_REVISION));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_UNSUPPORTED_REVISION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_INVALID_PORT));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_INVALID_PORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_INVALID_PORT_STATE));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_INVALID_PORT_STATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_DOT11_AUTO_CONFIG_ENABLED));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_DOT11_AUTO_CONFIG_ENABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_DOT11_MEDIA_IN_USE));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_DOT11_MEDIA_IN_USE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_NDIS_DOT11_POWER_STATE_INVALID));
	ret = PyModule_AddObject(m, "HRES_ERROR_NDIS_DOT11_POWER_STATE_INVALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRK_E_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_TRK_E_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRK_E_VOLUME_QUOTA_EXCEEDED));
	ret = PyModule_AddObject(m, "HRES_TRK_E_VOLUME_QUOTA_EXCEEDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_TRK_SERVER_TOO_BUSY));
	ret = PyModule_AddObject(m, "HRES_TRK_SERVER_TOO_BUSY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_AUDITING_DISABLED));
	ret = PyModule_AddObject(m, "HRES_ERROR_AUDITING_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_ALL_SIDS_FILTERED));
	ret = PyModule_AddObject(m, "HRES_ERROR_ALL_SIDS_FILTERED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_BIZRULES_NOT_ENABLED));
	ret = PyModule_AddObject(m, "HRES_ERROR_BIZRULES_NOT_ENABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NOCONNECTION));
	ret = PyModule_AddObject(m, "HRES_NS_E_NOCONNECTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOTCONNECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOTCONNECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOTDESTROYTITLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOTDESTROYTITLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOTRENAMETITLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOTRENAMETITLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOTOFFLINEDISK));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOTOFFLINEDISK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOTONLINEDISK));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOTONLINEDISK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NOREGISTEREDWALKER));
	ret = PyModule_AddObject(m, "HRES_NS_E_NOREGISTEREDWALKER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NOFUNNEL));
	ret = PyModule_AddObject(m, "HRES_NS_E_NOFUNNEL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_LOCALPLAY));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_LOCALPLAY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NETWORK_BUSY));
	ret = PyModule_AddObject(m, "HRES_NS_E_NETWORK_BUSY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TOO_MANY_SESS));
	ret = PyModule_AddObject(m, "HRES_NS_E_TOO_MANY_SESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ALREADY_CONNECTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_ALREADY_CONNECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_INDEX));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_INDEX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PROTOCOL_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_PROTOCOL_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_NS_E_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NET_WRITE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NET_WRITE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NET_READ));
	ret = PyModule_AddObject(m, "HRES_NS_E_NET_READ", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DISK_WRITE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DISK_WRITE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DISK_READ));
	ret = PyModule_AddObject(m, "HRES_NS_E_DISK_READ", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FILE_WRITE));
	ret = PyModule_AddObject(m, "HRES_NS_E_FILE_WRITE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FILE_READ));
	ret = PyModule_AddObject(m, "HRES_NS_E_FILE_READ", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FILE_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_FILE_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FILE_EXISTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_FILE_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_NAME));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FILE_OPEN_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_FILE_OPEN_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FILE_ALLOCATION_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_FILE_ALLOCATION_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FILE_INIT_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_FILE_INIT_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FILE_PLAY_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_FILE_PLAY_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SET_DISK_UID_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_SET_DISK_UID_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INDUCED));
	ret = PyModule_AddObject(m, "HRES_NS_E_INDUCED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CCLINK_DOWN));
	ret = PyModule_AddObject(m, "HRES_NS_E_CCLINK_DOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INTERNAL));
	ret = PyModule_AddObject(m, "HRES_NS_E_INTERNAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BUSY));
	ret = PyModule_AddObject(m, "HRES_NS_E_BUSY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UNRECOGNIZED_STREAM_TYPE));
	ret = PyModule_AddObject(m, "HRES_NS_E_UNRECOGNIZED_STREAM_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NETWORK_SERVICE_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NETWORK_SERVICE_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NETWORK_RESOURCE_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NETWORK_RESOURCE_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CONNECTION_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_CONNECTION_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SHUTDOWN));
	ret = PyModule_AddObject(m, "HRES_NS_E_SHUTDOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_REQUEST));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_REQUEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INSUFFICIENT_BANDWIDTH));
	ret = PyModule_AddObject(m, "HRES_NS_E_INSUFFICIENT_BANDWIDTH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NOT_REBUILDING));
	ret = PyModule_AddObject(m, "HRES_NS_E_NOT_REBUILDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_LATE_OPERATION));
	ret = PyModule_AddObject(m, "HRES_NS_E_LATE_OPERATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_DATA));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FILE_BANDWIDTH_LIMIT));
	ret = PyModule_AddObject(m, "HRES_NS_E_FILE_BANDWIDTH_LIMIT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_OPEN_FILE_LIMIT));
	ret = PyModule_AddObject(m, "HRES_NS_E_OPEN_FILE_LIMIT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BAD_CONTROL_DATA));
	ret = PyModule_AddObject(m, "HRES_NS_E_BAD_CONTROL_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_STREAM));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_STREAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_STREAM_END));
	ret = PyModule_AddObject(m, "HRES_NS_E_STREAM_END", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SERVER_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_SERVER_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DUPLICATE_NAME));
	ret = PyModule_AddObject(m, "HRES_NS_E_DUPLICATE_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DUPLICATE_ADDRESS));
	ret = PyModule_AddObject(m, "HRES_NS_E_DUPLICATE_ADDRESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BAD_MULTICAST_ADDRESS));
	ret = PyModule_AddObject(m, "HRES_NS_E_BAD_MULTICAST_ADDRESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BAD_ADAPTER_ADDRESS));
	ret = PyModule_AddObject(m, "HRES_NS_E_BAD_ADAPTER_ADDRESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BAD_DELIVERY_MODE));
	ret = PyModule_AddObject(m, "HRES_NS_E_BAD_DELIVERY_MODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_CHANNEL));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_CHANNEL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_STREAM));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_STREAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_ARCHIVE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_ARCHIVE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NOTITLES));
	ret = PyModule_AddObject(m, "HRES_NS_E_NOTITLES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_CLIENT));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_CLIENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_BLACKHOLE_ADDRESS));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_BLACKHOLE_ADDRESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INCOMPATIBLE_FORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_INCOMPATIBLE_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_KEY));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_KEY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_PORT));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_PORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_TTL));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_TTL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_STRIDE_REFUSED));
	ret = PyModule_AddObject(m, "HRES_NS_E_STRIDE_REFUSED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MMSAUTOSERVER_CANTFINDWALKER));
	ret = PyModule_AddObject(m, "HRES_NS_E_MMSAUTOSERVER_CANTFINDWALKER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MAX_BITRATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_MAX_BITRATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_LOGFILEPERIOD));
	ret = PyModule_AddObject(m, "HRES_NS_E_LOGFILEPERIOD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MAX_CLIENTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_MAX_CLIENTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_LOG_FILE_SIZE));
	ret = PyModule_AddObject(m, "HRES_NS_E_LOG_FILE_SIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MAX_FILERATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_MAX_FILERATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WALKER_UNKNOWN));
	ret = PyModule_AddObject(m, "HRES_NS_E_WALKER_UNKNOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WALKER_SERVER));
	ret = PyModule_AddObject(m, "HRES_NS_E_WALKER_SERVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WALKER_USAGE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WALKER_USAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TIGER_FAIL));
	ret = PyModule_AddObject(m, "HRES_NS_E_TIGER_FAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CUB_FAIL));
	ret = PyModule_AddObject(m, "HRES_NS_E_CUB_FAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DISK_FAIL));
	ret = PyModule_AddObject(m, "HRES_NS_E_DISK_FAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MAX_FUNNELS_ALERT));
	ret = PyModule_AddObject(m, "HRES_NS_E_MAX_FUNNELS_ALERT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ALLOCATE_FILE_FAIL));
	ret = PyModule_AddObject(m, "HRES_NS_E_ALLOCATE_FILE_FAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PAGING_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_PAGING_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BAD_BLOCK0_VERSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_BAD_BLOCK0_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BAD_DISK_UID));
	ret = PyModule_AddObject(m, "HRES_NS_E_BAD_DISK_UID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BAD_FSMAJOR_VERSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_BAD_FSMAJOR_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BAD_STAMPNUMBER));
	ret = PyModule_AddObject(m, "HRES_NS_E_BAD_STAMPNUMBER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PARTIALLY_REBUILT_DISK));
	ret = PyModule_AddObject(m, "HRES_NS_E_PARTIALLY_REBUILT_DISK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ENACTPLAN_GIVEUP));
	ret = PyModule_AddObject(m, "HRES_NS_E_ENACTPLAN_GIVEUP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_MCMADM_E_REGKEY_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_MCMADM_E_REGKEY_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_FORMATS));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_FORMATS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_REFERENCES));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_REFERENCES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WAVE_OPEN));
	ret = PyModule_AddObject(m, "HRES_NS_E_WAVE_OPEN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOTCONNECTEVENTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOTCONNECTEVENTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_DEVICE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_DEVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_SPECIFIED_DEVICE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_SPECIFIED_DEVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MONITOR_GIVEUP));
	ret = PyModule_AddObject(m, "HRES_NS_E_MONITOR_GIVEUP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_REMIRRORED_DISK));
	ret = PyModule_AddObject(m, "HRES_NS_E_REMIRRORED_DISK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INSUFFICIENT_DATA));
	ret = PyModule_AddObject(m, "HRES_NS_E_INSUFFICIENT_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ASSERT));
	ret = PyModule_AddObject(m, "HRES_NS_E_ASSERT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BAD_ADAPTER_NAME));
	ret = PyModule_AddObject(m, "HRES_NS_E_BAD_ADAPTER_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NOT_LICENSED));
	ret = PyModule_AddObject(m, "HRES_NS_E_NOT_LICENSED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_SERVER_CONTACT));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_SERVER_CONTACT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TOO_MANY_TITLES));
	ret = PyModule_AddObject(m, "HRES_NS_E_TOO_MANY_TITLES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TITLE_SIZE_EXCEEDED));
	ret = PyModule_AddObject(m, "HRES_NS_E_TITLE_SIZE_EXCEEDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UDP_DISABLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_UDP_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TCP_DISABLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_TCP_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_HTTP_DISABLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_HTTP_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_LICENSE_EXPIRED));
	ret = PyModule_AddObject(m, "HRES_NS_E_LICENSE_EXPIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TITLE_BITRATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_TITLE_BITRATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_EMPTY_PROGRAM_NAME));
	ret = PyModule_AddObject(m, "HRES_NS_E_EMPTY_PROGRAM_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MISSING_CHANNEL));
	ret = PyModule_AddObject(m, "HRES_NS_E_MISSING_CHANNEL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_CHANNELS));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_CHANNELS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_INDEX2));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_INDEX2", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CUB_FAIL_LINK));
	ret = PyModule_AddObject(m, "HRES_NS_E_CUB_FAIL_LINK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BAD_CUB_UID));
	ret = PyModule_AddObject(m, "HRES_NS_E_BAD_CUB_UID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_GLITCH_MODE));
	ret = PyModule_AddObject(m, "HRES_NS_E_GLITCH_MODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_MEDIA_PROTOCOL));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_MEDIA_PROTOCOL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NOTHING_TO_DO));
	ret = PyModule_AddObject(m, "HRES_NS_E_NOTHING_TO_DO", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_MULTICAST));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_MULTICAST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_INPUT_FORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_INPUT_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MSAUDIO_NOT_INSTALLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_MSAUDIO_NOT_INSTALLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UNEXPECTED_MSAUDIO_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_UNEXPECTED_MSAUDIO_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_OUTPUT_FORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_OUTPUT_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NOT_CONFIGURED));
	ret = PyModule_AddObject(m, "HRES_NS_E_NOT_CONFIGURED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PROTECTED_CONTENT));
	ret = PyModule_AddObject(m, "HRES_NS_E_PROTECTED_CONTENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_LICENSE_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_NS_E_LICENSE_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TAMPERED_CONTENT));
	ret = PyModule_AddObject(m, "HRES_NS_E_TAMPERED_CONTENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_LICENSE_OUTOFDATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_LICENSE_OUTOFDATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_LICENSE_INCORRECT_RIGHTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_LICENSE_INCORRECT_RIGHTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_AUDIO_CODEC_NOT_INSTALLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_AUDIO_CODEC_NOT_INSTALLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_AUDIO_CODEC_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_AUDIO_CODEC_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_VIDEO_CODEC_NOT_INSTALLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_VIDEO_CODEC_NOT_INSTALLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_VIDEO_CODEC_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_VIDEO_CODEC_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALIDPROFILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALIDPROFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INCOMPATIBLE_VERSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_INCOMPATIBLE_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_OFFLINE_MODE));
	ret = PyModule_AddObject(m, "HRES_NS_E_OFFLINE_MODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NOT_CONNECTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_NOT_CONNECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TOO_MUCH_DATA));
	ret = PyModule_AddObject(m, "HRES_NS_E_TOO_MUCH_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UNSUPPORTED_PROPERTY));
	ret = PyModule_AddObject(m, "HRES_NS_E_UNSUPPORTED_PROPERTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_8BIT_WAVE_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_8BIT_WAVE_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_MORE_SAMPLES));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_MORE_SAMPLES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_SAMPLING_RATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_SAMPLING_RATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MAX_PACKET_SIZE_TOO_SMALL));
	ret = PyModule_AddObject(m, "HRES_NS_E_MAX_PACKET_SIZE_TOO_SMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_LATE_PACKET));
	ret = PyModule_AddObject(m, "HRES_NS_E_LATE_PACKET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DUPLICATE_PACKET));
	ret = PyModule_AddObject(m, "HRES_NS_E_DUPLICATE_PACKET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SDK_BUFFERTOOSMALL));
	ret = PyModule_AddObject(m, "HRES_NS_E_SDK_BUFFERTOOSMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_NUM_PASSES));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_NUM_PASSES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ATTRIBUTE_READ_ONLY));
	ret = PyModule_AddObject(m, "HRES_NS_E_ATTRIBUTE_READ_ONLY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ATTRIBUTE_NOT_ALLOWED));
	ret = PyModule_AddObject(m, "HRES_NS_E_ATTRIBUTE_NOT_ALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_EDL));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_EDL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DATA_UNIT_EXTENSION_TOO_LARGE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DATA_UNIT_EXTENSION_TOO_LARGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CODEC_DMO_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_CODEC_DMO_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FEATURE_DISABLED_BY_GROUP_POLICY));
	ret = PyModule_AddObject(m, "HRES_NS_E_FEATURE_DISABLED_BY_GROUP_POLICY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FEATURE_DISABLED_IN_SKU));
	ret = PyModule_AddObject(m, "HRES_NS_E_FEATURE_DISABLED_IN_SKU", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_CD));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_CD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANT_READ_DIGITAL));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANT_READ_DIGITAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DEVICE_DISCONNECTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DEVICE_DISCONNECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DEVICE_NOT_SUPPORT_FORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DEVICE_NOT_SUPPORT_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SLOW_READ_DIGITAL));
	ret = PyModule_AddObject(m, "HRES_NS_E_SLOW_READ_DIGITAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MIXER_INVALID_LINE));
	ret = PyModule_AddObject(m, "HRES_NS_E_MIXER_INVALID_LINE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MIXER_INVALID_CONTROL));
	ret = PyModule_AddObject(m, "HRES_NS_E_MIXER_INVALID_CONTROL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MIXER_INVALID_VALUE));
	ret = PyModule_AddObject(m, "HRES_NS_E_MIXER_INVALID_VALUE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MIXER_UNKNOWN_MMRESULT));
	ret = PyModule_AddObject(m, "HRES_NS_E_MIXER_UNKNOWN_MMRESULT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_USER_STOP));
	ret = PyModule_AddObject(m, "HRES_NS_E_USER_STOP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MP3_FORMAT_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_MP3_FORMAT_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CD_READ_ERROR_NO_CORRECTION));
	ret = PyModule_AddObject(m, "HRES_NS_E_CD_READ_ERROR_NO_CORRECTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CD_READ_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_CD_READ_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CD_SLOW_COPY));
	ret = PyModule_AddObject(m, "HRES_NS_E_CD_SLOW_COPY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CD_COPYTO_CD));
	ret = PyModule_AddObject(m, "HRES_NS_E_CD_COPYTO_CD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MIXER_NODRIVER));
	ret = PyModule_AddObject(m, "HRES_NS_E_MIXER_NODRIVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_REDBOOK_ENABLED_WHILE_COPYING));
	ret = PyModule_AddObject(m, "HRES_NS_E_REDBOOK_ENABLED_WHILE_COPYING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CD_REFRESH));
	ret = PyModule_AddObject(m, "HRES_NS_E_CD_REFRESH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CD_DRIVER_PROBLEM));
	ret = PyModule_AddObject(m, "HRES_NS_E_CD_DRIVER_PROBLEM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WONT_DO_DIGITAL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WONT_DO_DIGITAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPXML_NOERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPXML_NOERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPXML_ENDOFDATA));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPXML_ENDOFDATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPXML_PARSEERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPXML_PARSEERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPXML_ATTRIBUTENOTFOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPXML_ATTRIBUTENOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPXML_PINOTFOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPXML_PINOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPXML_EMPTYDOC));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPXML_EMPTYDOC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_PATH_ALREADY_IN_LIBRARY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_PATH_ALREADY_IN_LIBRARY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_FILESCANALREADYSTARTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_FILESCANALREADYSTARTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_HME_INVALIDOBJECTID));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_HME_INVALIDOBJECTID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_MF_CODE_EXPIRED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_MF_CODE_EXPIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_HME_NOTSEARCHABLEFORITEMS));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_HME_NOTSEARCHABLEFORITEMS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_ADDTOLIBRARY_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_ADDTOLIBRARY_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_WINDOWSAPIFAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_WINDOWSAPIFAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_RECORDING_NOT_ALLOWED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_RECORDING_NOT_ALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DEVICE_NOT_READY));
	ret = PyModule_AddObject(m, "HRES_NS_E_DEVICE_NOT_READY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DAMAGED_FILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DAMAGED_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MPDB_GENERIC));
	ret = PyModule_AddObject(m, "HRES_NS_E_MPDB_GENERIC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FILE_FAILED_CHECKS));
	ret = PyModule_AddObject(m, "HRES_NS_E_FILE_FAILED_CHECKS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MEDIA_LIBRARY_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_MEDIA_LIBRARY_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SHARING_VIOLATION));
	ret = PyModule_AddObject(m, "HRES_NS_E_SHARING_VIOLATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_ERROR_STRING_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_ERROR_STRING_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPOCX_NO_REMOTE_CORE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPOCX_NO_REMOTE_CORE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPOCX_NO_ACTIVE_CORE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPOCX_NO_ACTIVE_CORE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPOCX_NOT_RUNNING_REMOTELY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPOCX_NOT_RUNNING_REMOTELY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPOCX_NO_REMOTE_WINDOW));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPOCX_NO_REMOTE_WINDOW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPOCX_ERRORMANAGERNOTAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPOCX_ERRORMANAGERNOTAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PLUGIN_NOTSHUTDOWN));
	ret = PyModule_AddObject(m, "HRES_NS_E_PLUGIN_NOTSHUTDOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CANNOT_FIND_FOLDER));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CANNOT_FIND_FOLDER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_STREAMING_RECORDING_NOT_ALLOWED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_STREAMING_RECORDING_NOT_ALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_PLUGINDLL_NOTFOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_PLUGINDLL_NOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NEED_TO_ASK_USER));
	ret = PyModule_AddObject(m, "HRES_NS_E_NEED_TO_ASK_USER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPOCX_PLAYER_NOT_DOCKED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPOCX_PLAYER_NOT_DOCKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_EXTERNAL_NOTREADY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_EXTERNAL_NOTREADY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_MLS_STALE_DATA));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_MLS_STALE_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_UI_SUBCONTROLSNOTSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_UI_SUBCONTROLSNOTSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_UI_VERSIONMISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_UI_VERSIONMISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_UI_NOTATHEMEFILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_UI_NOTATHEMEFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_UI_SUBELEMENTNOTFOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_UI_SUBELEMENTNOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_UI_VERSIONPARSE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_UI_VERSIONPARSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_UI_VIEWIDNOTFOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_UI_VIEWIDNOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_UI_PASSTHROUGH));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_UI_PASSTHROUGH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_UI_OBJECTNOTFOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_UI_OBJECTNOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_UI_SECONDHANDLER));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_UI_SECONDHANDLER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_UI_NOSKININZIP));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_UI_NOSKININZIP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_URLDOWNLOADFAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_URLDOWNLOADFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPOCX_UNABLE_TO_LOAD_SKIN));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPOCX_UNABLE_TO_LOAD_SKIN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_INVALID_SKIN));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_INVALID_SKIN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_SENDMAILFAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_SENDMAILFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_LOCKEDINSKINMODE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_LOCKEDINSKINMODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_FAILED_TO_SAVE_FILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_FAILED_TO_SAVE_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_SAVEAS_READONLY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_SAVEAS_READONLY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_FAILED_TO_SAVE_PLAYLIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_FAILED_TO_SAVE_PLAYLIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_FAILED_TO_OPEN_WMD));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_FAILED_TO_OPEN_WMD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CANT_PLAY_PROTECTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CANT_PLAY_PROTECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SHARING_STATE_OUT_OF_SYNC));
	ret = PyModule_AddObject(m, "HRES_NS_E_SHARING_STATE_OUT_OF_SYNC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPOCX_REMOTE_PLAYER_ALREADY_RUNNING));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPOCX_REMOTE_PLAYER_ALREADY_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_RBC_JPGMAPPINGIMAGE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_RBC_JPGMAPPINGIMAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_JPGTRANSPARENCY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_JPGTRANSPARENCY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_INVALID_MAX_VAL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_INVALID_MAX_VAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_INVALID_MIN_VAL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_INVALID_MIN_VAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CS_JPGPOSITIONIMAGE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CS_JPGPOSITIONIMAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CS_NOTEVENLYDIVISIBLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CS_NOTEVENLYDIVISIBLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPZIP_NOTAZIPFILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPZIP_NOTAZIPFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPZIP_CORRUPT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPZIP_CORRUPT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPZIP_FILENOTFOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPZIP_FILENOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_IMAGE_FILETYPE_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_IMAGE_FILETYPE_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_IMAGE_INVALID_FORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_IMAGE_INVALID_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_GIF_UNEXPECTED_ENDOFFILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_GIF_UNEXPECTED_ENDOFFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_GIF_INVALID_FORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_GIF_INVALID_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_GIF_BAD_VERSION_NUMBER));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_GIF_BAD_VERSION_NUMBER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_GIF_NO_IMAGE_IN_FILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_GIF_NO_IMAGE_IN_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_PNG_INVALIDFORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_PNG_INVALIDFORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_PNG_UNSUPPORTED_BITDEPTH));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_PNG_UNSUPPORTED_BITDEPTH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_PNG_UNSUPPORTED_COMPRESSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_PNG_UNSUPPORTED_COMPRESSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_PNG_UNSUPPORTED_FILTER));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_PNG_UNSUPPORTED_FILTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_PNG_UNSUPPORTED_INTERLACE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_PNG_UNSUPPORTED_INTERLACE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_PNG_UNSUPPORTED_BAD_CRC));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_PNG_UNSUPPORTED_BAD_CRC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_BMP_INVALID_BITMASK));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_BMP_INVALID_BITMASK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_BMP_TOPDOWN_DIB_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_BMP_TOPDOWN_DIB_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_BMP_BITMAP_NOT_CREATED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_BMP_BITMAP_NOT_CREATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_BMP_COMPRESSION_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_BMP_COMPRESSION_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_BMP_INVALID_FORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_BMP_INVALID_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_JPG_JERR_ARITHCODING_NOTIMPL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_JPG_JERR_ARITHCODING_NOTIMPL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_JPG_INVALID_FORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_JPG_INVALID_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_JPG_BAD_DCTSIZE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_JPG_BAD_DCTSIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_JPG_BAD_VERSION_NUMBER));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_JPG_BAD_VERSION_NUMBER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_JPG_BAD_PRECISION));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_JPG_BAD_PRECISION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_JPG_CCIR601_NOTIMPL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_JPG_CCIR601_NOTIMPL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_JPG_NO_IMAGE_IN_FILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_JPG_NO_IMAGE_IN_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_JPG_READ_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_JPG_READ_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_JPG_FRACT_SAMPLE_NOTIMPL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_JPG_FRACT_SAMPLE_NOTIMPL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_JPG_IMAGE_TOO_BIG));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_JPG_IMAGE_TOO_BIG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_JPG_UNEXPECTED_ENDOFFILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_JPG_UNEXPECTED_ENDOFFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_JPG_SOF_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_JPG_SOF_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_JPG_UNKNOWN_MARKER));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_JPG_UNKNOWN_MARKER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_FAILED_TO_OPEN_IMAGE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_FAILED_TO_OPEN_IMAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DAI_SONGTOOSHORT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DAI_SONGTOOSHORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMG_RATEUNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMG_RATEUNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMG_PLUGINUNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMG_PLUGINUNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMG_CANNOTQUEUE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMG_CANNOTQUEUE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMG_PREROLLLICENSEACQUISITIONNOTALLOWED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMG_PREROLLLICENSEACQUISITIONNOTALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMG_UNEXPECTEDPREROLLSTATUS));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMG_UNEXPECTEDPREROLLSTATUS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMG_INVALID_COPP_CERTIFICATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMG_INVALID_COPP_CERTIFICATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMG_COPP_SECURITY_INVALID));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMG_COPP_SECURITY_INVALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMG_COPP_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMG_COPP_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMG_INVALIDSTATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMG_INVALIDSTATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMG_SINKALREADYEXISTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMG_SINKALREADYEXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMG_NOSDKINTERFACE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMG_NOSDKINTERFACE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMG_NOTALLOUTPUTSRENDERED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMG_NOTALLOUTPUTSRENDERED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMG_FILETRANSFERNOTALLOWED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMG_FILETRANSFERNOTALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMR_UNSUPPORTEDSTREAM));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMR_UNSUPPORTEDSTREAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMR_PINNOTFOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMR_PINNOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMR_WAITINGONFORMATSWITCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMR_WAITINGONFORMATSWITCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMR_NOSOURCEFILTER));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMR_NOSOURCEFILTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMR_PINTYPENOMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMR_PINTYPENOMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMR_NOCALLBACKAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMR_NOCALLBACKAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMR_SAMPLEPROPERTYNOTSET));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMR_SAMPLEPROPERTYNOTSET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMR_CANNOT_RENDER_BINARY_STREAM));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMR_CANNOT_RENDER_BINARY_STREAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMG_LICENSE_TAMPERED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMG_LICENSE_TAMPERED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMR_WILLNOT_RENDER_BINARY_STREAM));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMR_WILLNOT_RENDER_BINARY_STREAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMX_UNRECOGNIZED_PLAYLIST_FORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMX_UNRECOGNIZED_PLAYLIST_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ASX_INVALIDFORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_ASX_INVALIDFORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ASX_INVALIDVERSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_ASX_INVALIDVERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ASX_INVALID_REPEAT_BLOCK));
	ret = PyModule_AddObject(m, "HRES_NS_E_ASX_INVALID_REPEAT_BLOCK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ASX_NOTHING_TO_WRITE));
	ret = PyModule_AddObject(m, "HRES_NS_E_ASX_NOTHING_TO_WRITE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_URLLIST_INVALIDFORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_URLLIST_INVALIDFORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMX_ATTRIBUTE_DOES_NOT_EXIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMX_ATTRIBUTE_DOES_NOT_EXIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMX_ATTRIBUTE_ALREADY_EXISTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMX_ATTRIBUTE_ALREADY_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMX_ATTRIBUTE_UNRETRIEVABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMX_ATTRIBUTE_UNRETRIEVABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMX_ITEM_DOES_NOT_EXIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMX_ITEM_DOES_NOT_EXIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMX_ITEM_TYPE_ILLEGAL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMX_ITEM_TYPE_ILLEGAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMX_ITEM_UNSETTABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMX_ITEM_UNSETTABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMX_PLAYLIST_EMPTY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMX_PLAYLIST_EMPTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MLS_SMARTPLAYLIST_FILTER_NOT_REGISTERED));
	ret = PyModule_AddObject(m, "HRES_NS_E_MLS_SMARTPLAYLIST_FILTER_NOT_REGISTERED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMX_INVALID_FORMAT_OVER_NESTING));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMX_INVALID_FORMAT_OVER_NESTING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_NOSOURCEURLSTRING));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_NOSOURCEURLSTRING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_COCREATEFAILEDFORGITOBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_COCREATEFAILEDFORGITOBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_FAILEDTOGETMARSHALLEDEVENTHANDLERINTERFACE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_FAILEDTOGETMARSHALLEDEVENTHANDLERINTERFACE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_BUFFERTOOSMALL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_BUFFERTOOSMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_INVALIDPLAYLISTMODE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_INVALIDPLAYLISTMODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_ITEMNOTINPLAYLIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_ITEMNOTINPLAYLIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLISTEMPTY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLISTEMPTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_NOBROWSER));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_NOBROWSER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_UNRECOGNIZED_MEDIA_URL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_UNRECOGNIZED_MEDIA_URL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_GRAPH_NOT_IN_LIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_GRAPH_NOT_IN_LIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLIST_EMPTY_OR_SINGLE_MEDIA));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLIST_EMPTY_OR_SINGLE_MEDIA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_ERRORSINKNOTREGISTERED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_ERRORSINKNOTREGISTERED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_ERRORMANAGERNOTAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_ERRORMANAGERNOTAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_WEBHELPFAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_WEBHELPFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_MEDIA_ERROR_RESUME_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_MEDIA_ERROR_RESUME_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_NO_REF_IN_ENTRY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_NO_REF_IN_ENTRY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_NAME_EMPTY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_NAME_EMPTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_NAME_ILLEGAL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_NAME_ILLEGAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_VALUE_EMPTY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_VALUE_EMPTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_VALUE_ILLEGAL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_VALUE_ILLEGAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_WMX_LIST_ITEM_ATTRIBUTE_NAME_EMPTY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_WMX_LIST_ITEM_ATTRIBUTE_NAME_EMPTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_WMX_LIST_ITEM_ATTRIBUTE_NAME_ILLEGAL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_WMX_LIST_ITEM_ATTRIBUTE_NAME_ILLEGAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_WMX_LIST_ITEM_ATTRIBUTE_VALUE_EMPTY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_WMX_LIST_ITEM_ATTRIBUTE_VALUE_EMPTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_LIST_ENTRY_NO_REF));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_LIST_ENTRY_NO_REF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_MISNAMED_FILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_MISNAMED_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_CODEC_NOT_TRUSTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_CODEC_NOT_TRUSTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_CODEC_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_CODEC_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_CODEC_DOWNLOAD_NOT_ALLOWED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_CODEC_DOWNLOAD_NOT_ALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_ERROR_DOWNLOADING_PLAYLIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_ERROR_DOWNLOADING_PLAYLIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_FAILED_TO_BUILD_PLAYLIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_FAILED_TO_BUILD_PLAYLIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_NONE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_NONE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_EXHAUSTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_EXHAUSTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_NAME_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_NAME_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_MORPH_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_MORPH_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_INIT_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_INIT_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_MEDIA_ALTERNATE_REF_EMPTY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_MEDIA_ALTERNATE_REF_EMPTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLIST_NO_EVENT_NAME));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLIST_NO_EVENT_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLIST_EVENT_ATTRIBUTE_ABSENT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLIST_EVENT_ATTRIBUTE_ABSENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLIST_EVENT_EMPTY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLIST_EVENT_EMPTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLIST_STACK_EMPTY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLIST_STACK_EMPTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_CURRENT_MEDIA_NOT_ACTIVE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_CURRENT_MEDIA_NOT_ACTIVE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_USER_CANCEL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_USER_CANCEL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLIST_REPEAT_EMPTY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLIST_REPEAT_EMPTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLIST_REPEAT_START_MEDIA_NONE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLIST_REPEAT_START_MEDIA_NONE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLIST_REPEAT_END_MEDIA_NONE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLIST_REPEAT_END_MEDIA_NONE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_INVALID_PLAYLIST_URL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_INVALID_PLAYLIST_URL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_MISMATCHED_RUNTIME));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_MISMATCHED_RUNTIME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLIST_IMPORT_FAILED_NO_ITEMS));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLIST_IMPORT_FAILED_NO_ITEMS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_VIDEO_TRANSFORM_FILTER_INSERTION));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_VIDEO_TRANSFORM_FILTER_INSERTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_MEDIA_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_MEDIA_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_WMX_ENTRYREF_NO_REF));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_WMX_ENTRYREF_NO_REF", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_NO_PLAYABLE_MEDIA_IN_PLAYLIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_NO_PLAYABLE_MEDIA_IN_PLAYLIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_PLAYLIST_EMPTY_NESTED_PLAYLIST_SKIPPED_ITEMS));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_PLAYLIST_EMPTY_NESTED_PLAYLIST_SKIPPED_ITEMS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_BUSY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_BUSY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_MEDIA_CHILD_PLAYLIST_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_MEDIA_CHILD_PLAYLIST_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_MEDIA_NO_CHILD_PLAYLIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_MEDIA_NO_CHILD_PLAYLIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_FILE_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_FILE_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_TEMP_FILE_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_TEMP_FILE_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMDM_REVOKED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMDM_REVOKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DDRAW_GENERIC));
	ret = PyModule_AddObject(m, "HRES_NS_E_DDRAW_GENERIC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DISPLAY_MODE_CHANGE_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DISPLAY_MODE_CHANGE_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PLAYLIST_CONTAINS_ERRORS));
	ret = PyModule_AddObject(m, "HRES_NS_E_PLAYLIST_CONTAINS_ERRORS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CHANGING_PROXY_NAME));
	ret = PyModule_AddObject(m, "HRES_NS_E_CHANGING_PROXY_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CHANGING_PROXY_PORT));
	ret = PyModule_AddObject(m, "HRES_NS_E_CHANGING_PROXY_PORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CHANGING_PROXY_EXCEPTIONLIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_CHANGING_PROXY_EXCEPTIONLIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CHANGING_PROXYBYPASS));
	ret = PyModule_AddObject(m, "HRES_NS_E_CHANGING_PROXYBYPASS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CHANGING_PROXY_PROTOCOL_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_CHANGING_PROXY_PROTOCOL_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_GRAPH_NOAUDIOLANGUAGE));
	ret = PyModule_AddObject(m, "HRES_NS_E_GRAPH_NOAUDIOLANGUAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_GRAPH_NOAUDIOLANGUAGESELECTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_GRAPH_NOAUDIOLANGUAGESELECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CORECD_NOTAMEDIACD));
	ret = PyModule_AddObject(m, "HRES_NS_E_CORECD_NOTAMEDIACD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_MEDIA_URL_TOO_LONG));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_MEDIA_URL_TOO_LONG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPFLASH_CANT_FIND_COM_SERVER));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPFLASH_CANT_FIND_COM_SERVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPFLASH_INCOMPATIBLEVERSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPFLASH_INCOMPATIBLEVERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPOCXGRAPH_IE_DISALLOWS_ACTIVEX_CONTROLS));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPOCXGRAPH_IE_DISALLOWS_ACTIVEX_CONTROLS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NEED_CORE_REFERENCE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NEED_CORE_REFERENCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MEDIACD_READ_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_MEDIACD_READ_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_IE_DISALLOWS_ACTIVEX_CONTROLS));
	ret = PyModule_AddObject(m, "HRES_NS_E_IE_DISALLOWS_ACTIVEX_CONTROLS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FLASH_PLAYBACK_NOT_ALLOWED));
	ret = PyModule_AddObject(m, "HRES_NS_E_FLASH_PLAYBACK_NOT_ALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UNABLE_TO_CREATE_RIP_LOCATION));
	ret = PyModule_AddObject(m, "HRES_NS_E_UNABLE_TO_CREATE_RIP_LOCATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_SOME_CODECS_MISSING));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_SOME_CODECS_MISSING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_RIP_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_RIP_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_FAILED_TO_RIP_TRACK));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_FAILED_TO_RIP_TRACK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_ERASE_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_ERASE_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_FORMAT_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_FORMAT_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CANNOT_BURN_NON_LOCAL_FILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CANNOT_BURN_NON_LOCAL_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_FILE_TYPE_CANNOT_BURN_TO_AUDIO_CD));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_FILE_TYPE_CANNOT_BURN_TO_AUDIO_CD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_FILE_DOES_NOT_FIT_ON_CD));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_FILE_DOES_NOT_FIT_ON_CD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_FILE_NO_DURATION));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_FILE_NO_DURATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_FAILED_TO_BURN));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_FAILED_TO_BURN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FAILED_DOWNLOAD_ABORT_BURN));
	ret = PyModule_AddObject(m, "HRES_NS_E_FAILED_DOWNLOAD_ABORT_BURN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPCORE_DEVICE_DRIVERS_MISSING));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPCORE_DEVICE_DRIVERS_MISSING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPIM_USEROFFLINE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPIM_USEROFFLINE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPIM_USERCANCELED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPIM_USERCANCELED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPIM_DIALUPFAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPIM_DIALUPFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WINSOCK_ERROR_STRING));
	ret = PyModule_AddObject(m, "HRES_NS_E_WINSOCK_ERROR_STRING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPBR_NOLISTENER));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPBR_NOLISTENER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPBR_BACKUPCANCEL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPBR_BACKUPCANCEL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPBR_RESTORECANCEL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPBR_RESTORECANCEL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPBR_ERRORWITHURL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPBR_ERRORWITHURL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPBR_NAMECOLLISION));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPBR_NAMECOLLISION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPBR_DRIVE_INVALID));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPBR_DRIVE_INVALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMPBR_BACKUPRESTOREFAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMPBR_BACKUPRESTOREFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CONVERT_FILE_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CONVERT_FILE_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CONVERT_NO_RIGHTS_ERRORURL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CONVERT_NO_RIGHTS_ERRORURL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CONVERT_NO_RIGHTS_NOERRORURL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CONVERT_NO_RIGHTS_NOERRORURL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CONVERT_FILE_CORRUPT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CONVERT_FILE_CORRUPT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CONVERT_PLUGIN_UNAVAILABLE_ERRORURL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CONVERT_PLUGIN_UNAVAILABLE_ERRORURL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CONVERT_PLUGIN_UNAVAILABLE_NOERRORURL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CONVERT_PLUGIN_UNAVAILABLE_NOERRORURL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CONVERT_PLUGIN_UNKNOWN_FILE_OWNER));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CONVERT_PLUGIN_UNKNOWN_FILE_OWNER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_DISC_COPY_PROTECT_OUTPUT_NS));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_DISC_COPY_PROTECT_OUTPUT_NS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_DISC_COPY_PROTECT_OUTPUT_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_DISC_COPY_PROTECT_OUTPUT_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_NO_SUBPICTURE_STREAM));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_NO_SUBPICTURE_STREAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_COPY_PROTECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_COPY_PROTECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_AUTHORING_PROBLEM));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_AUTHORING_PROBLEM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_INVALID_DISC_REGION));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_INVALID_DISC_REGION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_COMPATIBLE_VIDEO_CARD));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_COMPATIBLE_VIDEO_CARD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_MACROVISION));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_MACROVISION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_SYSTEM_DECODER_REGION));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_SYSTEM_DECODER_REGION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_DISC_DECODER_REGION));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_DISC_DECODER_REGION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_NO_VIDEO_STREAM));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_NO_VIDEO_STREAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_NO_AUDIO_STREAM));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_NO_AUDIO_STREAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_GRAPH_BUILDING));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_GRAPH_BUILDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_NO_DECODER));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_NO_DECODER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_PARENTAL));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_PARENTAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_CANNOT_JUMP));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_CANNOT_JUMP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_DEVICE_CONTENTION));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_DEVICE_CONTENTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_NO_VIDEO_MEMORY));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_NO_VIDEO_MEMORY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_CANNOT_COPY_PROTECTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_CANNOT_COPY_PROTECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_REQUIRED_PROPERTY_NOT_SET));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_REQUIRED_PROPERTY_NOT_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DVD_INVALID_TITLE_CHAPTER));
	ret = PyModule_AddObject(m, "HRES_NS_E_DVD_INVALID_TITLE_CHAPTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_CD_BURNER));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_CD_BURNER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DEVICE_IS_NOT_READY));
	ret = PyModule_AddObject(m, "HRES_NS_E_DEVICE_IS_NOT_READY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_UNSUPPORTED_FORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_UNSUPPORTED_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_PDA));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_PDA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_UNSPECIFIED_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_UNSPECIFIED_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MEMSTORAGE_BAD_DATA));
	ret = PyModule_AddObject(m, "HRES_NS_E_MEMSTORAGE_BAD_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_FAIL_SELECT_DEVICE));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_FAIL_SELECT_DEVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_FAIL_READ_WAVE_FILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_FAIL_READ_WAVE_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_IMAPI_LOSSOFSTREAMING));
	ret = PyModule_AddObject(m, "HRES_NS_E_IMAPI_LOSSOFSTREAMING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_DEVICE_FULL));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_DEVICE_FULL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FAIL_LAUNCH_ROXIO_PLUGIN));
	ret = PyModule_AddObject(m, "HRES_NS_E_FAIL_LAUNCH_ROXIO_PLUGIN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_DEVICE_FULL_IN_SESSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_DEVICE_FULL_IN_SESSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_IMAPI_MEDIUM_INVALIDTYPE));
	ret = PyModule_AddObject(m, "HRES_NS_E_IMAPI_MEDIUM_INVALIDTYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_MANUALDEVICE));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_MANUALDEVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_PARTNERSHIPNOTEXIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_PARTNERSHIPNOTEXIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_CANNOT_CREATE_ADDITIONAL_SYNC_RELATIONSHIP));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_CANNOT_CREATE_ADDITIONAL_SYNC_RELATIONSHIP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_NO_TRANSCODE_OF_DRM));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_NO_TRANSCODE_OF_DRM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_TRANSCODECACHEFULL));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_TRANSCODECACHEFULL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_TOO_MANY_FILE_COLLISIONS));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_TOO_MANY_FILE_COLLISIONS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_CANNOT_TRANSCODE));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_CANNOT_TRANSCODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_TOO_MANY_FILES_IN_DIRECTORY));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_TOO_MANY_FILES_IN_DIRECTORY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PROCESSINGSHOWSYNCWIZARD));
	ret = PyModule_AddObject(m, "HRES_NS_E_PROCESSINGSHOWSYNCWIZARD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_TRANSCODE_NOT_PERMITTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_TRANSCODE_NOT_PERMITTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_INITIALIZINGDEVICES));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_INITIALIZINGDEVICES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_OBSOLETE_SP));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_OBSOLETE_SP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_TITLE_COLLISION));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_TITLE_COLLISION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_DEVICESUPPORTDISABLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_DEVICESUPPORTDISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_NO_LONGER_AVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_NO_LONGER_AVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_ENCODER_NOT_RESPONDING));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_ENCODER_NOT_RESPONDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_CANNOT_SYNC_FROM_LOCATION));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_CANNOT_SYNC_FROM_LOCATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_PROTOCOL_PROBLEM));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_PROTOCOL_PROBLEM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_NO_DISK_SPACE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_NO_DISK_SPACE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_LOGON_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_LOGON_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CANNOT_FIND_FILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CANNOT_FIND_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_SERVER_INACCESSIBLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_SERVER_INACCESSIBLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_UNSUPPORTED_FORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_UNSUPPORTED_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DSHOW_UNSUPPORTED_FORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DSHOW_UNSUPPORTED_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_PLAYLIST_EXISTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_PLAYLIST_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_NONMEDIA_FILES));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_NONMEDIA_FILES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_INVALID_ASX));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_INVALID_ASX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_ALREADY_IN_USE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_ALREADY_IN_USE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_IMAPI_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_IMAPI_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_WMDM_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_WMDM_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CODEC_NEEDED_WITH_4CC));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CODEC_NEEDED_WITH_4CC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CODEC_NEEDED_WITH_FORMATTAG));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CODEC_NEEDED_WITH_FORMATTAG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_MSSAP_NOT_AVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_MSSAP_NOT_AVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_WMDM_INTERFACEDEAD));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_WMDM_INTERFACEDEAD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_WMDM_NOTCERTIFIED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_WMDM_NOTCERTIFIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_WMDM_LICENSE_NOTEXIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_WMDM_LICENSE_NOTEXIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_WMDM_LICENSE_EXPIRED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_WMDM_LICENSE_EXPIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_WMDM_BUSY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_WMDM_BUSY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_WMDM_NORIGHTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_WMDM_NORIGHTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_WMDM_INCORRECT_RIGHTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_WMDM_INCORRECT_RIGHTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_IMAPI_GENERIC));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_IMAPI_GENERIC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_IMAPI_DEVICE_NOTPRESENT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_IMAPI_DEVICE_NOTPRESENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_IMAPI_DEVICE_BUSY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_IMAPI_DEVICE_BUSY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_IMAPI_LOSS_OF_STREAMING));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_IMAPI_LOSS_OF_STREAMING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_SERVER_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_SERVER_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_FILE_OPEN_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_FILE_OPEN_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_VERIFY_ONLINE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_VERIFY_ONLINE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_SERVER_NOT_RESPONDING));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_SERVER_NOT_RESPONDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_CORRUPT_BACKUP));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_CORRUPT_BACKUP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_LICENSE_SERVER_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_LICENSE_SERVER_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_NETWORK_FIREWALL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_NETWORK_FIREWALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_NO_REMOVABLE_MEDIA));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_NO_REMOVABLE_MEDIA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_PROXY_CONNECT_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_PROXY_CONNECT_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_NEED_UPGRADE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_NEED_UPGRADE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_AUDIO_HW_PROBLEM));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_AUDIO_HW_PROBLEM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_INVALID_PROTOCOL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_INVALID_PROTOCOL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_INVALID_LIBRARY_ADD));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_INVALID_LIBRARY_ADD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_MMS_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_MMS_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_NO_PROTOCOLS_SELECTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_NO_PROTOCOLS_SELECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_GOFULLSCREEN_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_GOFULLSCREEN_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_NETWORK_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_NETWORK_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CONNECT_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CONNECT_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_MULTICAST_DISABLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_MULTICAST_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_SERVER_DNS_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_SERVER_DNS_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_PROXY_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_PROXY_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_TAMPERED_CONTENT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_TAMPERED_CONTENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_OUTOFMEMORY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_OUTOFMEMORY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_AUDIO_CODEC_NOT_INSTALLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_AUDIO_CODEC_NOT_INSTALLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_VIDEO_CODEC_NOT_INSTALLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_VIDEO_CODEC_NOT_INSTALLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_IMAPI_DEVICE_INVALIDTYPE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_IMAPI_DEVICE_INVALIDTYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_DRIVER_AUTH_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_DRIVER_AUTH_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_NETWORK_RESOURCE_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_NETWORK_RESOURCE_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_UPGRADE_APPLICATION));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_UPGRADE_APPLICATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_UNKNOWN_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_UNKNOWN_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_INVALID_KEY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_INVALID_KEY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CD_ANOTHER_USER));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CD_ANOTHER_USER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_NEEDS_AUTHORIZATION));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_NEEDS_AUTHORIZATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_BAD_DRIVER));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_BAD_DRIVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_ACCESS_DENIED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_ACCESS_DENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_LICENSE_RESTRICTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_LICENSE_RESTRICTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_INVALID_REQUEST));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_INVALID_REQUEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_CD_STASH_NO_SPACE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_CD_STASH_NO_SPACE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_NEW_HARDWARE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_NEW_HARDWARE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_INVALID_SIG));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_INVALID_SIG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_CANNOT_RESTORE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_CANNOT_RESTORE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_BURN_DISC_OVERFLOW));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_BURN_DISC_OVERFLOW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_GENERIC_LICENSE_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_GENERIC_LICENSE_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_NO_SECURE_CLOCK));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_NO_SECURE_CLOCK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_NO_RIGHTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_NO_RIGHTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_INDIV_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_INDIV_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_SERVER_NONEWCONNECTIONS));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_SERVER_NONEWCONNECTIONS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_MULTIPLE_ERROR_IN_PLAYLIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_MULTIPLE_ERROR_IN_PLAYLIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_IMAPI2_ERASE_FAIL));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_IMAPI2_ERASE_FAIL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_IMAPI2_ERASE_DEVICE_BUSY));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_IMAPI2_ERASE_DEVICE_BUSY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_COMPONENT_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_COMPONENT_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_NO_DEVICE_CERT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_NO_DEVICE_CERT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_SERVER_SECURITY_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_SERVER_SECURITY_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_AUDIO_DEVICE_LOST));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_AUDIO_DEVICE_LOST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_IMAPI_MEDIA_INCOMPATIBLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_IMAPI_MEDIA_INCOMPATIBLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SYNCWIZ_DEVICE_FULL));
	ret = PyModule_AddObject(m, "HRES_NS_E_SYNCWIZ_DEVICE_FULL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SYNCWIZ_CANNOT_CHANGE_SETTINGS));
	ret = PyModule_AddObject(m, "HRES_NS_E_SYNCWIZ_CANNOT_CHANGE_SETTINGS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TRANSCODE_DELETECACHEERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_TRANSCODE_DELETECACHEERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CD_NO_BUFFERS_READ));
	ret = PyModule_AddObject(m, "HRES_NS_E_CD_NO_BUFFERS_READ", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CD_EMPTY_TRACK_QUEUE));
	ret = PyModule_AddObject(m, "HRES_NS_E_CD_EMPTY_TRACK_QUEUE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CD_NO_READER));
	ret = PyModule_AddObject(m, "HRES_NS_E_CD_NO_READER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CD_ISRC_INVALID));
	ret = PyModule_AddObject(m, "HRES_NS_E_CD_ISRC_INVALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CD_MEDIA_CATALOG_NUMBER_INVALID));
	ret = PyModule_AddObject(m, "HRES_NS_E_CD_MEDIA_CATALOG_NUMBER_INVALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SLOW_READ_DIGITAL_WITH_ERRORCORRECTION));
	ret = PyModule_AddObject(m, "HRES_NS_E_SLOW_READ_DIGITAL_WITH_ERRORCORRECTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CD_SPEEDDETECT_NOT_ENOUGH_READS));
	ret = PyModule_AddObject(m, "HRES_NS_E_CD_SPEEDDETECT_NOT_ENOUGH_READS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CD_QUEUEING_DISABLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_CD_QUEUEING_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_ACQUIRING_LICENSE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_ACQUIRING_LICENSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_LICENSE_EXPIRED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_LICENSE_EXPIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_LICENSE_NOTACQUIRED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_LICENSE_NOTACQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_LICENSE_NOTENABLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_LICENSE_NOTENABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_LICENSE_UNUSABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_LICENSE_UNUSABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_LICENSE_CONTENT_REVOKED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_LICENSE_CONTENT_REVOKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_LICENSE_NOSAP));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_LICENSE_NOSAP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_UNABLE_TO_ACQUIRE_LICENSE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_UNABLE_TO_ACQUIRE_LICENSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_LICENSE_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_LICENSE_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_PROTECTED_CONTENT));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_PROTECTED_CONTENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_POLICY_VALUE_NOT_CONFIGURED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_POLICY_VALUE_NOT_CONFIGURED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_CANNOT_SYNC_FROM_INTERNET));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_CANNOT_SYNC_FROM_INTERNET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_CANNOT_SYNC_INVALID_PLAYLIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_CANNOT_SYNC_INVALID_PLAYLIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_FAILED_TO_SYNCHRONIZE_FILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_FAILED_TO_SYNCHRONIZE_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_SYNC_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_SYNC_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_DELETE_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_DELETE_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_FAILED_TO_RETRIEVE_FILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_FAILED_TO_RETRIEVE_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_DEVICE_NOT_RESPONDING));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_DEVICE_NOT_RESPONDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_FAILED_TO_TRANSCODE_PHOTO));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_FAILED_TO_TRANSCODE_PHOTO", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_FAILED_TO_ENCRYPT_TRANSCODED_FILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_FAILED_TO_ENCRYPT_TRANSCODED_FILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_CANNOT_TRANSCODE_TO_AUDIO));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_CANNOT_TRANSCODE_TO_AUDIO", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_CANNOT_TRANSCODE_TO_VIDEO));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_CANNOT_TRANSCODE_TO_VIDEO", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_CANNOT_TRANSCODE_TO_IMAGE));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_CANNOT_TRANSCODE_TO_IMAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_RETRIEVED_FILE_FILENAME_TOO_LONG));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_RETRIEVED_FILE_FILENAME_TOO_LONG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_CEWMDM_DRM_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_CEWMDM_DRM_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INCOMPLETE_PLAYLIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_INCOMPLETE_PLAYLIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_SYNC_RUNNING));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_SYNC_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_SYNC_LOGIN_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_SYNC_LOGIN_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PDA_TRANSCODE_CODEC_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_PDA_TRANSCODE_CODEC_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOT_SYNC_DRM_TO_NON_JANUS_DEVICE));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOT_SYNC_DRM_TO_NON_JANUS_DEVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOT_SYNC_PREVIOUS_SYNC_RUNNING));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOT_SYNC_PREVIOUS_SYNC_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_HWND_NOTFOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_HWND_NOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BKGDOWNLOAD_WRONG_NO_FILES));
	ret = PyModule_AddObject(m, "HRES_NS_E_BKGDOWNLOAD_WRONG_NO_FILES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BKGDOWNLOAD_COMPLETECANCELLEDJOB));
	ret = PyModule_AddObject(m, "HRES_NS_E_BKGDOWNLOAD_COMPLETECANCELLEDJOB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BKGDOWNLOAD_CANCELCOMPLETEDJOB));
	ret = PyModule_AddObject(m, "HRES_NS_E_BKGDOWNLOAD_CANCELCOMPLETEDJOB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BKGDOWNLOAD_NOJOBPOINTER));
	ret = PyModule_AddObject(m, "HRES_NS_E_BKGDOWNLOAD_NOJOBPOINTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BKGDOWNLOAD_INVALIDJOBSIGNATURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_BKGDOWNLOAD_INVALIDJOBSIGNATURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BKGDOWNLOAD_FAILED_TO_CREATE_TEMPFILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_BKGDOWNLOAD_FAILED_TO_CREATE_TEMPFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BKGDOWNLOAD_PLUGIN_FAILEDINITIALIZE));
	ret = PyModule_AddObject(m, "HRES_NS_E_BKGDOWNLOAD_PLUGIN_FAILEDINITIALIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BKGDOWNLOAD_PLUGIN_FAILEDTOMOVEFILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_BKGDOWNLOAD_PLUGIN_FAILEDTOMOVEFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BKGDOWNLOAD_CALLFUNCFAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_BKGDOWNLOAD_CALLFUNCFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BKGDOWNLOAD_CALLFUNCTIMEOUT));
	ret = PyModule_AddObject(m, "HRES_NS_E_BKGDOWNLOAD_CALLFUNCTIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BKGDOWNLOAD_CALLFUNCENDED));
	ret = PyModule_AddObject(m, "HRES_NS_E_BKGDOWNLOAD_CALLFUNCENDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BKGDOWNLOAD_WMDUNPACKFAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_BKGDOWNLOAD_WMDUNPACKFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BKGDOWNLOAD_FAILEDINITIALIZE));
	ret = PyModule_AddObject(m, "HRES_NS_E_BKGDOWNLOAD_FAILEDINITIALIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INTERFACE_NOT_REGISTERED_IN_GIT));
	ret = PyModule_AddObject(m, "HRES_NS_E_INTERFACE_NOT_REGISTERED_IN_GIT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BKGDOWNLOAD_INVALID_FILE_NAME));
	ret = PyModule_AddObject(m, "HRES_NS_E_BKGDOWNLOAD_INVALID_FILE_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_IMAGE_DOWNLOAD_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_IMAGE_DOWNLOAD_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_UDRM_NOUSERLIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_UDRM_NOUSERLIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_DRM_NOT_ACQUIRING));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_DRM_NOT_ACQUIRING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_BSTR_TOO_LONG));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_BSTR_TOO_LONG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_AUTOPLAY_INVALID_STATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_AUTOPLAY_INVALID_STATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WMP_COMPONENT_REVOKED));
	ret = PyModule_AddObject(m, "HRES_NS_E_WMP_COMPONENT_REVOKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CURL_NOTSAFE));
	ret = PyModule_AddObject(m, "HRES_NS_E_CURL_NOTSAFE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CURL_INVALIDCHAR));
	ret = PyModule_AddObject(m, "HRES_NS_E_CURL_INVALIDCHAR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CURL_INVALIDHOSTNAME));
	ret = PyModule_AddObject(m, "HRES_NS_E_CURL_INVALIDHOSTNAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CURL_INVALIDPATH));
	ret = PyModule_AddObject(m, "HRES_NS_E_CURL_INVALIDPATH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CURL_INVALIDSCHEME));
	ret = PyModule_AddObject(m, "HRES_NS_E_CURL_INVALIDSCHEME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CURL_INVALIDURL));
	ret = PyModule_AddObject(m, "HRES_NS_E_CURL_INVALIDURL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CURL_CANTWALK));
	ret = PyModule_AddObject(m, "HRES_NS_E_CURL_CANTWALK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CURL_INVALIDPORT));
	ret = PyModule_AddObject(m, "HRES_NS_E_CURL_INVALIDPORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CURLHELPER_NOTADIRECTORY));
	ret = PyModule_AddObject(m, "HRES_NS_E_CURLHELPER_NOTADIRECTORY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CURLHELPER_NOTAFILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_CURLHELPER_NOTAFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CURL_CANTDECODE));
	ret = PyModule_AddObject(m, "HRES_NS_E_CURL_CANTDECODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CURLHELPER_NOTRELATIVE));
	ret = PyModule_AddObject(m, "HRES_NS_E_CURLHELPER_NOTRELATIVE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CURL_INVALIDBUFFERSIZE));
	ret = PyModule_AddObject(m, "HRES_NS_E_CURL_INVALIDBUFFERSIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SUBSCRIPTIONSERVICE_PLAYBACK_DISALLOWED));
	ret = PyModule_AddObject(m, "HRES_NS_E_SUBSCRIPTIONSERVICE_PLAYBACK_DISALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOT_BUY_OR_DOWNLOAD_FROM_MULTIPLE_SERVICES));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOT_BUY_OR_DOWNLOAD_FROM_MULTIPLE_SERVICES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOT_BUY_OR_DOWNLOAD_CONTENT));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOT_BUY_OR_DOWNLOAD_CONTENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NOT_CONTENT_PARTNER_TRACK));
	ret = PyModule_AddObject(m, "HRES_NS_E_NOT_CONTENT_PARTNER_TRACK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TRACK_DOWNLOAD_REQUIRES_ALBUM_PURCHASE));
	ret = PyModule_AddObject(m, "HRES_NS_E_TRACK_DOWNLOAD_REQUIRES_ALBUM_PURCHASE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TRACK_DOWNLOAD_REQUIRES_PURCHASE));
	ret = PyModule_AddObject(m, "HRES_NS_E_TRACK_DOWNLOAD_REQUIRES_PURCHASE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TRACK_PURCHASE_MAXIMUM_EXCEEDED));
	ret = PyModule_AddObject(m, "HRES_NS_E_TRACK_PURCHASE_MAXIMUM_EXCEEDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SUBSCRIPTIONSERVICE_LOGIN_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_SUBSCRIPTIONSERVICE_LOGIN_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SUBSCRIPTIONSERVICE_DOWNLOAD_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_NS_E_SUBSCRIPTIONSERVICE_DOWNLOAD_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CONTENT_PARTNER_STILL_INITIALIZING));
	ret = PyModule_AddObject(m, "HRES_NS_E_CONTENT_PARTNER_STILL_INITIALIZING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_OPEN_CONTAINING_FOLDER_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_OPEN_CONTAINING_FOLDER_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ADVANCEDEDIT_TOO_MANY_PICTURES));
	ret = PyModule_AddObject(m, "HRES_NS_E_ADVANCEDEDIT_TOO_MANY_PICTURES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_REDIRECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_REDIRECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_STALE_PRESENTATION));
	ret = PyModule_AddObject(m, "HRES_NS_E_STALE_PRESENTATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NAMESPACE_WRONG_PERSIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_NAMESPACE_WRONG_PERSIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NAMESPACE_WRONG_TYPE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NAMESPACE_WRONG_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NAMESPACE_NODE_CONFLICT));
	ret = PyModule_AddObject(m, "HRES_NS_E_NAMESPACE_NODE_CONFLICT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NAMESPACE_NODE_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_NAMESPACE_NODE_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NAMESPACE_BUFFER_TOO_SMALL));
	ret = PyModule_AddObject(m, "HRES_NS_E_NAMESPACE_BUFFER_TOO_SMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NAMESPACE_TOO_MANY_CALLBACKS));
	ret = PyModule_AddObject(m, "HRES_NS_E_NAMESPACE_TOO_MANY_CALLBACKS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NAMESPACE_DUPLICATE_CALLBACK));
	ret = PyModule_AddObject(m, "HRES_NS_E_NAMESPACE_DUPLICATE_CALLBACK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NAMESPACE_CALLBACK_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_NAMESPACE_CALLBACK_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NAMESPACE_NAME_TOO_LONG));
	ret = PyModule_AddObject(m, "HRES_NS_E_NAMESPACE_NAME_TOO_LONG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NAMESPACE_DUPLICATE_NAME));
	ret = PyModule_AddObject(m, "HRES_NS_E_NAMESPACE_DUPLICATE_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NAMESPACE_EMPTY_NAME));
	ret = PyModule_AddObject(m, "HRES_NS_E_NAMESPACE_EMPTY_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NAMESPACE_INDEX_TOO_LARGE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NAMESPACE_INDEX_TOO_LARGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NAMESPACE_BAD_NAME));
	ret = PyModule_AddObject(m, "HRES_NS_E_NAMESPACE_BAD_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NAMESPACE_WRONG_SECURITY));
	ret = PyModule_AddObject(m, "HRES_NS_E_NAMESPACE_WRONG_SECURITY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CACHE_ARCHIVE_CONFLICT));
	ret = PyModule_AddObject(m, "HRES_NS_E_CACHE_ARCHIVE_CONFLICT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CACHE_ORIGIN_SERVER_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_CACHE_ORIGIN_SERVER_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CACHE_ORIGIN_SERVER_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_NS_E_CACHE_ORIGIN_SERVER_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CACHE_NOT_BROADCAST));
	ret = PyModule_AddObject(m, "HRES_NS_E_CACHE_NOT_BROADCAST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CACHE_CANNOT_BE_CACHED));
	ret = PyModule_AddObject(m, "HRES_NS_E_CACHE_CANNOT_BE_CACHED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CACHE_NOT_MODIFIED));
	ret = PyModule_AddObject(m, "HRES_NS_E_CACHE_NOT_MODIFIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOT_REMOVE_PUBLISHING_POINT));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOT_REMOVE_PUBLISHING_POINT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOT_REMOVE_PLUGIN));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOT_REMOVE_PLUGIN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WRONG_PUBLISHING_POINT_TYPE));
	ret = PyModule_AddObject(m, "HRES_NS_E_WRONG_PUBLISHING_POINT_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UNSUPPORTED_LOAD_TYPE));
	ret = PyModule_AddObject(m, "HRES_NS_E_UNSUPPORTED_LOAD_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_PLUGIN_LOAD_TYPE_CONFIGURATION));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_PLUGIN_LOAD_TYPE_CONFIGURATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_PUBLISHING_POINT_NAME));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_PUBLISHING_POINT_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TOO_MANY_MULTICAST_SINKS));
	ret = PyModule_AddObject(m, "HRES_NS_E_TOO_MANY_MULTICAST_SINKS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PUBLISHING_POINT_INVALID_REQUEST_WHILE_STARTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_PUBLISHING_POINT_INVALID_REQUEST_WHILE_STARTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MULTICAST_PLUGIN_NOT_ENABLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_MULTICAST_PLUGIN_NOT_ENABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_OPERATING_SYSTEM_VERSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_OPERATING_SYSTEM_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PUBLISHING_POINT_REMOVED));
	ret = PyModule_AddObject(m, "HRES_NS_E_PUBLISHING_POINT_REMOVED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_PUSH_PUBLISHING_POINT_START_REQUEST));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_PUSH_PUBLISHING_POINT_START_REQUEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UNSUPPORTED_LANGUAGE));
	ret = PyModule_AddObject(m, "HRES_NS_E_UNSUPPORTED_LANGUAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WRONG_OS_VERSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_WRONG_OS_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PUBLISHING_POINT_STOPPED));
	ret = PyModule_AddObject(m, "HRES_NS_E_PUBLISHING_POINT_STOPPED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PLAYLIST_ENTRY_ALREADY_PLAYING));
	ret = PyModule_AddObject(m, "HRES_NS_E_PLAYLIST_ENTRY_ALREADY_PLAYING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_EMPTY_PLAYLIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_EMPTY_PLAYLIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PLAYLIST_PARSE_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_PLAYLIST_PARSE_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PLAYLIST_UNSUPPORTED_ENTRY));
	ret = PyModule_AddObject(m, "HRES_NS_E_PLAYLIST_UNSUPPORTED_ENTRY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PLAYLIST_ENTRY_NOT_IN_PLAYLIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_PLAYLIST_ENTRY_NOT_IN_PLAYLIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PLAYLIST_ENTRY_SEEK));
	ret = PyModule_AddObject(m, "HRES_NS_E_PLAYLIST_ENTRY_SEEK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PLAYLIST_RECURSIVE_PLAYLISTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_PLAYLIST_RECURSIVE_PLAYLISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PLAYLIST_TOO_MANY_NESTED_PLAYLISTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_PLAYLIST_TOO_MANY_NESTED_PLAYLISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PLAYLIST_SHUTDOWN));
	ret = PyModule_AddObject(m, "HRES_NS_E_PLAYLIST_SHUTDOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PLAYLIST_END_RECEDING));
	ret = PyModule_AddObject(m, "HRES_NS_E_PLAYLIST_END_RECEDING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DATAPATH_NO_SINK));
	ret = PyModule_AddObject(m, "HRES_NS_E_DATAPATH_NO_SINK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_PUSH_TEMPLATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_PUSH_TEMPLATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_PUSH_PUBLISHING_POINT));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_PUSH_PUBLISHING_POINT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CRITICAL_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_CRITICAL_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_NEW_CONNECTIONS));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_NEW_CONNECTIONS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WSX_INVALID_VERSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_WSX_INVALID_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_HEADER_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_HEADER_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PUSH_DUPLICATE_PUBLISHING_POINT_NAME));
	ret = PyModule_AddObject(m, "HRES_NS_E_PUSH_DUPLICATE_PUBLISHING_POINT_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_SCRIPT_ENGINE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_SCRIPT_ENGINE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PLUGIN_ERROR_REPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_PLUGIN_ERROR_REPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SOURCE_PLUGIN_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_SOURCE_PLUGIN_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PLAYLIST_PLUGIN_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_PLAYLIST_PLUGIN_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DATA_SOURCE_ENUMERATION_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DATA_SOURCE_ENUMERATION_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MEDIA_PARSER_INVALID_FORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_MEDIA_PARSER_INVALID_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SCRIPT_DEBUGGER_NOT_INSTALLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_SCRIPT_DEBUGGER_NOT_INSTALLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FEATURE_REQUIRES_ENTERPRISE_SERVER));
	ret = PyModule_AddObject(m, "HRES_NS_E_FEATURE_REQUIRES_ENTERPRISE_SERVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WIZARD_RUNNING));
	ret = PyModule_AddObject(m, "HRES_NS_E_WIZARD_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_LOG_URL));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_LOG_URL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_MTU_RANGE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_MTU_RANGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_PLAY_STATISTICS));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_PLAY_STATISTICS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_LOG_NEED_TO_BE_SKIPPED));
	ret = PyModule_AddObject(m, "HRES_NS_E_LOG_NEED_TO_BE_SKIPPED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_HTTP_TEXT_DATACONTAINER_SIZE_LIMIT_EXCEEDED));
	ret = PyModule_AddObject(m, "HRES_NS_E_HTTP_TEXT_DATACONTAINER_SIZE_LIMIT_EXCEEDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PORT_IN_USE));
	ret = PyModule_AddObject(m, "HRES_NS_E_PORT_IN_USE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PORT_IN_USE_HTTP));
	ret = PyModule_AddObject(m, "HRES_NS_E_PORT_IN_USE_HTTP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_HTTP_TEXT_DATACONTAINER_INVALID_SERVER_RESPONSE));
	ret = PyModule_AddObject(m, "HRES_NS_E_HTTP_TEXT_DATACONTAINER_INVALID_SERVER_RESPONSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ARCHIVE_REACH_QUOTA));
	ret = PyModule_AddObject(m, "HRES_NS_E_ARCHIVE_REACH_QUOTA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ARCHIVE_ABORT_DUE_TO_BCAST));
	ret = PyModule_AddObject(m, "HRES_NS_E_ARCHIVE_ABORT_DUE_TO_BCAST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ARCHIVE_GAP_DETECTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_ARCHIVE_GAP_DETECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_AUTHORIZATION_FILE_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_AUTHORIZATION_FILE_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BAD_MARKIN));
	ret = PyModule_AddObject(m, "HRES_NS_E_BAD_MARKIN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BAD_MARKOUT));
	ret = PyModule_AddObject(m, "HRES_NS_E_BAD_MARKOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NOMATCHING_MEDIASOURCE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NOMATCHING_MEDIASOURCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UNSUPPORTED_SOURCETYPE));
	ret = PyModule_AddObject(m, "HRES_NS_E_UNSUPPORTED_SOURCETYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TOO_MANY_AUDIO));
	ret = PyModule_AddObject(m, "HRES_NS_E_TOO_MANY_AUDIO", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TOO_MANY_VIDEO));
	ret = PyModule_AddObject(m, "HRES_NS_E_TOO_MANY_VIDEO", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NOMATCHING_ELEMENT));
	ret = PyModule_AddObject(m, "HRES_NS_E_NOMATCHING_ELEMENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MISMATCHED_MEDIACONTENT));
	ret = PyModule_AddObject(m, "HRES_NS_E_MISMATCHED_MEDIACONTENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOT_DELETE_ACTIVE_SOURCEGROUP));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOT_DELETE_ACTIVE_SOURCEGROUP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_AUDIODEVICE_BUSY));
	ret = PyModule_AddObject(m, "HRES_NS_E_AUDIODEVICE_BUSY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_AUDIODEVICE_UNEXPECTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_AUDIODEVICE_UNEXPECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_AUDIODEVICE_BADFORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_AUDIODEVICE_BADFORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_VIDEODEVICE_BUSY));
	ret = PyModule_AddObject(m, "HRES_NS_E_VIDEODEVICE_BUSY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_VIDEODEVICE_UNEXPECTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_VIDEODEVICE_UNEXPECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALIDCALL_WHILE_ENCODER_RUNNING));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALIDCALL_WHILE_ENCODER_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_PROFILE_IN_SOURCEGROUP));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_PROFILE_IN_SOURCEGROUP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_VIDEODRIVER_UNSTABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_VIDEODRIVER_UNSTABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_VIDCAPSTARTFAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_VIDCAPSTARTFAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_VIDSOURCECOMPRESSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_VIDSOURCECOMPRESSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_VIDSOURCESIZE));
	ret = PyModule_AddObject(m, "HRES_NS_E_VIDSOURCESIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ICMQUERYFORMAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_ICMQUERYFORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_VIDCAPCREATEWINDOW));
	ret = PyModule_AddObject(m, "HRES_NS_E_VIDCAPCREATEWINDOW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_VIDCAPDRVINUSE));
	ret = PyModule_AddObject(m, "HRES_NS_E_VIDCAPDRVINUSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_MEDIAFORMAT_IN_SOURCE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_MEDIAFORMAT_IN_SOURCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_VALID_OUTPUT_STREAM));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_VALID_OUTPUT_STREAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_VALID_SOURCE_PLUGIN));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_VALID_SOURCE_PLUGIN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_ACTIVE_SOURCEGROUP));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_ACTIVE_SOURCEGROUP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_SCRIPT_STREAM));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_SCRIPT_STREAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALIDCALL_WHILE_ARCHIVAL_RUNNING));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALIDCALL_WHILE_ARCHIVAL_RUNNING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALIDPACKETSIZE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALIDPACKETSIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PLUGIN_CLSID_INVALID));
	ret = PyModule_AddObject(m, "HRES_NS_E_PLUGIN_CLSID_INVALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UNSUPPORTED_ARCHIVETYPE));
	ret = PyModule_AddObject(m, "HRES_NS_E_UNSUPPORTED_ARCHIVETYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UNSUPPORTED_ARCHIVEOPERATION));
	ret = PyModule_AddObject(m, "HRES_NS_E_UNSUPPORTED_ARCHIVEOPERATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ARCHIVE_FILENAME_NOTSET));
	ret = PyModule_AddObject(m, "HRES_NS_E_ARCHIVE_FILENAME_NOTSET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SOURCEGROUP_NOTPREPARED));
	ret = PyModule_AddObject(m, "HRES_NS_E_SOURCEGROUP_NOTPREPARED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PROFILE_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_PROFILE_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INCORRECTCLIPSETTINGS));
	ret = PyModule_AddObject(m, "HRES_NS_E_INCORRECTCLIPSETTINGS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NOSTATSAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NOSTATSAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NOTARCHIVING));
	ret = PyModule_AddObject(m, "HRES_NS_E_NOTARCHIVING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALIDCALL_WHILE_ENCODER_STOPPED));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALIDCALL_WHILE_ENCODER_STOPPED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NOSOURCEGROUPS));
	ret = PyModule_AddObject(m, "HRES_NS_E_NOSOURCEGROUPS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALIDINPUTFPS));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALIDINPUTFPS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_DATAVIEW_SUPPORT));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_DATAVIEW_SUPPORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CODEC_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_CODEC_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ARCHIVE_SAME_AS_INPUT));
	ret = PyModule_AddObject(m, "HRES_NS_E_ARCHIVE_SAME_AS_INPUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SOURCE_NOTSPECIFIED));
	ret = PyModule_AddObject(m, "HRES_NS_E_SOURCE_NOTSPECIFIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_REALTIME_TIMECOMPRESSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_REALTIME_TIMECOMPRESSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UNSUPPORTED_ENCODER_DEVICE));
	ret = PyModule_AddObject(m, "HRES_NS_E_UNSUPPORTED_ENCODER_DEVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UNEXPECTED_DISPLAY_SETTINGS));
	ret = PyModule_AddObject(m, "HRES_NS_E_UNEXPECTED_DISPLAY_SETTINGS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_AUDIODATA));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_AUDIODATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INPUTSOURCE_PROBLEM));
	ret = PyModule_AddObject(m, "HRES_NS_E_INPUTSOURCE_PROBLEM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_WME_VERSION_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_WME_VERSION_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_REALTIME_PREPROCESS));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_REALTIME_PREPROCESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_REPEAT_PREPROCESS));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_REPEAT_PREPROCESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOT_PAUSE_LIVEBROADCAST));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOT_PAUSE_LIVEBROADCAST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_PROFILE_NOT_SET));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_PROFILE_NOT_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DUPLICATE_DRMPROFILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DUPLICATE_DRMPROFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_DEVICE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_DEVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SPEECHEDL_ON_NON_MIXEDMODE));
	ret = PyModule_AddObject(m, "HRES_NS_E_SPEECHEDL_ON_NON_MIXEDMODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_PASSWORD_TOO_LONG));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_PASSWORD_TOO_LONG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DEVCONTROL_FAILED_SEEK));
	ret = PyModule_AddObject(m, "HRES_NS_E_DEVCONTROL_FAILED_SEEK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INTERLACE_REQUIRE_SAMESIZE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INTERLACE_REQUIRE_SAMESIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TOO_MANY_DEVICECONTROL));
	ret = PyModule_AddObject(m, "HRES_NS_E_TOO_MANY_DEVICECONTROL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_MULTIPASS_FOR_LIVEDEVICE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_MULTIPASS_FOR_LIVEDEVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MISSING_AUDIENCE));
	ret = PyModule_AddObject(m, "HRES_NS_E_MISSING_AUDIENCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_AUDIENCE_CONTENTTYPE_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_AUDIENCE_CONTENTTYPE_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MISSING_SOURCE_INDEX));
	ret = PyModule_AddObject(m, "HRES_NS_E_MISSING_SOURCE_INDEX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NUM_LANGUAGE_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_NUM_LANGUAGE_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_LANGUAGE_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_LANGUAGE_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_VBRMODE_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_VBRMODE_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_INPUT_AUDIENCE_INDEX));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_INPUT_AUDIENCE_INDEX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_INPUT_LANGUAGE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_INPUT_LANGUAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_INPUT_STREAM));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_INPUT_STREAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_EXPECT_MONO_WAV_INPUT));
	ret = PyModule_AddObject(m, "HRES_NS_E_EXPECT_MONO_WAV_INPUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INPUT_WAVFORMAT_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_INPUT_WAVFORMAT_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_RECORDQ_DISK_FULL));
	ret = PyModule_AddObject(m, "HRES_NS_E_RECORDQ_DISK_FULL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_PAL_INVERSE_TELECINE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_PAL_INVERSE_TELECINE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ACTIVE_SG_DEVICE_DISCONNECTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_ACTIVE_SG_DEVICE_DISCONNECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ACTIVE_SG_DEVICE_CONTROL_DISCONNECTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_ACTIVE_SG_DEVICE_CONTROL_DISCONNECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_FRAMES_SUBMITTED_TO_ANALYZER));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_FRAMES_SUBMITTED_TO_ANALYZER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INPUT_DOESNOT_SUPPORT_SMPTE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INPUT_DOESNOT_SUPPORT_SMPTE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_SMPTE_WITH_MULTIPLE_SOURCEGROUPS));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_SMPTE_WITH_MULTIPLE_SOURCEGROUPS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BAD_CONTENTEDL));
	ret = PyModule_AddObject(m, "HRES_NS_E_BAD_CONTENTEDL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INTERLACEMODE_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_INTERLACEMODE_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NONSQUAREPIXELMODE_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_NONSQUAREPIXELMODE_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SMPTEMODE_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_SMPTEMODE_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_END_OF_TAPE));
	ret = PyModule_AddObject(m, "HRES_NS_E_END_OF_TAPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_MEDIA_IN_AUDIENCE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_MEDIA_IN_AUDIENCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_AUDIENCES));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_AUDIENCES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_AUDIO_COMPAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_AUDIO_COMPAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VBR_COMPAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VBR_COMPAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_PROFILE_NAME));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_PROFILE_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VBR_WITH_UNCOMP));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VBR_WITH_UNCOMP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MULTIPLE_VBR_AUDIENCES));
	ret = PyModule_AddObject(m, "HRES_NS_E_MULTIPLE_VBR_AUDIENCES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UNCOMP_COMP_COMBINATION));
	ret = PyModule_AddObject(m, "HRES_NS_E_UNCOMP_COMP_COMBINATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MULTIPLE_AUDIO_CODECS));
	ret = PyModule_AddObject(m, "HRES_NS_E_MULTIPLE_AUDIO_CODECS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MULTIPLE_AUDIO_FORMATS));
	ret = PyModule_AddObject(m, "HRES_NS_E_MULTIPLE_AUDIO_FORMATS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_AUDIO_BITRATE_STEPDOWN));
	ret = PyModule_AddObject(m, "HRES_NS_E_AUDIO_BITRATE_STEPDOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_AUDIO_PEAKRATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_AUDIO_PEAKRATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_AUDIO_PEAKRATE_2));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_AUDIO_PEAKRATE_2", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_AUDIO_BUFFERMAX));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_AUDIO_BUFFERMAX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MULTIPLE_VIDEO_CODECS));
	ret = PyModule_AddObject(m, "HRES_NS_E_MULTIPLE_VIDEO_CODECS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MULTIPLE_VIDEO_SIZES));
	ret = PyModule_AddObject(m, "HRES_NS_E_MULTIPLE_VIDEO_SIZES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VIDEO_BITRATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VIDEO_BITRATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_VIDEO_BITRATE_STEPDOWN));
	ret = PyModule_AddObject(m, "HRES_NS_E_VIDEO_BITRATE_STEPDOWN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VIDEO_PEAKRATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VIDEO_PEAKRATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VIDEO_PEAKRATE_2));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VIDEO_PEAKRATE_2", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VIDEO_WIDTH));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VIDEO_WIDTH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VIDEO_HEIGHT));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VIDEO_HEIGHT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VIDEO_FPS));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VIDEO_FPS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VIDEO_KEYFRAME));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VIDEO_KEYFRAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VIDEO_IQUALITY));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VIDEO_IQUALITY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VIDEO_CQUALITY));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VIDEO_CQUALITY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VIDEO_BUFFER));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VIDEO_BUFFER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VIDEO_BUFFERMAX));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VIDEO_BUFFERMAX", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VIDEO_BUFFERMAX_2));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VIDEO_BUFFERMAX_2", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VIDEO_WIDTH_ALIGN));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VIDEO_WIDTH_ALIGN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VIDEO_HEIGHT_ALIGN));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VIDEO_HEIGHT_ALIGN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MULTIPLE_SCRIPT_BITRATES));
	ret = PyModule_AddObject(m, "HRES_NS_E_MULTIPLE_SCRIPT_BITRATES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_SCRIPT_BITRATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_SCRIPT_BITRATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MULTIPLE_FILE_BITRATES));
	ret = PyModule_AddObject(m, "HRES_NS_E_MULTIPLE_FILE_BITRATES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_FILE_BITRATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_FILE_BITRATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SAME_AS_INPUT_COMBINATION));
	ret = PyModule_AddObject(m, "HRES_NS_E_SAME_AS_INPUT_COMBINATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SOURCE_CANNOT_LOOP));
	ret = PyModule_AddObject(m, "HRES_NS_E_SOURCE_CANNOT_LOOP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_FOLDDOWN_COEFFICIENTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_FOLDDOWN_COEFFICIENTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRMPROFILE_NOTFOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRMPROFILE_NOTFOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_TIMECODE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_TIMECODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_AUDIO_TIMECOMPRESSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_AUDIO_TIMECOMPRESSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_TWOPASS_TIMECOMPRESSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_TWOPASS_TIMECOMPRESSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TIMECODE_REQUIRES_VIDEOSTREAM));
	ret = PyModule_AddObject(m, "HRES_NS_E_TIMECODE_REQUIRES_VIDEOSTREAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_MBR_WITH_TIMECODE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_MBR_WITH_TIMECODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_INTERLACEMODE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_INTERLACEMODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_INTERLACE_COMPAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_INTERLACE_COMPAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_NONSQUAREPIXEL_COMPAT));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_NONSQUAREPIXEL_COMPAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_SOURCE_WITH_DEVICE_CONTROL));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_SOURCE_WITH_DEVICE_CONTROL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOT_GENERATE_BROADCAST_INFO_FOR_QUALITYVBR));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOT_GENERATE_BROADCAST_INFO_FOR_QUALITYVBR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_EXCEED_MAX_DRM_PROFILE_LIMIT));
	ret = PyModule_AddObject(m, "HRES_NS_E_EXCEED_MAX_DRM_PROFILE_LIMIT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DEVICECONTROL_UNSTABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DEVICECONTROL_UNSTABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_PIXEL_ASPECT_RATIO));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_PIXEL_ASPECT_RATIO", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_AUDIENCE__LANGUAGE_CONTENTTYPE_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_AUDIENCE__LANGUAGE_CONTENTTYPE_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_PROFILE_CONTENTTYPE));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_PROFILE_CONTENTTYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TRANSFORM_PLUGIN_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_TRANSFORM_PLUGIN_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TRANSFORM_PLUGIN_INVALID));
	ret = PyModule_AddObject(m, "HRES_NS_E_TRANSFORM_PLUGIN_INVALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_EDL_REQUIRED_FOR_DEVICE_MULTIPASS));
	ret = PyModule_AddObject(m, "HRES_NS_E_EDL_REQUIRED_FOR_DEVICE_MULTIPASS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_VIDEO_WIDTH_FOR_INTERLACED_ENCODING));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_VIDEO_WIDTH_FOR_INTERLACED_ENCODING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MARKIN_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_MARKIN_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_APPLICATION));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_APPLICATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_STORE_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_STORE_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_SECURE_STORE_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_SECURE_STORE_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_STORE_SAVE_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_STORE_SAVE_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_SECURE_STORE_UNLOCK_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_SECURE_STORE_UNLOCK_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_CONTENT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_CONTENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_OPEN_LICENSE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_OPEN_LICENSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_LICENSE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_LICENSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_MACHINE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_MACHINE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_ENUM_LICENSE_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_ENUM_LICENSE_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_LICENSE_REQUEST));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_LICENSE_REQUEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_INITIALIZE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_INITIALIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_ACQUIRE_LICENSE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_ACQUIRE_LICENSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_LICENSE_ACQUIRED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_LICENSE_ACQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_NO_RIGHTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_NO_RIGHTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_KEY_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_KEY_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_ENCRYPT_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_ENCRYPT_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_DECRYPT_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_DECRYPT_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_INVALID_XML));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_INVALID_XML", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_NEEDS_INDIVIDUALIZATION));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_NEEDS_INDIVIDUALIZATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_ALREADY_INDIVIDUALIZED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_ALREADY_INDIVIDUALIZED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_ACTION_NOT_QUERIED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_ACTION_NOT_QUERIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_ACQUIRING_LICENSE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_ACQUIRING_LICENSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INDIVIDUALIZING));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INDIVIDUALIZING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BACKUP_RESTORE_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_BACKUP_RESTORE_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BACKUP_RESTORE_BAD_REQUEST_ID));
	ret = PyModule_AddObject(m, "HRES_NS_E_BACKUP_RESTORE_BAD_REQUEST_ID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_PARAMETERS_MISMATCHED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_PARAMETERS_MISMATCHED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_LICENSE_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_LICENSE_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_INDI_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_INDI_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_ENCRYPT_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_ENCRYPT_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_DECRYPT_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_DECRYPT_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_PROPERTIES_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_PROPERTIES_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_BACKUP_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_BACKUP_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INDIVIDUALIZE_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INDIVIDUALIZE_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_OPEN_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_OPEN_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_CLOSE_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_CLOSE_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_GET_LICENSE_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_GET_LICENSE_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_QUERY_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_QUERY_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_REPORT_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_REPORT_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_GET_LICENSESTRING_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_GET_LICENSESTRING_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_GET_CONTENTSTRING_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_GET_CONTENTSTRING_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_MONITOR_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_MONITOR_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_SET_PARAMETER));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_SET_PARAMETER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_APPDATA));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_APPDATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_APPDATA_VERSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_APPDATA_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_BACKUP_EXISTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_BACKUP_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_BACKUP_CORRUPT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_BACKUP_CORRUPT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_BACKUPRESTORE_BUSY));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_BACKUPRESTORE_BUSY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BACKUP_RESTORE_BAD_DATA));
	ret = PyModule_AddObject(m, "HRES_NS_E_BACKUP_RESTORE_BAD_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_UNUSABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_UNUSABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_PROPERTY));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_PROPERTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_SECURE_STORE_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_SECURE_STORE_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_CACHED_CONTENT_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_CACHED_CONTENT_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INDIVIDUALIZATION_INCOMPLETE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INDIVIDUALIZATION_INCOMPLETE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_DRIVER_AUTH_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_DRIVER_AUTH_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_NEED_UPGRADE_MSSAP));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_NEED_UPGRADE_MSSAP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_REOPEN_CONTENT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_REOPEN_CONTENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_DRIVER_DIGIOUT_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_DRIVER_DIGIOUT_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_SECURESTORE_PASSWORD));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_SECURESTORE_PASSWORD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_APPCERT_REVOKED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_APPCERT_REVOKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_RESTORE_FRAUD));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_RESTORE_FRAUD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_HARDWARE_INCONSISTENT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_HARDWARE_INCONSISTENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_SDMI_TRIGGER));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_SDMI_TRIGGER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_SDMI_NOMORECOPIES));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_SDMI_NOMORECOPIES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_HEADER_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_HEADER_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_KEYS_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_KEYS_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_NOTACQUIRED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_NOTACQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_CODING_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_CODING_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_STATE_DATA_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_STATE_DATA_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_BUFFER_TOO_SMALL));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_BUFFER_TOO_SMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNSUPPORTED_PROPERTY));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNSUPPORTED_PROPERTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_ERROR_BAD_NET_RESP));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_ERROR_BAD_NET_RESP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_STORE_NOTALLSTORED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_STORE_NOTALLSTORED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_SECURITY_COMPONENT_SIGNATURE_INVALID));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_SECURITY_COMPONENT_SIGNATURE_INVALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_DATA));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_POLICY_DISABLE_ONLINE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_POLICY_DISABLE_ONLINE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_AUTHENTICATION_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_AUTHENTICATION_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_NOT_CONFIGURED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_NOT_CONFIGURED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_DEVICE_ACTIVATION_CANCELED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_DEVICE_ACTIVATION_CANCELED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BACKUP_RESTORE_TOO_MANY_RESETS));
	ret = PyModule_AddObject(m, "HRES_NS_E_BACKUP_RESTORE_TOO_MANY_RESETS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_DEBUGGING_NOT_ALLOWED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_DEBUGGING_NOT_ALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_OPERATION_CANCELED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_OPERATION_CANCELED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_RESTRICTIONS_NOT_RETRIEVED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_RESTRICTIONS_NOT_RETRIEVED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_PLAYLIST_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_PLAYLIST_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_PLAYLIST_BURN_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_PLAYLIST_BURN_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_DEVICE_REGISTRATION_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_DEVICE_REGISTRATION_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_METERING_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_METERING_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_TRACK_EXCEEDED_PLAYLIST_RESTICTION));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_TRACK_EXCEEDED_PLAYLIST_RESTICTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_TRACK_EXCEEDED_TRACKBURN_RESTRICTION));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_TRACK_EXCEEDED_TRACKBURN_RESTRICTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_GET_DEVICE_CERT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_GET_DEVICE_CERT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_GET_SECURE_CLOCK));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_GET_SECURE_CLOCK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_SET_SECURE_CLOCK));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_SET_SECURE_CLOCK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_GET_SECURE_CLOCK_FROM_SERVER));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_GET_SECURE_CLOCK_FROM_SERVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_POLICY_METERING_DISABLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_POLICY_METERING_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_TRANSFER_CHAINED_LICENSES_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_TRANSFER_CHAINED_LICENSES_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_SDK_VERSIONMISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_SDK_VERSIONMISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LIC_NEEDS_DEVICE_CLOCK_SET));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LIC_NEEDS_DEVICE_CLOCK_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_LICENSE_HEADER_MISSING_URL));
	ret = PyModule_AddObject(m, "HRES_NS_E_LICENSE_HEADER_MISSING_URL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DEVICE_NOT_WMDRM_DEVICE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DEVICE_NOT_WMDRM_DEVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_APPCERT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_APPCERT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_PROTOCOL_FORCEFUL_TERMINATION_ON_PETITION));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_PROTOCOL_FORCEFUL_TERMINATION_ON_PETITION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_PROTOCOL_FORCEFUL_TERMINATION_ON_CHALLENGE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_PROTOCOL_FORCEFUL_TERMINATION_ON_CHALLENGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_CHECKPOINT_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_CHECKPOINT_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_BB_UNABLE_TO_INITIALIZE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_BB_UNABLE_TO_INITIALIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_LOAD_HARDWARE_ID));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_LOAD_HARDWARE_ID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_OPEN_DATA_STORE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_OPEN_DATA_STORE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_DATASTORE_CORRUPT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_DATASTORE_CORRUPT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_INMEMORYSTORE_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_INMEMORYSTORE_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_STUBLIB_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_STUBLIB_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_CERTIFICATE_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_CERTIFICATE_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_MIGRATION_TARGET_NOT_ONLINE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_MIGRATION_TARGET_NOT_ONLINE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_MIGRATION_IMAGE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_MIGRATION_IMAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_MIGRATION_TARGET_STATES_CORRUPTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_MIGRATION_TARGET_STATES_CORRUPTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_MIGRATION_IMPORTER_NOT_AVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_MIGRATION_IMPORTER_NOT_AVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_DRM_E_MIGRATION_UPGRADE_WITH_DIFF_SID));
	ret = PyModule_AddObject(m, "HRES_NS_DRM_E_MIGRATION_UPGRADE_WITH_DIFF_SID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_DRM_E_MIGRATION_SOURCE_MACHINE_IN_USE));
	ret = PyModule_AddObject(m, "HRES_NS_DRM_E_MIGRATION_SOURCE_MACHINE_IN_USE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_DRM_E_MIGRATION_TARGET_MACHINE_LESS_THAN_LH));
	ret = PyModule_AddObject(m, "HRES_NS_DRM_E_MIGRATION_TARGET_MACHINE_LESS_THAN_LH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_DRM_E_MIGRATION_IMAGE_ALREADY_EXISTS));
	ret = PyModule_AddObject(m, "HRES_NS_DRM_E_MIGRATION_IMAGE_ALREADY_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_HARDWAREID_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_HARDWAREID_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_DRMV2CLT_STUBLIB));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_DRMV2CLT_STUBLIB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_MIGRATION_INVALID_LEGACYV2_DATA));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_MIGRATION_INVALID_LEGACYV2_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_MIGRATION_LICENSE_ALREADY_EXISTS));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_MIGRATION_LICENSE_ALREADY_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_MIGRATION_INVALID_LEGACYV2_SST_PASSWORD));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_MIGRATION_INVALID_LEGACYV2_SST_PASSWORD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_MIGRATION_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_MIGRATION_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_CREATE_MIGRATION_IMPORTER_OBJECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_CREATE_MIGRATION_IMPORTER_OBJECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_CHECKPOINT_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_CHECKPOINT_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_CHECKPOINT_CORRUPT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_CHECKPOINT_CORRUPT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_REG_FLUSH_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_REG_FLUSH_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_HDS_KEY_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_NS_E_HDS_KEY_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_MIGRATION_OPERATION_CANCELLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_MIGRATION_OPERATION_CANCELLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_MIGRATION_OBJECT_IN_USE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_MIGRATION_OBJECT_IN_USE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_MALFORMED_CONTENT_HEADER));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_MALFORMED_CONTENT_HEADER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_EXPIRED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_EXPIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_NOTENABLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_NOTENABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_APPSECLOW));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_APPSECLOW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_STORE_NEEDINDI));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_STORE_NEEDINDI", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_STORE_NOTALLOWED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_STORE_NOTALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_APP_NOTALLOWED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_APP_NOTALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_CERT_EXPIRED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_CERT_EXPIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_SECLOW));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_SECLOW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_CONTENT_REVOKED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_CONTENT_REVOKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_DEVICE_NOT_REGISTERED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_DEVICE_NOT_REGISTERED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_NOSAP));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_NOSAP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_NOSVP));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_NOSVP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_NOWDM));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_NOWDM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_NOTRUSTEDCODEC));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_NOTRUSTEDCODEC", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_SOURCEID_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_SOURCEID_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_NEEDS_UPGRADE_TEMPFILE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_NEEDS_UPGRADE_TEMPFILE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_NEED_UPGRADE_PD));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_NEED_UPGRADE_PD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_SIGNATURE_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_SIGNATURE_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_SERVER_INFO_MISSING));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_SERVER_INFO_MISSING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_BUSY));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_BUSY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_PD_TOO_MANY_DEVICES));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_PD_TOO_MANY_DEVICES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INDIV_FRAUD));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INDIV_FRAUD", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INDIV_NO_CABS));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INDIV_NO_CABS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INDIV_SERVICE_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INDIV_SERVICE_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_RESTORE_SERVICE_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_RESTORE_SERVICE_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_CLIENT_CODE_EXPIRED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_CLIENT_CODE_EXPIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_NO_UPLINK_LICENSE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_NO_UPLINK_LICENSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_KID));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_KID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_INITIALIZATION_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_INITIALIZATION_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_CHAIN_TOO_LONG));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_CHAIN_TOO_LONG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNSUPPORTED_ALGORITHM));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNSUPPORTED_ALGORITHM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_DELETION_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_DELETION_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_CERTIFICATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_CERTIFICATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_CERTIFICATE_REVOKED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_CERTIFICATE_REVOKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_LICENSE_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_LICENSE_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_DEVICE_LIMIT_REACHED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_DEVICE_LIMIT_REACHED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_VERIFY_PROXIMITY));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_VERIFY_PROXIMITY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_MUST_REGISTER));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_MUST_REGISTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_MUST_APPROVE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_MUST_APPROVE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_MUST_REVALIDATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_MUST_REVALIDATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_PROXIMITY_RESPONSE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_PROXIMITY_RESPONSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_SESSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_SESSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_DEVICE_NOT_OPEN));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_DEVICE_NOT_OPEN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_DEVICE_ALREADY_REGISTERED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_DEVICE_ALREADY_REGISTERED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNSUPPORTED_PROTOCOL_VERSION));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNSUPPORTED_PROTOCOL_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNSUPPORTED_ACTION));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNSUPPORTED_ACTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_CERTIFICATE_SECURITY_LEVEL_INADEQUATE));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_CERTIFICATE_SECURITY_LEVEL_INADEQUATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_UNABLE_TO_OPEN_PORT));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_UNABLE_TO_OPEN_PORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_BAD_REQUEST));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_BAD_REQUEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_CRL));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_CRL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_ATTRIBUTE_TOO_LONG));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_ATTRIBUTE_TOO_LONG", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_EXPIRED_LICENSEBLOB));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_EXPIRED_LICENSEBLOB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INVALID_LICENSEBLOB));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INVALID_LICENSEBLOB", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_INCLUSION_LIST_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_INCLUSION_LIST_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_DRMV2CLT_REVOKED));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_DRMV2CLT_REVOKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_DRM_RIV_TOO_SMALL));
	ret = PyModule_AddObject(m, "HRES_NS_E_DRM_RIV_TOO_SMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_OUTPUT_PROTECTION_LEVEL_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_OUTPUT_PROTECTION_LEVEL_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_COMPRESSED_DIGITAL_VIDEO_PROTECTION_LEVEL_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_COMPRESSED_DIGITAL_VIDEO_PROTECTION_LEVEL_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UNCOMPRESSED_DIGITAL_VIDEO_PROTECTION_LEVEL_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_UNCOMPRESSED_DIGITAL_VIDEO_PROTECTION_LEVEL_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ANALOG_VIDEO_PROTECTION_LEVEL_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_ANALOG_VIDEO_PROTECTION_LEVEL_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_COMPRESSED_DIGITAL_AUDIO_PROTECTION_LEVEL_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_COMPRESSED_DIGITAL_AUDIO_PROTECTION_LEVEL_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UNCOMPRESSED_DIGITAL_AUDIO_PROTECTION_LEVEL_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_UNCOMPRESSED_DIGITAL_AUDIO_PROTECTION_LEVEL_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_OUTPUT_PROTECTION_SCHEME_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_OUTPUT_PROTECTION_SCHEME_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_REBOOT_RECOMMENDED));
	ret = PyModule_AddObject(m, "HRES_NS_E_REBOOT_RECOMMENDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_REBOOT_REQUIRED));
	ret = PyModule_AddObject(m, "HRES_NS_E_REBOOT_REQUIRED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SETUP_INCOMPLETE));
	ret = PyModule_AddObject(m, "HRES_NS_E_SETUP_INCOMPLETE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SETUP_DRM_MIGRATION_FAILED));
	ret = PyModule_AddObject(m, "HRES_NS_E_SETUP_DRM_MIGRATION_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SETUP_IGNORABLE_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_SETUP_IGNORABLE_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SETUP_DRM_MIGRATION_FAILED_AND_IGNORABLE_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_SETUP_DRM_MIGRATION_FAILED_AND_IGNORABLE_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SETUP_BLOCKED));
	ret = PyModule_AddObject(m, "HRES_NS_E_SETUP_BLOCKED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_UNKNOWN_PROTOCOL));
	ret = PyModule_AddObject(m, "HRES_NS_E_UNKNOWN_PROTOCOL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_REDIRECT_TO_PROXY));
	ret = PyModule_AddObject(m, "HRES_NS_E_REDIRECT_TO_PROXY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INTERNAL_SERVER_ERROR));
	ret = PyModule_AddObject(m, "HRES_NS_E_INTERNAL_SERVER_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BAD_REQUEST));
	ret = PyModule_AddObject(m, "HRES_NS_E_BAD_REQUEST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ERROR_FROM_PROXY));
	ret = PyModule_AddObject(m, "HRES_NS_E_ERROR_FROM_PROXY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PROXY_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_NS_E_PROXY_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SERVER_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_SERVER_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_REFUSED_BY_SERVER));
	ret = PyModule_AddObject(m, "HRES_NS_E_REFUSED_BY_SERVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INCOMPATIBLE_SERVER));
	ret = PyModule_AddObject(m, "HRES_NS_E_INCOMPATIBLE_SERVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MULTICAST_DISABLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_MULTICAST_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_REDIRECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_REDIRECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_ALL_PROTOCOLS_DISABLED));
	ret = PyModule_AddObject(m, "HRES_NS_E_ALL_PROTOCOLS_DISABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MSBD_NO_LONGER_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_MSBD_NO_LONGER_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PROXY_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_PROXY_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOT_CONNECT_TO_PROXY));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOT_CONNECT_TO_PROXY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SERVER_DNS_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_NS_E_SERVER_DNS_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PROXY_DNS_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_NS_E_PROXY_DNS_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CLOSED_ON_SUSPEND));
	ret = PyModule_AddObject(m, "HRES_NS_E_CLOSED_ON_SUSPEND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CANNOT_READ_PLAYLIST_FROM_MEDIASERVER));
	ret = PyModule_AddObject(m, "HRES_NS_E_CANNOT_READ_PLAYLIST_FROM_MEDIASERVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SESSION_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_SESSION_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_REQUIRE_STREAMING_CLIENT));
	ret = PyModule_AddObject(m, "HRES_NS_E_REQUIRE_STREAMING_CLIENT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PLAYLIST_ENTRY_HAS_CHANGED));
	ret = PyModule_AddObject(m, "HRES_NS_E_PLAYLIST_ENTRY_HAS_CHANGED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PROXY_ACCESSDENIED));
	ret = PyModule_AddObject(m, "HRES_NS_E_PROXY_ACCESSDENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PROXY_SOURCE_ACCESSDENIED));
	ret = PyModule_AddObject(m, "HRES_NS_E_PROXY_SOURCE_ACCESSDENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NETWORK_SINK_WRITE));
	ret = PyModule_AddObject(m, "HRES_NS_E_NETWORK_SINK_WRITE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_FIREWALL));
	ret = PyModule_AddObject(m, "HRES_NS_E_FIREWALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_MMS_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_MMS_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SERVER_ACCESSDENIED));
	ret = PyModule_AddObject(m, "HRES_NS_E_SERVER_ACCESSDENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_RESOURCE_GONE));
	ret = PyModule_AddObject(m, "HRES_NS_E_RESOURCE_GONE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_NO_EXISTING_PACKETIZER));
	ret = PyModule_AddObject(m, "HRES_NS_E_NO_EXISTING_PACKETIZER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_BAD_SYNTAX_IN_SERVER_RESPONSE));
	ret = PyModule_AddObject(m, "HRES_NS_E_BAD_SYNTAX_IN_SERVER_RESPONSE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_RESET_SOCKET_CONNECTION));
	ret = PyModule_AddObject(m, "HRES_NS_E_RESET_SOCKET_CONNECTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TOO_MANY_HOPS));
	ret = PyModule_AddObject(m, "HRES_NS_E_TOO_MANY_HOPS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TOO_MUCH_DATA_FROM_SERVER));
	ret = PyModule_AddObject(m, "HRES_NS_E_TOO_MUCH_DATA_FROM_SERVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_CONNECT_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_NS_E_CONNECT_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PROXY_CONNECT_TIMEOUT));
	ret = PyModule_AddObject(m, "HRES_NS_E_PROXY_CONNECT_TIMEOUT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SESSION_INVALID));
	ret = PyModule_AddObject(m, "HRES_NS_E_SESSION_INVALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PACKETSINK_UNKNOWN_FEC_STREAM));
	ret = PyModule_AddObject(m, "HRES_NS_E_PACKETSINK_UNKNOWN_FEC_STREAM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PUSH_CANNOTCONNECT));
	ret = PyModule_AddObject(m, "HRES_NS_E_PUSH_CANNOTCONNECT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INCOMPATIBLE_PUSH_SERVER));
	ret = PyModule_AddObject(m, "HRES_NS_E_INCOMPATIBLE_PUSH_SERVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_END_OF_PLAYLIST));
	ret = PyModule_AddObject(m, "HRES_NS_E_END_OF_PLAYLIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_USE_FILE_SOURCE));
	ret = PyModule_AddObject(m, "HRES_NS_E_USE_FILE_SOURCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PROPERTY_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_PROPERTY_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PROPERTY_READ_ONLY));
	ret = PyModule_AddObject(m, "HRES_NS_E_PROPERTY_READ_ONLY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_TABLE_KEY_NOT_FOUND));
	ret = PyModule_AddObject(m, "HRES_NS_E_TABLE_KEY_NOT_FOUND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_QUERY_OPERATOR));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_QUERY_OPERATOR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_INVALID_QUERY_PROPERTY));
	ret = PyModule_AddObject(m, "HRES_NS_E_INVALID_QUERY_PROPERTY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_PROPERTY_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_PROPERTY_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_SCHEMA_CLASSIFY_FAILURE));
	ret = PyModule_AddObject(m, "HRES_NS_E_SCHEMA_CLASSIFY_FAILURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_METADATA_FORMAT_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_METADATA_FORMAT_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_METADATA_NO_EDITING_CAPABILITY));
	ret = PyModule_AddObject(m, "HRES_NS_E_METADATA_NO_EDITING_CAPABILITY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_METADATA_CANNOT_SET_LOCALE));
	ret = PyModule_AddObject(m, "HRES_NS_E_METADATA_CANNOT_SET_LOCALE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_METADATA_LANGUAGE_NOT_SUPORTED));
	ret = PyModule_AddObject(m, "HRES_NS_E_METADATA_LANGUAGE_NOT_SUPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_METADATA_NO_RFC1766_NAME_FOR_LOCALE));
	ret = PyModule_AddObject(m, "HRES_NS_E_METADATA_NO_RFC1766_NAME_FOR_LOCALE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_METADATA_NOT_AVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_METADATA_NOT_AVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_METADATA_CACHE_DATA_NOT_AVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_METADATA_CACHE_DATA_NOT_AVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_METADATA_INVALID_DOCUMENT_TYPE));
	ret = PyModule_AddObject(m, "HRES_NS_E_METADATA_INVALID_DOCUMENT_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_METADATA_IDENTIFIER_NOT_AVAILABLE));
	ret = PyModule_AddObject(m, "HRES_NS_E_METADATA_IDENTIFIER_NOT_AVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_NS_E_METADATA_CANNOT_RETRIEVE_FROM_OFFLINE_CACHE));
	ret = PyModule_AddObject(m, "HRES_NS_E_METADATA_CANNOT_RETRIEVE_FROM_OFFLINE_CACHE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_MONITOR_INVALID_DESCRIPTOR_CHECKSUM));
	ret = PyModule_AddObject(m, "HRES_ERROR_MONITOR_INVALID_DESCRIPTOR_CHECKSUM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_MONITOR_INVALID_STANDARD_TIMING_BLOCK));
	ret = PyModule_AddObject(m, "HRES_ERROR_MONITOR_INVALID_STANDARD_TIMING_BLOCK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_MONITOR_WMI_DATABLOCK_REGISTRATION_FAILED));
	ret = PyModule_AddObject(m, "HRES_ERROR_MONITOR_WMI_DATABLOCK_REGISTRATION_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_MONITOR_INVALID_SERIAL_NUMBER_MONDSC_BLOCK));
	ret = PyModule_AddObject(m, "HRES_ERROR_MONITOR_INVALID_SERIAL_NUMBER_MONDSC_BLOCK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_MONITOR_INVALID_USER_FRIENDLY_MONDSC_BLOCK));
	ret = PyModule_AddObject(m, "HRES_ERROR_MONITOR_INVALID_USER_FRIENDLY_MONDSC_BLOCK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_MONITOR_NO_MORE_DESCRIPTOR_DATA));
	ret = PyModule_AddObject(m, "HRES_ERROR_MONITOR_NO_MORE_DESCRIPTOR_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_MONITOR_INVALID_DETAILED_TIMING_BLOCK));
	ret = PyModule_AddObject(m, "HRES_ERROR_MONITOR_INVALID_DETAILED_TIMING_BLOCK", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_NOT_EXCLUSIVE_MODE_OWNER));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_NOT_EXCLUSIVE_MODE_OWNER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INSUFFICIENT_DMA_BUFFER));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INSUFFICIENT_DMA_BUFFER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_DISPLAY_ADAPTER));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_DISPLAY_ADAPTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_ADAPTER_WAS_RESET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_ADAPTER_WAS_RESET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_DRIVER_MODEL));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_DRIVER_MODEL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PRESENT_MODE_CHANGED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PRESENT_MODE_CHANGED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PRESENT_OCCLUDED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PRESENT_OCCLUDED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PRESENT_DENIED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PRESENT_DENIED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_CANNOTCOLORCONVERT));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_CANNOTCOLORCONVERT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_NO_VIDEO_MEMORY));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_NO_VIDEO_MEMORY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_CANT_LOCK_MEMORY));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_CANT_LOCK_MEMORY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_ALLOCATION_BUSY));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_ALLOCATION_BUSY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_TOO_MANY_REFERENCES));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_TOO_MANY_REFERENCES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_TRY_AGAIN_LATER));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_TRY_AGAIN_LATER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_TRY_AGAIN_NOW));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_TRY_AGAIN_NOW", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_ALLOCATION_INVALID));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_ALLOCATION_INVALID", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_UNSWIZZLING_APERTURE_UNAVAILABLE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_UNSWIZZLING_APERTURE_UNAVAILABLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_UNSWIZZLING_APERTURE_UNSUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_UNSWIZZLING_APERTURE_UNSUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_CANT_EVICT_PINNED_ALLOCATION));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_CANT_EVICT_PINNED_ALLOCATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_ALLOCATION_USAGE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_ALLOCATION_USAGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_CANT_RENDER_LOCKED_ALLOCATION));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_CANT_RENDER_LOCKED_ALLOCATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_ALLOCATION_CLOSED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_ALLOCATION_CLOSED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_ALLOCATION_INSTANCE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_ALLOCATION_INSTANCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_ALLOCATION_HANDLE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_ALLOCATION_HANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_WRONG_ALLOCATION_DEVICE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_WRONG_ALLOCATION_DEVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_ALLOCATION_CONTENT_LOST));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_ALLOCATION_CONTENT_LOST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_GPU_EXCEPTION_ON_DEVICE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_GPU_EXCEPTION_ON_DEVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_VIDPN_TOPOLOGY));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_VIDPN_TOPOLOGY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_VIDPN_TOPOLOGY_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_VIDPN_TOPOLOGY_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_VIDPN_TOPOLOGY_CURRENTLY_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_VIDPN_TOPOLOGY_CURRENTLY_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_VIDPN));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_VIDPN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_VIDPN_MODALITY_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_VIDPN_MODALITY_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_VIDPN_SOURCEMODESET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_VIDPN_SOURCEMODESET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_VIDPN_TARGETMODESET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_VIDPN_TARGETMODESET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_FREQUENCY));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_FREQUENCY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_ACTIVE_REGION));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_ACTIVE_REGION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_TOTAL_REGION));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_TOTAL_REGION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE_MODE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE_MODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET_MODE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET_MODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PINNED_MODE_MUST_REMAIN_IN_SET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PINNED_MODE_MUST_REMAIN_IN_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PATH_ALREADY_IN_TOPOLOGY));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PATH_ALREADY_IN_TOPOLOGY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MODE_ALREADY_IN_MODESET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MODE_ALREADY_IN_MODESET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_VIDEOPRESENTSOURCESET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_VIDEOPRESENTSOURCESET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_VIDEOPRESENTTARGETSET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_VIDEOPRESENTTARGETSET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_SOURCE_ALREADY_IN_SET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_SOURCE_ALREADY_IN_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_TARGET_ALREADY_IN_SET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_TARGET_ALREADY_IN_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_VIDPN_PRESENT_PATH));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_VIDPN_PRESENT_PATH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_NO_RECOMMENDED_VIDPN_TOPOLOGY));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_NO_RECOMMENDED_VIDPN_TOPOLOGY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGESET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGESET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_FREQUENCYRANGE_NOT_IN_SET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_FREQUENCYRANGE_NOT_IN_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_FREQUENCYRANGE_ALREADY_IN_SET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_FREQUENCYRANGE_ALREADY_IN_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_STALE_MODESET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_STALE_MODESET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_MONITOR_SOURCEMODESET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_MONITOR_SOURCEMODESET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_MONITOR_SOURCE_MODE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_MONITOR_SOURCE_MODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_NO_RECOMMENDED_FUNCTIONAL_VIDPN));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_NO_RECOMMENDED_FUNCTIONAL_VIDPN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MODE_ID_MUST_BE_UNIQUE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MODE_ID_MUST_BE_UNIQUE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_EMPTY_ADAPTER_MONITOR_MODE_SUPPORT_INTERSECTION));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_EMPTY_ADAPTER_MONITOR_MODE_SUPPORT_INTERSECTION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_VIDEO_PRESENT_TARGETS_LESS_THAN_SOURCES));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_VIDEO_PRESENT_TARGETS_LESS_THAN_SOURCES", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PATH_NOT_IN_TOPOLOGY));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PATH_NOT_IN_TOPOLOGY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_SOURCE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_SOURCE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_TARGET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_TARGET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_MONITORDESCRIPTORSET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_MONITORDESCRIPTORSET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_MONITORDESCRIPTOR));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_MONITORDESCRIPTOR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MONITORDESCRIPTOR_NOT_IN_SET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MONITORDESCRIPTOR_NOT_IN_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MONITORDESCRIPTOR_ALREADY_IN_SET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MONITORDESCRIPTOR_ALREADY_IN_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MONITORDESCRIPTOR_ID_MUST_BE_UNIQUE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MONITORDESCRIPTOR_ID_MUST_BE_UNIQUE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_VIDPN_TARGET_SUBSET_TYPE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_VIDPN_TARGET_SUBSET_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_RESOURCES_NOT_RELATED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_RESOURCES_NOT_RELATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_SOURCE_ID_MUST_BE_UNIQUE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_SOURCE_ID_MUST_BE_UNIQUE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_TARGET_ID_MUST_BE_UNIQUE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_TARGET_ID_MUST_BE_UNIQUE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_NO_AVAILABLE_VIDPN_TARGET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_NO_AVAILABLE_VIDPN_TARGET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MONITOR_COULD_NOT_BE_ASSOCIATED_WITH_ADAPTER));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MONITOR_COULD_NOT_BE_ASSOCIATED_WITH_ADAPTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_NO_VIDPNMGR));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_NO_VIDPNMGR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_NO_ACTIVE_VIDPN));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_NO_ACTIVE_VIDPN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_STALE_VIDPN_TOPOLOGY));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_STALE_VIDPN_TOPOLOGY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MONITOR_NOT_CONNECTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MONITOR_NOT_CONNECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_SOURCE_NOT_IN_TOPOLOGY));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_SOURCE_NOT_IN_TOPOLOGY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_PRIMARYSURFACE_SIZE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_PRIMARYSURFACE_SIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_VISIBLEREGION_SIZE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_VISIBLEREGION_SIZE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_STRIDE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_STRIDE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_PIXELFORMAT));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_PIXELFORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_COLORBASIS));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_COLORBASIS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_PIXELVALUEACCESSMODE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_PIXELVALUEACCESSMODE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_TARGET_NOT_IN_TOPOLOGY));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_TARGET_NOT_IN_TOPOLOGY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_NO_DISPLAY_MODE_MANAGEMENT_SUPPORT));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_NO_DISPLAY_MODE_MANAGEMENT_SUPPORT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_VIDPN_SOURCE_IN_USE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_VIDPN_SOURCE_IN_USE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_CANT_ACCESS_ACTIVE_VIDPN));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_CANT_ACCESS_ACTIVE_VIDPN", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_PATH_IMPORTANCE_ORDINAL));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_PATH_IMPORTANCE_ORDINAL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_PATH_CONTENT_GEOMETRY_TRANSFORMATION));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_PATH_CONTENT_GEOMETRY_TRANSFORMATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_GAMMA_RAMP));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_GAMMA_RAMP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_GAMMA_RAMP_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_GAMMA_RAMP_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MULTISAMPLING_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MULTISAMPLING_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MODE_NOT_IN_MODESET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MODE_NOT_IN_MODESET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_VIDPN_TOPOLOGY_RECOMMENDATION_REASON));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_VIDPN_TOPOLOGY_RECOMMENDATION_REASON", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_PATH_CONTENT_TYPE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_PATH_CONTENT_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_COPYPROTECTION_TYPE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_COPYPROTECTION_TYPE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_UNASSIGNED_MODESET_ALREADY_EXISTS));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_UNASSIGNED_MODESET_ALREADY_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_SCANLINE_ORDERING));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_SCANLINE_ORDERING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_TOPOLOGY_CHANGES_NOT_ALLOWED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_TOPOLOGY_CHANGES_NOT_ALLOWED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_NO_AVAILABLE_IMPORTANCE_ORDINALS));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_NO_AVAILABLE_IMPORTANCE_ORDINALS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INCOMPATIBLE_PRIVATE_FORMAT));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INCOMPATIBLE_PRIVATE_FORMAT", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INVALID_MODE_PRUNING_ALGORITHM));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INVALID_MODE_PRUNING_ALGORITHM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_SPECIFIED_CHILD_ALREADY_CONNECTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_SPECIFIED_CHILD_ALREADY_CONNECTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_CHILD_DESCRIPTOR_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_CHILD_DESCRIPTOR_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_NOT_A_LINKED_ADAPTER));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_NOT_A_LINKED_ADAPTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_LEADLINK_NOT_ENUMERATED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_LEADLINK_NOT_ENUMERATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_CHAINLINKS_NOT_ENUMERATED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_CHAINLINKS_NOT_ENUMERATED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_ADAPTER_CHAIN_NOT_READY));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_ADAPTER_CHAIN_NOT_READY", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_CHAINLINKS_NOT_STARTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_CHAINLINKS_NOT_STARTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_CHAINLINKS_NOT_POWERED_ON));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_CHAINLINKS_NOT_POWERED_ON", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_INCONSISTENT_DEVICE_LINK_STATE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_INCONSISTENT_DEVICE_LINK_STATE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_NOT_POST_DEVICE_DRIVER));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_NOT_POST_DEVICE_DRIVER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_COPP_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_COPP_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_UAB_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_UAB_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_INVALID_ENCRYPTED_PARAMETERS));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_INVALID_ENCRYPTED_PARAMETERS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_PARAMETER_ARRAY_TOO_SMALL));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_PARAMETER_ARRAY_TOO_SMALL", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_NO_VIDEO_OUTPUTS_EXIST));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_NO_VIDEO_OUTPUTS_EXIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PVP_NO_DISPLAY_DEVICE_CORRESPONDS_TO_NAME));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PVP_NO_DISPLAY_DEVICE_CORRESPONDS_TO_NAME", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PVP_DISPLAY_DEVICE_NOT_ATTACHED_TO_DESKTOP));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PVP_DISPLAY_DEVICE_NOT_ATTACHED_TO_DESKTOP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PVP_MIRRORING_DEVICES_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PVP_MIRRORING_DEVICES_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_INVALID_POINTER));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_INVALID_POINTER", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_INTERNAL_ERROR));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_INTERNAL_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_INVALID_HANDLE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_INVALID_HANDLE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PVP_NO_MONITORS_CORRESPOND_TO_DISPLAY_DEVICE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PVP_NO_MONITORS_CORRESPOND_TO_DISPLAY_DEVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PVP_INVALID_CERTIFICATE_LENGTH));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PVP_INVALID_CERTIFICATE_LENGTH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_SPANNING_MODE_ENABLED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_SPANNING_MODE_ENABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_THEATER_MODE_ENABLED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_THEATER_MODE_ENABLED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PVP_HFS_FAILED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PVP_HFS_FAILED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_INVALID_SRM));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_INVALID_SRM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_HDCP));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_HDCP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_ACP));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_ACP", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_CGMSA));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_CGMSA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_HDCP_SRM_NEVER_SET));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_HDCP_SRM_NEVER_SET", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_RESOLUTION_TOO_HIGH));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_RESOLUTION_TOO_HIGH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_ALL_HDCP_HARDWARE_ALREADY_IN_USE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_ALL_HDCP_HARDWARE_ALREADY_IN_USE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_VIDEO_OUTPUT_NO_LONGER_EXISTS));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_VIDEO_OUTPUT_NO_LONGER_EXISTS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_OPM_SESSION_TYPE_CHANGE_IN_PROGRESS));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_OPM_SESSION_TYPE_CHANGE_IN_PROGRESS", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_I2C_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_I2C_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_I2C_DEVICE_DOES_NOT_EXIST));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_I2C_DEVICE_DOES_NOT_EXIST", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_I2C_ERROR_TRANSMITTING_DATA));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_I2C_ERROR_TRANSMITTING_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_I2C_ERROR_RECEIVING_DATA));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_I2C_ERROR_RECEIVING_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_DDCCI_VCP_NOT_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_DDCCI_VCP_NOT_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_DDCCI_INVALID_DATA));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_DDCCI_INVALID_DATA", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_DDCCI_MONITOR_RETURNED_INVALID_TIMING_STATUS_BYTE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_DDCCI_MONITOR_RETURNED_INVALID_TIMING_STATUS_BYTE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MCA_INVALID_CAPABILITIES_STRING));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MCA_INVALID_CAPABILITIES_STRING", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MCA_INTERNAL_ERROR));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MCA_INTERNAL_ERROR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_DDCCI_INVALID_MESSAGE_COMMAND));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_DDCCI_INVALID_MESSAGE_COMMAND", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_DDCCI_INVALID_MESSAGE_LENGTH));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_DDCCI_INVALID_MESSAGE_LENGTH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_DDCCI_INVALID_MESSAGE_CHECKSUM));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_DDCCI_INVALID_MESSAGE_CHECKSUM", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PMEA_INVALID_MONITOR));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PMEA_INVALID_MONITOR", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_PMEA_INVALID_D3D_DEVICE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_PMEA_INVALID_D3D_DEVICE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_DDCCI_CURRENT_CURRENT_VALUE_GREATER_THAN_MAXIMUM_VALUE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_DDCCI_CURRENT_CURRENT_VALUE_GREATER_THAN_MAXIMUM_VALUE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MCA_INVALID_VCP_VERSION));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MCA_INVALID_VCP_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MCA_MONITOR_VIOLATES_MCCS_SPECIFICATION));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MCA_MONITOR_VIOLATES_MCCS_SPECIFICATION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MCA_MCCS_VERSION_MISMATCH));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MCA_MCCS_VERSION_MISMATCH", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MCA_UNSUPPORTED_MCCS_VERSION));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MCA_UNSUPPORTED_MCCS_VERSION", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MCA_INVALID_TECHNOLOGY_TYPE_RETURNED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MCA_INVALID_TECHNOLOGY_TYPE_RETURNED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_MCA_UNSUPPORTED_COLOR_TEMPERATURE));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_MCA_UNSUPPORTED_COLOR_TEMPERATURE", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}
	py_obj = PyLong_FromUnsignedLongLong(HRES_ERROR_V(HRES_ERROR_GRAPHICS_ONLY_CONSOLE_SESSION_SUPPORTED));
	ret = PyModule_AddObject(m, "HRES_ERROR_GRAPHICS_ONLY_CONSOLE_SESSION_SUPPORTED", py_obj);
	if (ret) {
		Py_XDECREF(py_obj);
		Py_DECREF(m);
		return NULL;
	}

	return m;
}
