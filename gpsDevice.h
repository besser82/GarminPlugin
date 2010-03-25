/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * GarminPlugin
 * Copyright (C) Andreas Diesner 2010 <andreas.diesner [AT] gmx [DOT] de>
 *
 * GarminPlugin is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * GarminPlugin is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef GPSDEVICE_H_INCLUDED
#define GPSDEVICE_H_INCLUDED

#define TIXML_USE_TICPP
#include "ticpp.h"
#include <string>
#include "messageBox.h"

using namespace std;

class MessageBox;

class GpsDevice
{
public:

  /**
   * Returns the device description in XML format to be passed to the Garmin Javascript Libs
   * @return xml string with device description
   */
    virtual string getDeviceDescription() const = 0;

  /**
   * Starts a thread that writes the passed xml string to the given filename
   * @param filename - filename on disk
   * @param xml - content for the file on disk
   * @return int returns 1 if successful otherwise 0
   */
    virtual int startWriteToGps(string filename, string xml) = 0;

  /**
   * Starts a thread that tries to read the fitness data from a garmin device
   * @return int returns 1 if successful otherwise 0
   */
    virtual int startReadFitnessData() = 0;

  /**
   * Returns the status if writing to device is finished
   * @return int     0 = idle    1 = working    2 = waiting    3 = finished
   */
    virtual int finishWriteToGps() = 0;

  /**
   * Returns the status of reading fitness data from the device
   * @return int     0 = idle    1 = working    2 = waiting    3 = finished
   */
    virtual int finishReadFitnessData() = 0;

  /**
   * Cancels the write thread
   */
    virtual void cancelWriteToGps() = 0;

  /**
   * Returns if the transfer to the device was successful
   * @return int     0 = failed    1 = success
   */
    virtual int getTransferSucceeded() = 0;

  /**
   * Returns the name of the device
   * @return string with name of device
   */
    virtual string getDisplayName() { return this->displayName; };

  /**
   * Set the name of the device
   * @param name set the name of the devices
   */
    virtual void setDisplayName(string name) { this->displayName = name; };

  /**
   * Sets a command that gets executed after the file was stored on disk
   * @param cmd command to execute after the file was stored on disk
   */
    virtual void setStorageCommand(string cmd) = 0;

  /**
   * Returns a message for the user. Should be called if finishWriteToGps returns 2 (waiting)
   * The function that fetches the message must delete the message!
   * @return MessageBox for the user to display
   */
    virtual MessageBox * getMessage() = 0;

  /**
   * A message can be answered by the user. This function must be called if the message was answered
   * @param answer contains the button the user pressed
   */
    virtual void userAnswered(const int answer) = 0;

  /**
   * Returns true if the device is available - current implementation checks if directory exists
   * @return true if devices should be shown to user
   */
    virtual bool isDeviceAvailable() = 0;

  /**
   * Gets the fitness data xml
   * @return xml containing fitness data read from garmin device
   */
    virtual string getFitnessData() = 0;

protected:
    enum WorkType
    {
      WRITEGPX,
      READFITNESS
    };
    WorkType workType;

  /**
   * Stores the status of the thread
   * 0 = idle    1 = working    2 = waiting    3 = finished
   * This value is used by finishWriteToGps to signal the current status
   * @see finishWriteToGps
   */
    int threadState;

    void waitThread();

  /**
   * Name of the GpsDevice which gets displayed to the user
   */
    string displayName;

  /**
   * Stores the thread id
   */
    pthread_t threadId;


    void cancelThread();

    void lockVariables();
    void unlockVariables();

    void signalThread();
    bool startThread();

    virtual void doWork() = 0;


private:
  /**
   * Thread that gets called when the device performs a longer operation
   * like writing data to the device or reading fitness data
   * @param instance of the GpsDevice that should be written to disk
   */
    static void * workerThread(void * pthis);

};

#endif // GPSDEVICE_H_INCLUDED
