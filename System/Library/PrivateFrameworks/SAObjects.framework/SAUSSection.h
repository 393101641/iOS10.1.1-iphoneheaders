/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, SAUIAppPunchOut, NSString;

@interface SAUSSection : SADomainObject

@property (nonatomic,copy) NSArray * cardResults; 
@property (nonatomic,copy) NSArray * genericResults; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSString * sectionTitle; 
+(id)section;
+(id)sectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSArray *)cardResults;
-(void)setCardResults:(NSArray *)arg1 ;
-(NSArray *)genericResults;
-(void)setGenericResults:(NSArray *)arg1 ;
-(void)setSectionTitle:(NSString *)arg1 ;
-(NSString *)sectionTitle;
@end
