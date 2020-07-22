//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPlacesMapGeotaggableInfoDelegate-Protocol.h>

@class NSString;

@interface PXPlacesGeotaggableMediaProvider : NSObject <PXPlacesMapGeotaggableInfoDelegate>
{
}

- (id)_fetchImageManagerAssetForPlacesAsset:(id)arg1;
- (void)imageForGeotaggable:(id)arg1 ofSize:(struct CGSize)arg2 networkAccessAllowed:(_Bool)arg3 andCompletion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

