/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraTLVBase.h>
#import <libobjc.A.dylib/HMDCameraTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface HMDEndPointAddress : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding> {

	BOOL _isIPv6Address;
	NSString* _ipAddress;
	NSNumber* _videoRTPPort;
	NSNumber* _audioRTPPort;

}

@property (nonatomic,copy,readonly) NSString * ipAddress;                 //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,readonly) BOOL isIPv6Address;                        //@synthesize isIPv6Address=_isIPv6Address - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * videoRTPPort;              //@synthesize videoRTPPort=_videoRTPPort - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * audioRTPPort;              //@synthesize audioRTPPort=_audioRTPPort - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)isIPv6Address;
-(NSNumber *)audioRTPPort;
-(NSNumber *)videoRTPPort;
-(NSString *)ipAddress;
-(id)initWithIPAddress:(id)arg1 isIPv6Address:(BOOL)arg2 videoRTPPort:(id)arg3 audioRTPPort:(id)arg4 ;
-(BOOL)compatibleWithRemoteEndPoint:(id)arg1 ;
@end

