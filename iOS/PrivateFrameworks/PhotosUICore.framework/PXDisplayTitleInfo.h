//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSString, PHAssetCollection;

@interface PXDisplayTitleInfo <PXPhotoLibraryUIChangeObserver>
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_fontName;
    PHAssetCollection *__assetCollection;
}

+ (id)displayTitleInfoForDetailsOfAssetCollection:(id)arg1 withTitleCategory:(long long)arg2 defaultTitle:(id)arg3 defaultTitleCategory:(long long)arg4 titleKey:(id)arg5 titleCategoryKey:(id)arg6 subtitleKey:(id)arg7 simulatedLoadingDelay:(double)arg8 preferredAttributesPromise:(CDUnknownBlockType)arg9;
@property(retain, nonatomic, setter=_setAssetCollection:) PHAssetCollection *_assetCollection; // @synthesize _assetCollection=__assetCollection;
@property(readonly, copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)setFontName:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_updatePropertiesFromAssetCollection;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 fontName:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

