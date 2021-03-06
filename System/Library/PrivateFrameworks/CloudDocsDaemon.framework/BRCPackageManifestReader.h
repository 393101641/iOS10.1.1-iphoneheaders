/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSInputStream, PBMessageStreamReader, NSError;

@interface BRCPackageManifestReader : NSEnumerator {

	NSInputStream* _stream;
	PBMessageStreamReader* _reader;
	NSError* _error;

}

@property (assign,nonatomic) Class itemClass; 
-(id)init;
-(void)dealloc;
-(id)nextObject;
-(void)done;
-(id)initWithURL:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(void)setItemClass:(Class)arg1 ;
-(Class)itemClass;
-(id)error;
-(id)initWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2 ;
-(id)initWithInputStream:(id)arg1 ;
@end

