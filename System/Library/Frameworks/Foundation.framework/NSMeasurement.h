/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUnit;

@interface NSMeasurement : NSObject <NSCopying, NSSecureCoding> {

	NSUnit* _unit;
	double _doubleValue;

}

@property (copy,readonly) NSUnit * unit; 
@property (readonly) double doubleValue; 
+(BOOL)supportsSecureCoding;
-(id)measurementByConvertingToUnit:(id)arg1 ;
-(id)initWithDoubleValue:(double)arg1 unit:(id)arg2 ;
-(BOOL)canBeConvertedToUnit:(id)arg1 ;
-(id)_performOperation:(long long)arg1 withMeasurement:(id)arg2 ;
-(id)measurementByAddingMeasurement:(id)arg1 ;
-(id)measurementBySubtractingMeasurement:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)doubleValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUnit *)unit;
@end

