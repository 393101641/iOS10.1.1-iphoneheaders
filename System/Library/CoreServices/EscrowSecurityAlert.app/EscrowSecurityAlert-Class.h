/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/EscrowSecurityAlert.app/EscrowSecurityAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EscrowSecurityAlertDelegateProtocol, OS_dispatch_queue;
@class NSObject, SecureBackup;

@interface EscrowSecurityAlert : NSObject {

	BOOL _pendingNotification;
	BOOL _isMultiUser;
	id<EscrowSecurityAlertDelegateProtocol> _delegate;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	SecureBackup* _sb;

}

@property (assign) BOOL pendingNotification;                                       //@synthesize pendingNotification=_pendingNotification - In the implementation block
@property (assign) BOOL isMultiUser;                                               //@synthesize isMultiUser=_isMultiUser - In the implementation block
@property (retain,readonly) NSObject*<OS_dispatch_queue> notifyQueue;              //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (retain,readonly) SecureBackup * sb;                                     //@synthesize sb=_sb - In the implementation block
@property (retain) id<EscrowSecurityAlertDelegateProtocol> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(void)handleTimerEvent;
-(BOOL)inCircle;
-(SecureBackup *)sb;
-(BOOL)pendingNotification;
-(void)setPendingNotification:(BOOL)arg1 ;
-(void)setIsMultiUser:(BOOL)arg1 ;
-(void)handleNotification:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<EscrowSecurityAlertDelegateProtocol>)arg1 ;
-(id<EscrowSecurityAlertDelegateProtocol>)delegate;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(BOOL)isMultiUser;
@end
