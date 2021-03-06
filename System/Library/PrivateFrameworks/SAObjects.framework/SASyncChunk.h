/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, SASyncAppMetaData, NSArray;

@interface SASyncChunk : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * appBundleId; 
@property (nonatomic,retain) SASyncAppMetaData * appMetaData; 
@property (nonatomic,copy) NSString * intentSlotName; 
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * postGen; 
@property (nonatomic,copy) NSString * preGen; 
@property (nonatomic,copy) NSArray * toAdd; 
@property (nonatomic,copy) NSArray * toRemove; 
@property (nonatomic,copy) NSString * validity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)chunk;
+(id)chunkWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(SASyncAppMetaData *)appMetaData;
-(void)setAppMetaData:(SASyncAppMetaData *)arg1 ;
-(NSString *)intentSlotName;
-(void)setIntentSlotName:(NSString *)arg1 ;
-(NSString *)postGen;
-(void)setPostGen:(NSString *)arg1 ;
-(NSString *)preGen;
-(void)setPreGen:(NSString *)arg1 ;
-(NSArray *)toAdd;
-(void)setToAdd:(NSArray *)arg1 ;
-(NSArray *)toRemove;
-(void)setToRemove:(NSArray *)arg1 ;
-(void)setValidity:(NSString *)arg1 ;
-(NSString *)validity;
@end

