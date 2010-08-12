/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "portmap-xdr.h"

bool_t
xdr_pmap_port_by_brick_req (XDR *xdrs, pmap_port_by_brick_req *objp)
{
	 if (!xdr_string (xdrs, &objp->brick, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_pmap_port_by_brick_rsp (XDR *xdrs, pmap_port_by_brick_rsp *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, 4 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->op_ret))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_errno))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->status))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->port))
				 return FALSE;
		} else {
			IXDR_PUT_LONG(buf, objp->op_ret);
			IXDR_PUT_LONG(buf, objp->op_errno);
			IXDR_PUT_LONG(buf, objp->status);
			IXDR_PUT_LONG(buf, objp->port);
		}
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, 4 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->op_ret))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_errno))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->status))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->port))
				 return FALSE;
		} else {
			objp->op_ret = IXDR_GET_LONG(buf);
			objp->op_errno = IXDR_GET_LONG(buf);
			objp->status = IXDR_GET_LONG(buf);
			objp->port = IXDR_GET_LONG(buf);
		}
	 return TRUE;
	}

	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->status))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_pmap_brick_by_port_req (XDR *xdrs, pmap_brick_by_port_req *objp)
{
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_pmap_brick_by_port_rsp (XDR *xdrs, pmap_brick_by_port_rsp *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->op_ret))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_errno))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->status))
				 return FALSE;

		} else {
		IXDR_PUT_LONG(buf, objp->op_ret);
		IXDR_PUT_LONG(buf, objp->op_errno);
		IXDR_PUT_LONG(buf, objp->status);
		}
		 if (!xdr_string (xdrs, &objp->brick, ~0))
			 return FALSE;
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->op_ret))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->op_errno))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->status))
				 return FALSE;

		} else {
		objp->op_ret = IXDR_GET_LONG(buf);
		objp->op_errno = IXDR_GET_LONG(buf);
		objp->status = IXDR_GET_LONG(buf);
		}
		 if (!xdr_string (xdrs, &objp->brick, ~0))
			 return FALSE;
	 return TRUE;
	}

	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->status))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->brick, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_pmap_signup_req (XDR *xdrs, pmap_signup_req *objp)
{
	 if (!xdr_string (xdrs, &objp->brick, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_pmap_signup_rsp (XDR *xdrs, pmap_signup_rsp *objp)
{
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_pmap_signin_req (XDR *xdrs, pmap_signin_req *objp)
{
	 if (!xdr_string (xdrs, &objp->brick, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_pmap_signin_rsp (XDR *xdrs, pmap_signin_rsp *objp)
{
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_pmap_signout_req (XDR *xdrs, pmap_signout_req *objp)
{
	 if (!xdr_string (xdrs, &objp->brick, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->port))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_pmap_signout_rsp (XDR *xdrs, pmap_signout_rsp *objp)
{
	 if (!xdr_int (xdrs, &objp->op_ret))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->op_errno))
		 return FALSE;
	return TRUE;
}
