/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DShaderEffectStateInfo.h>

@interface TSCH3DShaderEffect : NSObject <TSCH3DShaderEffectStateInfo>
+(id)stateSharingID;
+(Class)stateClass;
+(id)effect;
-(id)stateSharingID;
-(void)addVariables:(id)arg1 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 updateCurrentStates:(id)arg3 ;
-(void)updateState:(id)arg1 effectsStates:(id)arg2 ;
-(Class)stateClass;
-(BOOL)alwaysUploadData;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

