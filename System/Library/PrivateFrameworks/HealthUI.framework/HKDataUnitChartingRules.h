/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKDecimalPrecisionRule, HKInteractiveChartsAxisScalingRule;
@class NSMutableDictionary, NSDictionary;

@interface HKDataUnitChartingRules : NSObject {

	long long _defaultStyle;
	NSMutableDictionary* _rulesByTimeScope;
	id<HKDecimalPrecisionRule> _allowedDecimalPrecisionRule;
	NSDictionary* _perUnitDecimalPrecision;
	BOOL _shouldHideAverageLine;
	BOOL _shouldStartDayAtNoon;
	BOOL _shouldConnectSamplesWithLines;
	long long _defaultChartStyle;
	id<HKInteractiveChartsAxisScalingRule> _axisScalingRule;

}

@property (nonatomic,readonly) long long defaultChartStyle;                                       //@synthesize defaultChartStyle=_defaultChartStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldHideAverageLine;                                          //@synthesize shouldHideAverageLine=_shouldHideAverageLine - In the implementation block
@property (assign,nonatomic) BOOL shouldStartDayAtNoon;                                           //@synthesize shouldStartDayAtNoon=_shouldStartDayAtNoon - In the implementation block
@property (nonatomic,retain) id<HKInteractiveChartsAxisScalingRule> axisScalingRule;              //@synthesize axisScalingRule=_axisScalingRule - In the implementation block
@property (assign,nonatomic) BOOL shouldConnectSamplesWithLines;                                  //@synthesize shouldConnectSamplesWithLines=_shouldConnectSamplesWithLines - In the implementation block
-(id<HKInteractiveChartsAxisScalingRule>)axisScalingRule;
-(void)setAxisScalingRule:(id<HKInteractiveChartsAxisScalingRule>)arg1 ;
-(id)initWithDefaultChartStyle:(long long)arg1 ;
-(void)setIntervalComponents:(id)arg1 forTimeScope:(long long)arg2 ;
-(void)setChartPointRadius:(double)arg1 forTimeScope:(long long)arg2 ;
-(void)setChartPointLineWidth:(double)arg1 forTimeScope:(long long)arg2 ;
-(void)setShouldHideAverageLine:(BOOL)arg1 ;
-(void)setChartStyle:(long long)arg1 forTimeScope:(long long)arg2 ;
-(void)setShouldStartDayAtNoon:(BOOL)arg1 ;
-(void)setShouldConnectSamplesWithLines:(BOOL)arg1 ;
-(void)setAllowedDecimalPrecisionRule:(id)arg1 perUnitPrecisionRules:(id)arg2 ;
-(void)_setRule:(id)arg1 forKey:(id)arg2 timeScope:(long long)arg3 ;
-(id)_ruleForKey:(id)arg1 timeScope:(long long)arg2 ;
-(id)allowedDecimalPrecisionRuleForUnit:(id)arg1 ;
-(long long)chartStyleForTimeScope:(long long)arg1 ;
-(id)intervalComponentsForTimeScope:(long long)arg1 ;
-(double)chartPointLineWidthForTimeScope:(long long)arg1 ;
-(double)chartPointRadiusForTimeScope:(long long)arg1 ;
-(void)adjustedBoundsForPortraitChartWithMin:(double)arg1 max:(double)arg2 minOut:(double*)arg3 maxOut:(double*)arg4 decimalPrecision:(long long*)arg5 unit:(id)arg6 timeScope:(long long)arg7 ;
-(long long)defaultChartStyle;
-(BOOL)shouldHideAverageLine;
-(BOOL)shouldStartDayAtNoon;
-(BOOL)shouldConnectSamplesWithLines;
@end

