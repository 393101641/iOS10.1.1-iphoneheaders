/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDictionary;

@interface SBWorkspaceDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,retain) NSDictionary * sideAppState; 
@property (getter=isMedusaEnabled,nonatomic,readonly) BOOL medusaEnabled; 
@property (nonatomic,readonly) BOOL neverBreadcrumb; 
@property (nonatomic,readonly) BOOL alwaysBreadcrumb; 
-(void)setNeverBreadcrumb:(BOOL)arg1 ;
-(BOOL)neverBreadcrumb;
-(void)setMedusaEnabled:(BOOL)arg1 ;
-(BOOL)isMedusaEnabled;
-(void)setAlwaysBreadcrumb:(BOOL)arg1 ;
-(BOOL)alwaysBreadcrumb;
-(void)setSideAppState:(NSDictionary *)arg1 ;
-(NSDictionary *)sideAppState;
-(void)_bindAndRegisterDefaults;
@end
