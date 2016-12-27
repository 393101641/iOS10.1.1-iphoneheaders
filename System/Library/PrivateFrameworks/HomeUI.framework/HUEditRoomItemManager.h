/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFStaticItem, HFStaticItemProvider, HFRoomBuilder;

@interface HUEditRoomItemManager : HFItemManager {

	HFStaticItem* _nameItem;
	HFStaticItem* _cameraItem;
	HFStaticItem* _chooseWallpaperItem;
	HFStaticItem* _wallpaperThumbnailItem;
	HFStaticItem* _removeItem;
	HFStaticItemProvider* _staticItemProvider;
	HFRoomBuilder* _roomBuilder;

}

@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;              //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HFRoomBuilder * roomBuilder;                            //@synthesize roomBuilder=_roomBuilder - In the implementation block
@property (nonatomic,retain) HFStaticItem * nameItem;                                //@synthesize nameItem=_nameItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * cameraItem;                              //@synthesize cameraItem=_cameraItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * chooseWallpaperItem;                     //@synthesize chooseWallpaperItem=_chooseWallpaperItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * wallpaperThumbnailItem;                  //@synthesize wallpaperThumbnailItem=_wallpaperThumbnailItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * removeItem;                              //@synthesize removeItem=_removeItem - In the implementation block
-(unsigned long long)_numberOfSections;
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(void)_createItemProvidersWithHome:(id)arg1 ;
-(id)_itemProviders;
-(id)initWithRoomBuilder:(id)arg1 delegate:(id)arg2 ;
-(void)setNameItem:(HFStaticItem *)arg1 ;
-(void)setCameraItem:(HFStaticItem *)arg1 ;
-(void)setChooseWallpaperItem:(HFStaticItem *)arg1 ;
-(void)setWallpaperThumbnailItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)nameItem;
-(HFStaticItem *)cameraItem;
-(HFStaticItem *)chooseWallpaperItem;
-(HFStaticItem *)wallpaperThumbnailItem;
-(HFRoomBuilder *)roomBuilder;
-(void)setRemoveItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)removeItem;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_styleForItem:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(void)setRoomBuilder:(HFRoomBuilder *)arg1 ;
@end
