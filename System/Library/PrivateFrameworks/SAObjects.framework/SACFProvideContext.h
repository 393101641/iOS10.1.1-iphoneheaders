/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SACFProvideContext : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * context; 
@property (nonatomic,copy) NSString * contextVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)provideContext;
+(id)provideContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)contextVersion;
-(void)setContextVersion:(NSString *)arg1 ;
@end
