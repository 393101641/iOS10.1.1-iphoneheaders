/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBUIProcessManager.h>

@protocol FBUIProcessManager <NSObject>
@required
-(id)currentProcess;

@end


@class NSString;

@interface FBUIProcessManager : NSObject <FBUIProcessManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)currentProcess;
@end
