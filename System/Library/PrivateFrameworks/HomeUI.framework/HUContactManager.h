/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, ABMonogrammer;

@interface HUContactManager : NSObject {

	NSArray* _allPeople;
	ABMonogrammer* _monogrammer;
	double _monogramDiameter;

}

@property (nonatomic,retain) NSArray * allPeople;                      //@synthesize allPeople=_allPeople - In the implementation block
@property (nonatomic,retain) ABMonogrammer * monogrammer;              //@synthesize monogrammer=_monogrammer - In the implementation block
@property (assign,nonatomic) double monogramDiameter;                  //@synthesize monogramDiameter=_monogramDiameter - In the implementation block
+(id)sharedManager;
-(ABMonogrammer *)monogrammer;
-(void)setMonogramDiameter:(double)arg1 ;
-(NSArray *)allPeople;
-(id)userDataFromEmail:(id)arg1 monogramDiameter:(double)arg2 ;
-(void)setAllPeople:(NSArray *)arg1 ;
-(void)setMonogrammer:(ABMonogrammer *)arg1 ;
-(double)monogramDiameter;
@end

