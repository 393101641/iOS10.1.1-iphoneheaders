/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SASPronunciationData;

@interface SASPronunciationRecognized : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * errorCode; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,retain) SASPronunciationData * pronunciationData; 
+(id)pronunciationRecognized;
+(id)pronunciationRecognizedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(NSNumber *)errorCode;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SASPronunciationData *)pronunciationData;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(void)setPronunciationData:(SASPronunciationData *)arg1 ;
@end

