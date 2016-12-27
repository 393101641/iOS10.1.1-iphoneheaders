/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class GEOResourceManifestConfiguration, NSString;

@interface VKStylesheetVendorResourceManifestTileGroupObserverProxy : NSObject <GEOResourceManifestTileGroupObserver> {

	weak_ptr<md::StylesheetVendor>* _vendor;
	GEOResourceManifestConfiguration* _manifestConfiguration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(id)initWithStylesheetVendor:(shared_ptr<md::StylesheetVendor>*)arg1 manifestConfiguration:(id)arg2 ;
@end
