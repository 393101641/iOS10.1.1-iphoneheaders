/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IDSStunConnectionDataController : NSObject {

	NSMutableDictionary* _tokenToConnectionData;
	NSMutableDictionary* _tokenToDeliveryStatus;

}
+(id)sharedInstance;
-(id)dataFromCandidates:(id)arg1 token:(id)arg2 ;
-(unsigned long long)deliveryStatus:(id)arg1 ;
-(void)setDeliveryStatus:(id)arg1 status:(unsigned long long)arg2 ;
-(id)candidatesFromData:(id)arg1 token:(id)arg2 ;
-(void)removeData:(id)arg1 ;
@end
