/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSTimeZone, EKStructuredLocation, NSArray, NSURL, EKCalendar, UIColor;

@interface EKUIAutocompleteSearchResult : NSObject {

	BOOL _allDay;
	NSString* _title;
	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;
	NSString* _location;
	NSString* _locationWithoutPrediction;
	EKStructuredLocation* _preferredLocation;
	NSArray* _alarms;
	NSArray* _attendees;
	NSURL* _URL;
	NSString* _notes;
	EKCalendar* _calendar;
	UIColor* _calendarColor;
	NSString* _uniqueID;

}

@property (nonatomic,retain) NSString * uniqueID;                                   //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                      //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                 //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                           //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,retain) NSString * location;                                   //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * locationWithoutPrediction;                  //@synthesize locationWithoutPrediction=_locationWithoutPrediction - In the implementation block
@property (nonatomic,retain) EKStructuredLocation * preferredLocation;              //@synthesize preferredLocation=_preferredLocation - In the implementation block
@property (nonatomic,retain) NSArray * alarms;                                      //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                                   //@synthesize attendees=_attendees - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSString * notes;                                      //@synthesize notes=_notes - In the implementation block
@property (nonatomic,retain) EKCalendar * calendar;                                 //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) UIColor * calendarColor;                               //@synthesize calendarColor=_calendarColor - In the implementation block
+(BOOL)_participantShouldBeUsedForAutocomplete:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)location;
-(NSTimeZone *)timeZone;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(EKCalendar *)calendar;
-(void)setLocation:(NSString *)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(NSString *)uniqueID;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(EKStructuredLocation *)preferredLocation;
-(BOOL)isAllDay;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(NSString *)locationWithoutPrediction;
-(UIColor *)calendarColor;
-(void)setUniqueID:(NSString *)arg1 ;
-(void)setLocationWithoutPrediction:(NSString *)arg1 ;
-(void)setPreferredLocation:(EKStructuredLocation *)arg1 ;
-(NSArray *)alarms;
-(void)setAlarms:(NSArray *)arg1 ;
-(void)setCalendarColor:(UIColor *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithUniqueID:(id)arg1 ;
@end
