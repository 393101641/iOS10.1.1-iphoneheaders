/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFMessage.h>

@class NSUUID, NSString, HMFMessageDestination, NSDictionary;

@interface HMFMutableMessage : HMFMessage

@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) HMFMessageDestination * destination; 
@property (nonatomic,copy) NSDictionary * messagePayload; 
@property (nonatomic,copy) id responseHandler; 
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end
