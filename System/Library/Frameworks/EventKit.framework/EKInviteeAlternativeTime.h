/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray;

@interface EKInviteeAlternativeTime : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _conflictedParticipants;

}

@property (nonatomic,retain) NSDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSArray * conflictedParticipants;              //@synthesize conflictedParticipants=_conflictedParticipants - In the implementation block
-(id)description;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 conflictedParticipants:(id)arg3 ;
-(void)setConflictedParticipants:(NSArray *)arg1 ;
-(NSArray *)conflictedParticipants;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end

