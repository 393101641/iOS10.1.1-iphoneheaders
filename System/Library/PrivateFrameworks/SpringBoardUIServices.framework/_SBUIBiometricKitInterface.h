/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BiometricKitDelegate.h>

@protocol _SBUIBiometricKitInterfaceDelegate;
@class BiometricKit, NSString;

@interface _SBUIBiometricKitInterface : NSObject <BiometricKitDelegate> {

	BiometricKit* _biometricKit;
	unsigned long long _enrolledIdentitiesCount;
	int _enrollmentChangedNotifyToken;
	BOOL _isFingerOn;
	id<_SBUIBiometricKitInterfaceDelegate> _delegate;

}

@property (assign,nonatomic) id<_SBUIBiometricKitInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(void)setDelegate:(id<_SBUIBiometricKitInterfaceDelegate>)arg1 ;
-(void)dealloc;
-(id<_SBUIBiometricKitInterfaceDelegate>)delegate;
-(BOOL)hasEnrolledIdentities;
-(int)detectFingerWithOptions:(id)arg1 ;
-(int)enableBackgroundFdet:(BOOL)arg1 ;
-(void)_sendDelegateEvent:(unsigned long long)arg1 ;
-(int)matchWithMode:(unsigned long long)arg1 andCredentialSet:(id)arg2 ;
-(unsigned long long)lockoutState;
-(BOOL)isFingerOn;
-(void)matchResult:(id)arg1 withDetails:(id)arg2 ;
-(void)statusMessage:(unsigned)arg1 ;
@end

