/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@interface MRGameControllerMessage : MRProtocolMessage {

	BOOL _eventInitialized;
	BOOL _hasEvent;
	SCD_Struct_MR9 _gcEvent;
	unsigned long long _priority;

}

@property (nonatomic,readonly) SCD_Struct_MR10* event; 
@property (nonatomic,readonly) unsigned long long controllerID; 
-(unsigned long long)type;
-(unsigned long long)priority;
-(SCD_Struct_MR10*)event;
-(unsigned long long)controllerID;
-(id)initWithGameControllerEvent:(const SCD_Struct_MR10*)arg1 controllerID:(unsigned long long)arg2 ;
-(id)initWithButtons:(SCD_Struct_MR5*)arg1 controllerID:(unsigned long long)arg2 ;
-(BOOL)shouldLog;
@end

