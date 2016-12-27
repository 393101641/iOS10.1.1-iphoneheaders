/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSError;

@interface SLGoogleUserInfoResponse : NSObject {

	long long _statusCode;
	NSDictionary* _userInfo;
	NSString* _displayName;
	NSString* _emailAddress;
	NSError* _error;
	NSString* _errorMessage;

}

@property (readonly) long long statusCode;                 //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (readonly) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(NSDictionary *)userInfo;
-(long long)statusCode;
-(NSString *)displayName;
-(NSString *)errorMessage;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSString *)emailAddress;
-(NSError *)error;
@end
