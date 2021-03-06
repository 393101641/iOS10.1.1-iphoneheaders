/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RTMotionActivityHistogramBin : NSObject <NSCopying> {

	unsigned long long _type;
	unsigned long long _confidence;
	double _interval;

}

@property (assign,nonatomic) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long confidence;              //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) double interval;                            //@synthesize interval=_interval - In the implementation block
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)confidence;
-(void)setConfidence:(unsigned long long)arg1 ;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(id)initWithType:(unsigned long long)arg1 confidence:(unsigned long long)arg2 interval:(double)arg3 ;
-(void)updateConfidence:(unsigned long long)arg1 ;
-(void)addInterval:(double)arg1 ;
@end

