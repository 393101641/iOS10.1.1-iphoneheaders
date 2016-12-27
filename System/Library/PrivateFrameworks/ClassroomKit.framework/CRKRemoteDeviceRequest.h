/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString, CATTaskRequest;

@interface CRKRemoteDeviceRequest : CATTaskRequest {

	NSString* _deviceIdentifier;
	CATTaskRequest* _remoteRequest;

}

@property (nonatomic,copy) NSString * deviceIdentifier;                   //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) CATTaskRequest * remoteRequest;              //@synthesize remoteRequest=_remoteRequest - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setRemoteRequest:(CATTaskRequest *)arg1 ;
-(CATTaskRequest *)remoteRequest;
@end
