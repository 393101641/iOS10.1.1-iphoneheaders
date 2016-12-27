/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/SUAutoInstallFailureNotification.h>

@protocol SUAutoInstallFailureNotification <NSObject>
@optional
-(void)postNotificationForError:(id)arg1 withUpdateBuildNumber:(id)arg2;
-(void)dismissNotification;
-(void)postNotificationForError:(id)arg1;

@end


@class NSString;

@interface SUAutoInstallFailureNotification : NSObject <SUAutoInstallFailureNotification> {

	CFUserNotificationRef _notification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)postNotificationForError:(id)arg1 withUpdateBuildNumber:(id)arg2 ;
-(void)dismissNotification;
-(void)postNotificationForError:(id)arg1 ;
@end
