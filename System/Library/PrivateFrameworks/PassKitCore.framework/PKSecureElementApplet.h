/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKSecureElementApplet : NSObject <NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _lifecycleState;

}

@property (nonatomic,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long lifecycleState;              //@synthesize lifecycleState=_lifecycleState - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureElementAppletWithInternalApplet:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(unsigned long long)lifecycleState;
-(id)initWithIdentifier:(id)arg1 lifecycleState:(unsigned long long)arg2 ;
@end

