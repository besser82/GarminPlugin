////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2008 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 1.0Release
// Tag = $Name: AKW1_000 $
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_USER_PROFILE_MESG_HPP)
#define FIT_USER_PROFILE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class UserProfileMesg : public Mesg
{
   public:
      UserProfileMesg(void) : Mesg(Profile::MESG_USER_PROFILE)
      {
      }

      UserProfileMesg(const Mesg &mesg) : Mesg(mesg)
      {
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns message_index field
      ///////////////////////////////////////////////////////////////////////
      FIT_MESSAGE_INDEX GetMessageIndex(void)
      {
         return GetFieldUINT16Value(254);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set message_index field
      ///////////////////////////////////////////////////////////////////////
      void SetMessageIndex(FIT_MESSAGE_INDEX messageIndex)
      {
         SetFieldUINT16Value(254, messageIndex);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns friendly_name field
      ///////////////////////////////////////////////////////////////////////
      string GetFriendlyName(void)
      {
         return GetFieldSTRINGValue(0);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set friendly_name field
      ///////////////////////////////////////////////////////////////////////
      void SetFriendlyName(string friendlyName)
      {
         SetFieldSTRINGValue(0, friendlyName);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns gender field
      ///////////////////////////////////////////////////////////////////////
      FIT_GENDER GetGender(void)
      {
         return GetFieldENUMValue(1);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set gender field
      ///////////////////////////////////////////////////////////////////////
      void SetGender(FIT_GENDER gender)
      {
         SetFieldENUMValue(1, gender);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns age field
      // Units: years
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8 GetAge(void)
      {
         return GetFieldUINT8Value(2);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set age field
      // Units: years
      ///////////////////////////////////////////////////////////////////////
      void SetAge(FIT_UINT8 age)
      {
         SetFieldUINT8Value(2, age);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns height field
      // Units: m
      ///////////////////////////////////////////////////////////////////////
      FIT_FLOAT32 GetHeight(void)
      {
         return GetFieldFLOAT32Value(3);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set height field
      // Units: m
      ///////////////////////////////////////////////////////////////////////
      void SetHeight(FIT_FLOAT32 height)
      {
         SetFieldFLOAT32Value(3, height);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns weight field
      // Units: kg
      ///////////////////////////////////////////////////////////////////////
      FIT_FLOAT32 GetWeight(void)
      {
         return GetFieldFLOAT32Value(4);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set weight field
      // Units: kg
      ///////////////////////////////////////////////////////////////////////
      void SetWeight(FIT_FLOAT32 weight)
      {
         SetFieldFLOAT32Value(4, weight);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns language field
      ///////////////////////////////////////////////////////////////////////
      FIT_LANGUAGE GetLanguage(void)
      {
         return GetFieldENUMValue(5);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set language field
      ///////////////////////////////////////////////////////////////////////
      void SetLanguage(FIT_LANGUAGE language)
      {
         SetFieldENUMValue(5, language);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns elev_setting field
      ///////////////////////////////////////////////////////////////////////
      FIT_DISPLAY_MEASURE GetElevSetting(void)
      {
         return GetFieldENUMValue(6);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set elev_setting field
      ///////////////////////////////////////////////////////////////////////
      void SetElevSetting(FIT_DISPLAY_MEASURE elevSetting)
      {
         SetFieldENUMValue(6, elevSetting);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns weight_setting field
      ///////////////////////////////////////////////////////////////////////
      FIT_DISPLAY_MEASURE GetWeightSetting(void)
      {
         return GetFieldENUMValue(7);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set weight_setting field
      ///////////////////////////////////////////////////////////////////////
      void SetWeightSetting(FIT_DISPLAY_MEASURE weightSetting)
      {
         SetFieldENUMValue(7, weightSetting);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns resting_heart_rate field
      // Units: bpm
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8 GetRestingHeartRate(void)
      {
         return GetFieldUINT8Value(8);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set resting_heart_rate field
      // Units: bpm
      ///////////////////////////////////////////////////////////////////////
      void SetRestingHeartRate(FIT_UINT8 restingHeartRate)
      {
         SetFieldUINT8Value(8, restingHeartRate);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns default_max_running_heart_rate field
      // Units: bpm
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8 GetDefaultMaxRunningHeartRate(void)
      {
         return GetFieldUINT8Value(9);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set default_max_running_heart_rate field
      // Units: bpm
      ///////////////////////////////////////////////////////////////////////
      void SetDefaultMaxRunningHeartRate(FIT_UINT8 defaultMaxRunningHeartRate)
      {
         SetFieldUINT8Value(9, defaultMaxRunningHeartRate);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns default_max_biking_heart_rate field
      // Units: bpm
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8 GetDefaultMaxBikingHeartRate(void)
      {
         return GetFieldUINT8Value(10);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set default_max_biking_heart_rate field
      // Units: bpm
      ///////////////////////////////////////////////////////////////////////
      void SetDefaultMaxBikingHeartRate(FIT_UINT8 defaultMaxBikingHeartRate)
      {
         SetFieldUINT8Value(10, defaultMaxBikingHeartRate);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns default_max_heart_rate field
      // Units: bpm
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8 GetDefaultMaxHeartRate(void)
      {
         return GetFieldUINT8Value(11);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set default_max_heart_rate field
      // Units: bpm
      ///////////////////////////////////////////////////////////////////////
      void SetDefaultMaxHeartRate(FIT_UINT8 defaultMaxHeartRate)
      {
         SetFieldUINT8Value(11, defaultMaxHeartRate);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns hr_setting field
      ///////////////////////////////////////////////////////////////////////
      FIT_DISPLAY_HEART GetHrSetting(void)
      {
         return GetFieldENUMValue(12);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set hr_setting field
      ///////////////////////////////////////////////////////////////////////
      void SetHrSetting(FIT_DISPLAY_HEART hrSetting)
      {
         SetFieldENUMValue(12, hrSetting);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns speed_setting field
      ///////////////////////////////////////////////////////////////////////
      FIT_DISPLAY_MEASURE GetSpeedSetting(void)
      {
         return GetFieldENUMValue(13);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set speed_setting field
      ///////////////////////////////////////////////////////////////////////
      void SetSpeedSetting(FIT_DISPLAY_MEASURE speedSetting)
      {
         SetFieldENUMValue(13, speedSetting);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns dist_setting field
      ///////////////////////////////////////////////////////////////////////
      FIT_DISPLAY_MEASURE GetDistSetting(void)
      {
         return GetFieldENUMValue(14);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set dist_setting field
      ///////////////////////////////////////////////////////////////////////
      void SetDistSetting(FIT_DISPLAY_MEASURE distSetting)
      {
         SetFieldENUMValue(14, distSetting);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns power_setting field
      ///////////////////////////////////////////////////////////////////////
      FIT_DISPLAY_POWER GetPowerSetting(void)
      {
         return GetFieldENUMValue(16);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set power_setting field
      ///////////////////////////////////////////////////////////////////////
      void SetPowerSetting(FIT_DISPLAY_POWER powerSetting)
      {
         SetFieldENUMValue(16, powerSetting);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns activity_class field
      ///////////////////////////////////////////////////////////////////////
      FIT_ACTIVITY_CLASS GetActivityClass(void)
      {
         return GetFieldENUMValue(17);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set activity_class field
      ///////////////////////////////////////////////////////////////////////
      void SetActivityClass(FIT_ACTIVITY_CLASS activityClass)
      {
         SetFieldENUMValue(17, activityClass);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns position_setting field
      ///////////////////////////////////////////////////////////////////////
      FIT_DISPLAY_POSITION GetPositionSetting(void)
      {
         return GetFieldENUMValue(18);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set position_setting field
      ///////////////////////////////////////////////////////////////////////
      void SetPositionSetting(FIT_DISPLAY_POSITION positionSetting)
      {
         SetFieldENUMValue(18, positionSetting);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns temperature_setting field
      ///////////////////////////////////////////////////////////////////////
      FIT_DISPLAY_MEASURE GetTemperatureSetting(void)
      {
         return GetFieldENUMValue(21);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set temperature_setting field
      ///////////////////////////////////////////////////////////////////////
      void SetTemperatureSetting(FIT_DISPLAY_MEASURE temperatureSetting)
      {
         SetFieldENUMValue(21, temperatureSetting);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns local_id field
      ///////////////////////////////////////////////////////////////////////
      FIT_USER_LOCAL_ID GetLocalId(void)
      {
         return GetFieldUINT16Value(22);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set local_id field
      ///////////////////////////////////////////////////////////////////////
      void SetLocalId(FIT_USER_LOCAL_ID localId)
      {
         SetFieldUINT16Value(22, localId);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns number of global_id
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8 GetNumGlobalId(void)
      {
         return GetFieldNumValues(23);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns global_id field
      ///////////////////////////////////////////////////////////////////////
      FIT_BYTE GetGlobalId(FIT_UINT8 index)
      {
         return GetFieldBYTEValue(23, index);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set global_id field
      ///////////////////////////////////////////////////////////////////////
      void SetGlobalId(FIT_UINT8 index, FIT_BYTE globalId)
      {
         SetFieldBYTEValue(23, globalId, index);
      }

};

} // namespace fit

#endif // !defined(FIT_USER_PROFILE_MESG_HPP)