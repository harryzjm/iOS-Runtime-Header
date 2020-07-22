//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IBICCatalogCollection, IBICCatalogCompilerResult, IBICStickerPack, NSMutableDictionary, NSMutableSet, NSSet;

@interface IBICCatalogCompilationSources : NSObject
{
    NSMutableDictionary *_itemsByPhase;
    NSMutableSet *_pathsToDeleteAtEndOfCompilation;
    IBICCatalogCollection *_catalogCollection;
    NSSet *_ignoredItems;
    NSSet *_itemsForWriting;
    NSSet *_itemsForCARCompiler;
    NSSet *_itemsForSpriteAtlasCompiler;
    NSSet *_itemsForIconCompiler;
    NSSet *_itemsForBrandAssetCollectionsInfoPlistGeneration;
    NSSet *_itemsForBundleIconCompiler;
    NSSet *_itemsForLaunchImageCompiler;
    IBICStickerPack *_itemForStickerPack;
    IBICCatalogCompilerResult *_selectionResult;
}

@property(readonly) IBICCatalogCompilerResult *selectionResult; // @synthesize selectionResult=_selectionResult;
@property(retain) IBICStickerPack *itemForStickerPack; // @synthesize itemForStickerPack=_itemForStickerPack;
@property(retain) NSSet *itemsForLaunchImageCompiler; // @synthesize itemsForLaunchImageCompiler=_itemsForLaunchImageCompiler;
@property(retain) NSSet *itemsForBundleIconCompiler; // @synthesize itemsForBundleIconCompiler=_itemsForBundleIconCompiler;
@property(retain) NSSet *itemsForBrandAssetCollectionsInfoPlistGeneration; // @synthesize itemsForBrandAssetCollectionsInfoPlistGeneration=_itemsForBrandAssetCollectionsInfoPlistGeneration;
@property(retain) NSSet *itemsForIconCompiler; // @synthesize itemsForIconCompiler=_itemsForIconCompiler;
@property(retain) NSSet *itemsForSpriteAtlasCompiler; // @synthesize itemsForSpriteAtlasCompiler=_itemsForSpriteAtlasCompiler;
@property(retain) NSSet *itemsForCARCompiler; // @synthesize itemsForCARCompiler=_itemsForCARCompiler;
@property(retain) NSSet *itemsForWriting; // @synthesize itemsForWriting=_itemsForWriting;
@property(retain) NSSet *ignoredItems; // @synthesize ignoredItems=_ignoredItems;
@property(readonly) NSSet *pathsToDeleteAtEndOfCompilation; // @synthesize pathsToDeleteAtEndOfCompilation=_pathsToDeleteAtEndOfCompilation;
@property(retain) IBICCatalogCollection *catalogCollection; // @synthesize catalogCollection=_catalogCollection;
- (void).cxx_destruct;
- (id)description;
- (_Bool)hasAppIconForCARFileNamed:(id)arg1;
- (void)addPathToDeleteAtEndOfCompilation:(id)arg1;
- (id)allItems;
@property(readonly) NSSet *allBundleIconSetReps;
- (id)itemsForPhase:(id)arg1;
- (void)setItems:(id)arg1 forPhase:(id)arg2;
- (id)init;

@end

