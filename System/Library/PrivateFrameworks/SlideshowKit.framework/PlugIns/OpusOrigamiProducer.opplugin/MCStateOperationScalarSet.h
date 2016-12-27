/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCStateOperation.h>

@interface MCStateOperationScalarSet : MCStateOperation {

	double _scalar;

}

@property (assign,nonatomic) double scalar;              //@synthesize scalar=_scalar - In the implementation block
+(id)stateOperationForTargetPlugObjectID:(id)arg1 withStateKey:(id)arg2 andScalar:(double)arg3 ;
-(double)scalar;
-(id)initWithImprint:(id)arg1 ;
-(void)setScalar:(double)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)description;
-(id)imprint;
@end
