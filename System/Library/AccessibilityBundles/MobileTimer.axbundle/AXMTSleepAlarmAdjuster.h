/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/MobileTimer.axbundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSCalendar, NSDate, NSDateComponents;

@interface AXMTSleepAlarmAdjuster : UIAccessibilityElement {

	int _adjusterType;
	NSCalendar* _calendar;
	NSDate* _baseDate;
	NSDateComponents* _currentComponents;

}

@property (assign,nonatomic) int adjusterType;                                  //@synthesize adjusterType=_adjusterType - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                             //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSDate * baseDate;                                 //@synthesize baseDate=_baseDate - In the implementation block
@property (nonatomic,retain) NSDateComponents * currentComponents;              //@synthesize currentComponents=_currentComponents - In the implementation block
-(void)adjustComponentsIncrement:(BOOL)arg1 ;
-(void)setAdjusterType:(int)arg1 ;
-(id)timeStringForDateComponents:(id)arg1 ;
-(id)decrementComponents:(id)arg1 ;
-(int)adjusterType;
-(id)incrementComponents:(id)arg1 ;
-(NSDateComponents *)currentComponents;
-(void)setCurrentComponents:(NSDateComponents *)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)setBaseDate:(NSDate *)arg1 ;
-(NSDate *)baseDate;
@end

