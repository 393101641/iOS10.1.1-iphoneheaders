/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray;

@interface ML3DatabaseNaturalStatement : NSObject <NSSecureCoding> {

	NSString* _sql;
	NSMutableArray* _parameters;

}

@property (nonatomic,copy) NSString * sql;                             //@synthesize sql=_sql - In the implementation block
@property (nonatomic,retain) NSMutableArray * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableArray *)parameters;
-(void)setParameters:(NSMutableArray *)arg1 ;
-(NSString *)sql;
-(void)setParameter:(id)arg1 forPosition:(unsigned long long)arg2 ;
-(void)setSql:(NSString *)arg1 ;
-(id)initWithSQL:(id)arg1 parameters:(id)arg2 ;
@end

