//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class PXAssetCollectionActionManager;
@protocol PXDisplayAssetCollection;

@interface PXContentSyndicationItem : NSObject <NSCopying>
{
    id <PXDisplayAssetCollection> _assetCollection;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) id <PXDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAssetCollection:(id)arg1;

@end
