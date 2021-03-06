/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKGraphSeries, NSNumber, HKValueRange, NSDateComponents;

@interface HKGraphViewPointSelectionContext : NSObject {

	HKGraphSeries* _selectedSeries;
	NSNumber* _selectedPointXValue;
	NSNumber* _selectedPathIndex;
	HKValueRange* _selectedPointDateRange;
	NSDateComponents* _pointIntervalComponents;
	id _userInfo;

}

@property (nonatomic,retain) HKGraphSeries * selectedSeries;                          //@synthesize selectedSeries=_selectedSeries - In the implementation block
@property (nonatomic,retain) NSNumber * selectedPointXValue;                          //@synthesize selectedPointXValue=_selectedPointXValue - In the implementation block
@property (nonatomic,retain) NSNumber * selectedPathIndex;                            //@synthesize selectedPathIndex=_selectedPathIndex - In the implementation block
@property (nonatomic,retain) HKValueRange * selectedPointDateRange;                   //@synthesize selectedPointDateRange=_selectedPointDateRange - In the implementation block
@property (nonatomic,retain) NSDateComponents * pointIntervalComponents;              //@synthesize pointIntervalComponents=_pointIntervalComponents - In the implementation block
@property (nonatomic,retain) id userInfo;                                             //@synthesize userInfo=_userInfo - In the implementation block
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(HKGraphSeries *)selectedSeries;
-(void)setSelectedSeries:(HKGraphSeries *)arg1 ;
-(NSNumber *)selectedPointXValue;
-(void)setSelectedPointXValue:(NSNumber *)arg1 ;
-(NSNumber *)selectedPathIndex;
-(void)setSelectedPathIndex:(NSNumber *)arg1 ;
-(HKValueRange *)selectedPointDateRange;
-(void)setSelectedPointDateRange:(HKValueRange *)arg1 ;
-(NSDateComponents *)pointIntervalComponents;
-(void)setPointIntervalComponents:(NSDateComponents *)arg1 ;
@end

