/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface CXCall : NSObject <NSSecureCoding> {

	BOOL _outgoing;
	BOOL _onHold;
	BOOL _hasConnected;
	BOOL _hasEnded;
	NSUUID* _UUID;

}

@property (nonatomic,copy) NSUUID * UUID;                                  //@synthesize UUID=_UUID - In the implementation block
@property (assign,getter=isOutgoing,nonatomic) BOOL outgoing;              //@synthesize outgoing=_outgoing - In the implementation block
@property (assign,getter=isOnHold,nonatomic) BOOL onHold;                  //@synthesize onHold=_onHold - In the implementation block
@property (assign,nonatomic) BOOL hasConnected;                            //@synthesize hasConnected=_hasConnected - In the implementation block
@property (assign,nonatomic) BOOL hasEnded;                                //@synthesize hasEnded=_hasEnded - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)UUID;
-(id)initWithUUID:(id)arg1 ;
-(BOOL)isEqualToCall:(id)arg1 ;
-(void)setHasConnected:(BOOL)arg1 ;
-(void)setOutgoing:(BOOL)arg1 ;
-(BOOL)isOutgoing;
-(void)setUUID:(NSUUID *)arg1 ;
-(BOOL)hasConnected;
-(BOOL)hasEnded;
-(BOOL)isOnHold;
-(void)setOnHold:(BOOL)arg1 ;
-(void)setHasEnded:(BOOL)arg1 ;
@end
