/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingSupport-Structs.h>
#import <UIKit/UISlider.h>

@class UIColor;

@interface AXHAStepSlider : UISlider {

	UIColor* _trackMarkersColor;
	BOOL _restrictsValuesToTicks;
	unsigned long long _segmentCount;

}

@property (assign,nonatomic) unsigned long long segmentCount;              //@synthesize segmentCount=_segmentCount - In the implementation block
@property (assign,nonatomic) BOOL restrictsValuesToTicks;                  //@synthesize restrictsValuesToTicks=_restrictsValuesToTicks - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)sliderTapped:(id)arg1 ;
-(unsigned long long)numberOfTicks;
-(float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1 ;
-(unsigned long long)segmentCount;
-(void)setRestrictsValuesToTicks:(BOOL)arg1 ;
-(BOOL)restrictsValuesToTicks;
-(void)setSegmentCount:(unsigned long long)arg1 ;
@end
