/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/PQLValuable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSUUID : NSObject <PQLValuable, NSCopying, NSSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * UUIDString; 
+(id)_siri_UUIDWithDomainObjectIdentifier:(id)arg1 ;
+(id)TTZero;
+(id)_maps_zeroUUID;
+(id)deriveUUIDFromBaseUUID:(id)arg1 ;
+(id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 ;
+(id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3 ;
+(id)deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2 ;
+(id)uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3 ;
+(id)deriveUUIDForAssistantFromBaseUUID:(id)arg1 ;
+(id)deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2 ;
+(void)setIdentifierSalt:(id)arg1 assistantSalt:(BOOL)arg2 ;
+(id)newFromSqliteValue:(MemRef)arg1 ;
+(id)hk_UUIDWithData:(id)arg1 ;
+(id)_navigation_dataForUUID;
+(id)_LS_UUIDWithData:(id)arg1 SHA1:(BOOL)arg2 ;
+(id)_LS_UUIDWithData:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)UUID;
-(id)_siri_domainObjectIdentifier;
-(long long)TTCompare:(id)arg1 ;
-(id)TTShortDescription;
-(id)_maps_initWithUUIDString:(id)arg1 disallowReturningZeroUUID:(BOOL)arg2 ;
-(id)convertToData;
-(id)initWithNamespace:(id)arg1 data:(id)arg2 ;
-(id)shortDescription;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(id)hk_dataForUUIDBytes;
-(id)_navigation_data;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(CFStringRef)_cfUUIDString;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUIDString;
-(id)initWithUUIDString:(id)arg1 ;
-(void)getUUIDBytes:(unsigned char)arg1 ;
-(id)initWithUUIDBytes:(unsigned char)arg1 ;
@end

