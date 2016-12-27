/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCRestrictions : NSObject {

	BOOL _testing;
	long long _isExplicitContentAllowedOverride;
	long long _buildVersionNumber;

}

@property (assign,nonatomic) BOOL testing;                                            //@synthesize testing=_testing - In the implementation block
@property (assign,nonatomic) long long isExplicitContentAllowedOverride;              //@synthesize isExplicitContentAllowedOverride=_isExplicitContentAllowedOverride - In the implementation block
@property (assign,nonatomic) long long buildVersionNumber;                            //@synthesize buildVersionNumber=_buildVersionNumber - In the implementation block
@property (nonatomic,readonly) BOOL isExplicitContentAllowed; 
+(id)sharedInstance;
+(long long)integerRepresentationOfShortVersionString:(id)arg1 ;
-(id)init;
-(BOOL)testing;
-(long long)isExplicitContentAllowedOverride;
-(void)setIsExplicitContentAllowedOverride:(long long)arg1 ;
-(long long)buildVersionNumber;
-(BOOL)isExplicitContentAllowed;
-(void)t_startForcingExplicitContentDisallowed;
-(void)t_stopForcingExplicitContentDisallowed;
-(BOOL)isNewsVersionAllowed:(long long)arg1 ;
-(BOOL)isContentBlockedInStorefrontID:(id)arg1 withAllowedStorefrontIDs:(id)arg2 blockedStorefrontIDs:(id)arg3 ;
-(void)setTesting:(BOOL)arg1 ;
-(void)setBuildVersionNumber:(long long)arg1 ;
@end
