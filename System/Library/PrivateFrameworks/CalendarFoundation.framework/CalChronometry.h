/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CalChronometry : NSObject
+(void)initialize;
+(void)_configureChronometry;
+(void)_updateActiveCalendar;
+(void)_currentTimeZoneDidChange:(id)arg1 ;
+(void)_updateForLocaleChange;
+(void)_updateEveything;
+(id)activeTimeZone;
+(void)_updateActiveTimeZone;
+(void)setActiveTimeZone:(id)arg1 ;
+(id)activeCalendar;
+(id)currentLocationCode;
+(void)overlayCalendarPrefChanged;
+(id)overlayCalendar;
+(id)currentLanguageCode;
+(id)overlayCalendarID;
+(void)_currentLocaleDidChange:(id)arg1 ;
@end
