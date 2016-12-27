/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKRandomDistribution.h>

@interface GKGaussianDistribution : GKRandomDistribution {

	float _mean;
	float _deviation;

}

@property (nonatomic,readonly) float mean;                   //@synthesize mean=_mean - In the implementation block
@property (nonatomic,readonly) float deviation;              //@synthesize deviation=_deviation - In the implementation block
-(float)deviation;
-(long long)nextInt;
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 ;
-(id)initWithRandomSource:(id)arg1 mean:(float)arg2 deviation:(float)arg3 ;
-(float)mean;
@end
