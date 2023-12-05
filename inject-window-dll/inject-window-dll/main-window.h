#pragma once
#ifndef DLL_IMPORT
#define API extern "C" __declspec(dllexport)
#else
#define API extern "C" __declspec(dllimport)
#endif

API void main_loop_window();