/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FMTimedMetadataItem : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _name;
	NSDictionary* _values;
	SCD_Struct_Mi11 _timeRange;

}

@property (readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (readonly) SCD_Struct_Mi11 timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) NSDictionary * values;                  //@synthesize values=_values - In the implementation block
-(id)description;
-(NSString *)name;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)values;
-(SCD_Struct_Mi11)timeRange;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 timeRange:(SCD_Struct_Mi11)arg3 values:(id)arg4 ;
-(void)adjustDurationTo:(SCD_Struct_Mi1)arg1 ;
@end

