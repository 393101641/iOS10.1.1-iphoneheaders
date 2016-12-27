/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBUISceneClientIdentity, NSString;

@interface FBSSceneSpecification : NSObject <NSCopying, BSDescriptionProviding>

@property (nonatomic,copy,readonly) FBUISceneClientIdentity * clientIdentity; 
@property (nonatomic,readonly) Class hostAgentClass; 
@property (nonatomic,readonly) Class clientAgentClass; 
@property (nonatomic,readonly) Class settingsClass; 
@property (nonatomic,readonly) Class clientSettingsClass; 
@property (nonatomic,readonly) Class transitionContextClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)specification;
-(FBUISceneClientIdentity *)clientIdentity;
-(id)initWithClientIdentity:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)settingsClass;
-(Class)clientSettingsClass;
-(Class)transitionContextClass;
-(Class)hostAgentClass;
-(Class)clientAgentClass;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end
