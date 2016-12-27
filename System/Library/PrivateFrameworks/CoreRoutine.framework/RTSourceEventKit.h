/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTSource.h>

@class NSString, NSDate;

@interface RTSourceEventKit : RTSource {

	BOOL _allDay;
	NSString* _eventIdentifier;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _title;
	NSString* _location;
	NSString* _suggestionInfo_opaqueKey;

}

@property (nonatomic,retain,readonly) NSString * eventIdentifier;                       //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain,readonly) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain,readonly) NSString * location;                              //@synthesize location=_location - In the implementation block
@property (getter=isAllDay,nonatomic,readonly) BOOL allDay;                             //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,retain,readonly) NSString * suggestionInfo_opaqueKey;              //@synthesize suggestionInfo_opaqueKey=_suggestionInfo_opaqueKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(NSString *)location;
-(BOOL)isAllDay;
-(NSString *)eventIdentifier;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)suggestionInfo_opaqueKey;
-(id)initWithEventIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 allDay:(BOOL)arg6 suggestionInfo_opaqueKey:(id)arg7 ;
@end
