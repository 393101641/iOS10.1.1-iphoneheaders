/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKOOBMessage : NSObject {

	unsigned short _type;

}

@property (readonly) unsigned short type;              //@synthesize type=_type - In the implementation block
-(unsigned short)type;
-(id)data;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)_checkType:(unsigned short)arg1 ;
-(BOOL)_checkSize:(unsigned long long)arg1 ;
-(id)initWithMessageType:(unsigned short)arg1 ;
@end

