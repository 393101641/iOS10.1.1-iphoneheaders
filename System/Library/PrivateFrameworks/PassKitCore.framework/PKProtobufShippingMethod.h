/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKProtobufShippingMethod : PBCodable <NSCopying> {

	long long _amount;
	NSString* _detail;
	NSString* _identifier;
	NSString* _label;
	unsigned _type;
	SCD_Struct_PK7 _has;

}

@property (assign,nonatomic) BOOL hasAmount; 
@property (assign,nonatomic) long long amount;                   //@synthesize amount=_amount - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                   //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDetail; 
@property (nonatomic,retain) NSString * detail;                  //@synthesize detail=_detail - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAmount:(long long)arg1 ;
-(long long)amount;
-(NSString *)detail;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasDetail;
-(void)setHasAmount:(BOOL)arg1 ;
-(BOOL)hasAmount;
-(BOOL)hasIdentifier;
-(BOOL)hasLabel;
@end

