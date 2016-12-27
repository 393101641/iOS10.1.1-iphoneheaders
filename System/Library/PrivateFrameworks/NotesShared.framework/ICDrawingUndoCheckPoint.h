/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSOrderedSet, NSUUID, NSString;

@interface ICDrawingUndoCheckPoint : NSObject {

	CGImageRef _image;
	NSOrderedSet* _renderedCommands;
	NSUUID* _uuid;
	NSString* _cacheFilename;
	BOOL _isEraseAllCheckPoint;

}

@property (assign,nonatomic) CGImageRef image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * cacheFilename;                     //@synthesize cacheFilename=_cacheFilename - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * renderedCommands;              //@synthesize renderedCommands=_renderedCommands - In the implementation block
@property (nonatomic,readonly) BOOL isEraseAllCheckPoint;                    //@synthesize isEraseAllCheckPoint=_isEraseAllCheckPoint - In the implementation block
+(void)deleteAllCacheFiles;
+(unsigned long long)cacheSize;
+(id)cacheDirectory;
-(void)setImage:(CGImageRef)arg1 ;
-(void)dealloc;
-(CGImageRef)image;
-(NSUUID *)uuid;
-(NSString *)cacheFilename;
-(id)initWithImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 renderedCommands:(id)arg3 ;
-(NSOrderedSet *)renderedCommands;
-(BOOL)isInMemory;
-(void)writeToDiskAndFreeMemory;
-(void)reloadImage;
-(BOOL)isEraseAllCheckPoint;
-(CGImageRef)retainedImage;
-(void)flushFromMemoryIfPossible;
-(BOOL)ensureCacheDirectoryExists;
@end
