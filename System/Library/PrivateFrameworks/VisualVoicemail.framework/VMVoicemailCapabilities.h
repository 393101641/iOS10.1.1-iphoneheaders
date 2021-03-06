/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VMVoicemailCapabilities : NSObject <NSSecureCoding> {

	BOOL _canChangeGreeting;
	BOOL _canChangePassword;
	BOOL _mailboxRequiresSetup;
	long long _mailboxGreetingState;
	double _maximumGreetingDuration;
	unsigned long long _minimumPasswordLength;
	unsigned long long _maximumPasswordLength;

}

@property (nonatomic,readonly) BOOL canChangeGreeting;                                //@synthesize canChangeGreeting=_canChangeGreeting - In the implementation block
@property (nonatomic,readonly) BOOL canChangePassword;                                //@synthesize canChangePassword=_canChangePassword - In the implementation block
@property (nonatomic,readonly) BOOL mailboxRequiresSetup;                             //@synthesize mailboxRequiresSetup=_mailboxRequiresSetup - In the implementation block
@property (nonatomic,readonly) long long mailboxGreetingState;                        //@synthesize mailboxGreetingState=_mailboxGreetingState - In the implementation block
@property (nonatomic,readonly) double maximumGreetingDuration;                        //@synthesize maximumGreetingDuration=_maximumGreetingDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumPasswordLength;              //@synthesize minimumPasswordLength=_minimumPasswordLength - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumPasswordLength;              //@synthesize maximumPasswordLength=_maximumPasswordLength - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(BOOL)mailboxRequiresSetup;
-(double)maximumGreetingDuration;
-(unsigned long long)minimumPasswordLength;
-(unsigned long long)maximumPasswordLength;
-(BOOL)canChangePassword;
-(BOOL)canChangeGreeting;
-(long long)mailboxGreetingState;
-(id)initWithCanChangeGreeting:(BOOL)arg1 canChangePassword:(BOOL)arg2 mailboxRequiresSetup:(BOOL)arg3 mailboxGreetingState:(long long)arg4 maximumGreetingDuration:(double)arg5 minimumPasswordLength:(unsigned long long)arg6 maximumPasswordLength:(unsigned long long)arg7 ;
@end

