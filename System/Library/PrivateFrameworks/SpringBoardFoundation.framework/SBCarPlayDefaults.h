/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSString;

@interface SBCarPlayDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,retain) NSString * carPlayStartApplicationIdentifier; 
@property (nonatomic,retain) NSString * carPlayEndApplicationIdentifier; 
-(void)setCarPlayEndApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)carPlayEndApplicationIdentifier;
-(void)setCarPlayStartApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)carPlayStartApplicationIdentifier;
-(void)_bindAndRegisterDefaults;
@end
