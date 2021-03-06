/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSString, NSDictionary;

@interface SBBootDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,retain) NSString * lastSystemBuildVersion; 
@property (nonatomic,retain) NSString * lastRestoreIdentifier; 
@property (assign,nonatomic) BOOL hasCompletedSynchronizingCloudCriticalData; 
@property (assign,nonatomic) NSDictionary * bootTransitionContext; 
@property (assign,nonatomic) BOOL comingFromUserPowerDown; 
@property (nonatomic,readonly) BOOL dontLockAfterCrash; 
@property (nonatomic,readonly) BOOL recordBootTimeTillDidFinishLaunching; 
-(void)setComingFromUserPowerDown:(BOOL)arg1 ;
-(BOOL)comingFromUserPowerDown;
-(void)setLastSystemBuildVersion:(NSString *)arg1 ;
-(NSString *)lastSystemBuildVersion;
-(void)setHasCompletedSynchronizingCloudCriticalData:(BOOL)arg1 ;
-(BOOL)hasCompletedSynchronizingCloudCriticalData;
-(void)setBootTransitionContext:(NSDictionary *)arg1 ;
-(NSDictionary *)bootTransitionContext;
-(void)setDontLockAfterCrash:(BOOL)arg1 ;
-(BOOL)dontLockAfterCrash;
-(void)setLastRestoreIdentifier:(NSString *)arg1 ;
-(NSString *)lastRestoreIdentifier;
-(void)setRecordBootTimeTillDidFinishLaunching:(BOOL)arg1 ;
-(BOOL)recordBootTimeTillDidFinishLaunching;
-(void)_bindAndRegisterDefaults;
@end

