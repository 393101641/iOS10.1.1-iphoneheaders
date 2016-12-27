/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/XMLSAXHTTPRequest.h>

@class NSMutableURLRequest;

@interface YTXMLHTTPRequest : XMLSAXHTTPRequest {

	NSMutableURLRequest* _deferredRequest;
	BOOL _needsAccountAuth;
	BOOL _needsHostHeader;

}

@property (assign,nonatomic) BOOL needsAccountAuth;              //@synthesize needsAccountAuth=_needsAccountAuth - In the implementation block
@property (assign,nonatomic) BOOL needsHostHeader;               //@synthesize needsHostHeader=_needsHostHeader - In the implementation block
-(id)init;
-(void)dealloc;
-(void)loadRequest:(id)arg1 ;
-(BOOL)needsAccountAuth;
-(void)didAuthenticate:(id)arg1 ;
-(void)setNeedsAccountAuth:(BOOL)arg1 ;
-(void)setNeedsHostHeader:(BOOL)arg1 ;
-(void)failedToAuthenticate:(id)arg1 ;
-(void)listenForAuthenticationNotifications:(BOOL)arg1 ;
-(BOOL)needsHostHeader;
@end
