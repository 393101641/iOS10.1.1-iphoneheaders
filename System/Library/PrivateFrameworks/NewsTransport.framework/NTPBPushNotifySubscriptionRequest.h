/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDeviceInfo, NSMutableArray, NSString;

@interface NTPBPushNotifySubscriptionRequest : PBRequest <NSCopying> {

	NTPBDeviceInfo* _deviceInfo;
	NSMutableArray* _notificationEntitys;
	NSString* _notificationUserId;
	NSString* _userStorefrontId;

}

@property (nonatomic,readonly) BOOL hasNotificationUserId; 
@property (nonatomic,retain) NSString * notificationUserId;                     //@synthesize notificationUserId=_notificationUserId - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInfo; 
@property (nonatomic,retain) NTPBDeviceInfo * deviceInfo;                       //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationEntitys;              //@synthesize notificationEntitys=_notificationEntitys - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;                       //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
+(Class)notificationEntityType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(void)setNotificationUserId:(NSString *)arg1 ;
-(void)setDeviceInfo:(NTPBDeviceInfo *)arg1 ;
-(void)setNotificationEntitys:(NSMutableArray *)arg1 ;
-(BOOL)hasUserStorefrontId;
-(NSString *)userStorefrontId;
-(BOOL)hasNotificationUserId;
-(NSString *)notificationUserId;
-(void)addNotificationEntity:(id)arg1 ;
-(BOOL)hasDeviceInfo;
-(void)clearNotificationEntitys;
-(unsigned long long)notificationEntitysCount;
-(id)notificationEntityAtIndex:(unsigned long long)arg1 ;
-(NTPBDeviceInfo *)deviceInfo;
-(NSMutableArray *)notificationEntitys;
@end

