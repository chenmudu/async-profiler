/*
 * Copyright 2021 Andrei Pangin
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _LOG_H
#define _LOG_H

#include <stdarg.h>
#include <stdio.h>


enum LogLevel {
    LOG_NONE,
    LOG_TRACE,
    LOG_DEBUG,
    LOG_INFO,
    LOG_WARN,
    LOG_ERROR
};


class Log {
  private:
    static FILE* _file;

  public:
    static const char* const LEVEL_NAME[];

    static void open(const char* file_name);
    static void close();

    static void log(LogLevel level, const char* msg, va_list args);

    static void info(const char* msg, ...);
    static void warn(const char* msg, ...);
    static void error(const char* msg, ...);
};

#endif // _LOG_H
