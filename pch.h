// header.h : include file for standard system include files,
// or project specific include files
//

#pragma comment(lib, "windowsapp")
#include <winrt/base.h>
namespace winrt::impl
{
    template <typename Async>
    auto wait_for(Async const& async, Windows::Foundation::TimeSpan const& timeout);
}
// pch.h
#include <iostream>

#pragma once
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Web.Syndication.h>