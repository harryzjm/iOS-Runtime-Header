//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXRelatedEntry-Protocol.h>

@class NSString, PHAssetCollection, PHFetchResult, PHObject;

@interface PXRelatedEntry : NSObject <PXRelatedEntry>
{
    NSString *_relatedTitleFontName;
    PHAssetCollection *_assetCollection;
    PHFetchResult *_keyAssetFetchResult;
    PHObject *_referenceObject;
    NSString *_relatedLocalizedTitle;
}

@property(retain, nonatomic) NSString *relatedLocalizedTitle; // @synthesize relatedLocalizedTitle=_relatedLocalizedTitle;
@property(readonly, nonatomic) PHObject *referenceObject; // @synthesize referenceObject=_referenceObject;
@property(readonly, nonatomic) PHFetchResult *keyAssetFetchResult; // @synthesize keyAssetFetchResult=_keyAssetFetchResult;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) NSString *relatedTitleFontName; // @synthesize relatedTitleFontName=_relatedTitleFontName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) PHObject *relatedReferenceObject;
@property(readonly, nonatomic) PHAssetCollection *relatedAssetCollection;
@property(readonly, nonatomic) NSString *relatedLocalizedSubtitle;
@property(readonly, nonatomic) PHFetchResult *relatedKeyAssetFetchResult;
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder;
- (id)initWithAssetCollection:(id)arg1 keyAssetFetchResult:(id)arg2 referenceObject:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
