/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAEASOAuthIdentity : NSObject {

	NSString* _username;
	NSString* _displayName;
	NSString* _token;
	NSString* _refreshToken;

}

@property (nonatomic,copy) NSString * username;                  //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * token;                     //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * refreshToken;              //@synthesize refreshToken=_refreshToken - In the implementation block
-(NSString *)displayName;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)setRefreshToken:(NSString *)arg1 ;
-(NSString *)refreshToken;
@end

