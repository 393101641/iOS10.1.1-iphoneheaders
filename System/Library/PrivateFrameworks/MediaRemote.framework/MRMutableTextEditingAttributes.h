/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRTextEditingAttributes.h>

@class NSString;

@interface MRMutableTextEditingAttributes : MRTextEditingAttributes

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * prompt; 
@property (assign,nonatomic) MRTextInputTraits inputTraits; 
-(void)setTitle:(NSString *)arg1 ;
-(void)setPrompt:(NSString *)arg1 ;
-(void)setInputTraits:(MRTextInputTraits)arg1 ;
@end
