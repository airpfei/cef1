// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/scheme_registrar_cpptoc.h"
#include "libcef_dll/ctocpp/app_ctocpp.h"
#include "libcef_dll/ctocpp/proxy_handler_ctocpp.h"
#include "libcef_dll/ctocpp/resource_bundle_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

void CefAppCToCpp::OnRegisterCustomSchemes(
    CefRefPtr<CefSchemeRegistrar> registrar) {
  if (CEF_MEMBER_MISSING(struct_, on_register_custom_schemes))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: registrar; type: refptr_diff
  DCHECK(registrar.get());
  if (!registrar.get())
    return;

  // Execute
  struct_->on_register_custom_schemes(struct_,
      CefSchemeRegistrarCppToC::Wrap(registrar));
}

CefRefPtr<CefResourceBundleHandler> CefAppCToCpp::GetResourceBundleHandler() {
  if (CEF_MEMBER_MISSING(struct_, get_resource_bundle_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_resource_bundle_handler_t* _retval = struct_->get_resource_bundle_handler(
      struct_);

  // Return type: refptr_same
  return CefResourceBundleHandlerCToCpp::Wrap(_retval);
}

CefRefPtr<CefProxyHandler> CefAppCToCpp::GetProxyHandler() {
  if (CEF_MEMBER_MISSING(struct_, get_proxy_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_proxy_handler_t* _retval = struct_->get_proxy_handler(struct_);

  // Return type: refptr_same
  return CefProxyHandlerCToCpp::Wrap(_retval);
}


#ifndef NDEBUG
template<> long CefCToCpp<CefAppCToCpp, CefApp, cef_app_t>::DebugObjCt = 0;
#endif

