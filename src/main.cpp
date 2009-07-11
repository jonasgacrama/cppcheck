/*
 * Cppcheck - A tool for static C/C++ code analysis
 * Copyright (C) 2007-2009 Daniel Marjamäki and Cppcheck team.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/
 */


/** @mainpage
 * Overview \n
 * The source code is first tokenized and then checked. \n
 * \n
 * Writing checks \n
 * The checks are written in C++. Below is a simple example of a check
 * that detect division with zero:
 * \code
void CheckOther::checkZeroDivision()
{
    for (const Token *tok = _tokenizer->tokens(); tok; tok = tok->next())
    {
        if (Token::Match(tok, "/ 0"))
            reportError(tok, "error", "zerodiv", "Division by zero");
    }
}
 \endcode
 */



#include "cppcheckexecutor.h"

/**
 * Main function of cppcheck
 *
 * @param argc Passed to CppCheck::parseFromArgs()
 * @param argv Passed to CppCheck::parseFromArgs()
 * @return What CppCheckExecutor::check() returns.
 */
int main(int argc, char* argv[])
{
    CppCheckExecutor exec;
    return exec.check(argc, argv);
}
