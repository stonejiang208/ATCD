// -*- C++ -*-

//=============================================================================
/**
 *  @file    SStringfwd.h
 *
 *  $Id$
 *
 *  Forward declarations and typedefs of ACE string types.
 *
 *  @author Douglas C. Schmidt <schmidt@cs.wustl.edu>
 *  @author Nanbor Wang <nanbor@cs.wustl.edu>
 *  @author Ossama Othman <ossama@uci.edu>
 */
//=============================================================================

#ifndef ACE_SSTRINGFWD_H
#define ACE_SSTRINGFWD_H

#include "ace/pre.h"

#include "ace/Basic_Types.h"   /* ACE_WCHAR_T definition */

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


template <class T> class ACE_String_Base;  // Forward declaration.

typedef ACE_WCHAR_T ACE_WSTRING_TYPE;

typedef ACE_String_Base<char> ACE_CString;
typedef ACE_String_Base<ACE_WSTRING_TYPE> ACE_WString;


#include "ace/post.h"

#endif  /* ACE_SSTRINGFWD_H */
