/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate, NSArray;

@interface CLSEKEvent : NSObject <NSCoding> {

	BOOL _isBirthday;
	BOOL _allDay;
	BOOL _hasAttendees;
	BOOL _organizedByMe;
	NSString* _title;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _recurrenceRules;
	NSArray* _attendees;
	NSString* _location;
	id _selfAttendee;
	id _calendar;
	NSString* _calendarItemIdentifier;

}

@property (readonly) NSString * calendarItemIdentifier;              //@synthesize calendarItemIdentifier=_calendarItemIdentifier - In the implementation block
@property (readonly) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (readonly) BOOL isBirthday;                                //@synthesize isBirthday=_isBirthday - In the implementation block
@property (readonly) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (readonly) NSArray * recurrenceRules;                      //@synthesize recurrenceRules=_recurrenceRules - In the implementation block
@property (getter=isAllDay,readonly) BOOL allDay;                    //@synthesize allDay=_allDay - In the implementation block
@property (readonly) BOOL hasAttendees;                              //@synthesize hasAttendees=_hasAttendees - In the implementation block
@property (readonly) NSArray * attendees;                            //@synthesize attendees=_attendees - In the implementation block
@property (readonly) NSString * location;                            //@synthesize location=_location - In the implementation block
@property (readonly) BOOL organizedByMe;                             //@synthesize organizedByMe=_organizedByMe - In the implementation block
@property (readonly) id selfAttendee;                                //@synthesize selfAttendee=_selfAttendee - In the implementation block
@property (readonly) id calendar;                                    //@synthesize calendar=_calendar - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(NSString *)location;
-(id)calendar;
-(BOOL)isAllDay;
-(NSArray *)attendees;
-(BOOL)hasAttendees;
-(id)selfAttendee;
-(NSString *)calendarItemIdentifier;
-(BOOL)isBirthday;
-(NSArray *)recurrenceRules;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(BOOL)organizedByMe;
-(id)initWithEKEvent:(id)arg1 ;
@end

