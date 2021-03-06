/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistorySyncHelper/CallHistorySyncHelper-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface TransactionsPb : PBCodable <NSCopying> {

	NSMutableArray* _calls;

}

@property (nonatomic,retain) NSMutableArray * calls;              //@synthesize calls=_calls - In the implementation block
-(void)addCalls:(id)arg1 ;
-(unsigned long long)callsCount;
-(void)clearCalls;
-(id)callsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCalls:(NSMutableArray *)arg1 ;
-(NSMutableArray *)calls;
@end

