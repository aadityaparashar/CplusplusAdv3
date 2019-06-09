#ifndef PIPE_H
#define PIPE_H
#pragma once

#include <Windows.h>
#include <tchar.h>

#define BUFSIZE 512

//added
#include "mainwindow.h"
//

class Pipe : public MainWindow
{

private:
    HANDLE		pipeHandle;
    LPCWSTR		pipeName = TEXT("\\\\.\\pipe\\ICS0025");
    BOOL		fSuccess = FALSE;
public:
    int connect()
    {
        log_set("Finally freaking logging");

        while (1)
        {
            pipeHandle = CreateFile(
                pipeName,						// pipe name
                GENERIC_READ | GENERIC_WRITE,	// permissions
                0,								// no sharing
                NULL,							// default security attributes
                OPEN_EXISTING,					// opens existing pipe
                0,								// default attributes
                NULL							// no template file
            );

            if (pipeHandle != INVALID_HANDLE_VALUE) {
                break;
            }

            if (GetLastError() != ERROR_PIPE_BUSY)
            {
                //logger(0, "Pipe connection error");
                return -1;
            }

            if (!WaitNamedPipe(pipeName, 10000))
            {
                //logger(0, "Pipe was busy, timeout after 10 seconds");
                return -1;
            }
        }

        //logger(2, "Connected to pipe");
        return 0;
    }
    int switchToReadMode()
    {
        //logger(3, "Switching to read mode");

        DWORD dwMode;

        dwMode = PIPE_READMODE_MESSAGE;
        fSuccess = SetNamedPipeHandleState(
            pipeHandle,		// pipe handle
            &dwMode,		// new pipe mode
            NULL,			// don't set maximum bytes
            NULL			// don't set maximum time
        );

        if (!fSuccess)
        {
            _tprintf(TEXT("SetNamedPipeHandleState failed. GLE=%d\n"), GetLastError());
            return -1;
        }

        //logger(3, "Switched to read mode");
        return 0;
    }
    int read()
    {
        //logger(3, "Read started");

        DWORD cbRead, cbWritten;
        TCHAR chBuf[BUFSIZE];

        do
        {
            //logger(3, "Sending 'ready' to pipe");

            fSuccess = WriteFile(
                pipeHandle,
                "ready",
                6,
                &cbWritten,
                NULL
            );

            //logger(3, "Reading from the pipe");

            fSuccess = ReadFile(
                pipeHandle,					// pipe handle
                chBuf,						// buffer to receive reply
                BUFSIZE * sizeof(TCHAR),	// size of buffer
                &cbRead,					// number of bytes read
                NULL						// not overlapped
            );

            if (!fSuccess && GetLastError() != ERROR_MORE_DATA) {
                //logger(3, "ReadFile was not successful, exiting loop");
                break;
            }
/*
            if (LOGLEVEL >= 3) {
                cout << "DEBUG\t" << cbRead << " bytes received from server\n";
            }

            if (LOGLEVEL >= 2) {
                printf("INFO\t%s\n", chBuf);
            }
            */

        } while (1 == 1);  // @TODO repeat loop if ERROR_MORE_DATA

        if (!fSuccess)
        {
            //logger(0, "Could not read from pipe");
            return -1;
        }

        //logger(3, "Read finished");

        return 0;
    }
    void close()
    {
        //logger(3, "Closing pipe");

        CloseHandle(pipeHandle);

        //logger(3, "Pipe is closed");
    }
};

#endif // PIPE_H
