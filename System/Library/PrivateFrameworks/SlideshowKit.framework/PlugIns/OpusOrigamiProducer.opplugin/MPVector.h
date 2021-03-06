/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@interface MPVector : NSObject {

	double _vector[4];
	long long _length;

}
+(id)vectorFromMCVector:(SCD_Struct_MC14)arg1 ;
+(id)vectorFromString:(id)arg1 ;
+(id)vectorWithValues:(id)arg1 ;
+(id)vectorFromCGColor:(CGColorRef)arg1 ;
-(id)CIColorString;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(CGColorRef)CGColor;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(id)values;
-(void)setValues:(id)arg1 ;
-(SCD_Struct_MC14)vector;
-(double)valueAtIndex:(long long)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(void)setVector:(SCD_Struct_MC14)arg1 ;
@end

