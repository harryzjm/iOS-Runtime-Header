//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAsset.h>

@class NSString;

@interface PHAsset (PXPlacesAdditions)
+ (id)pk_fetchPlacesAssetsInAssetCollection:(id)arg1 options:(id)arg2;
- (long long)pk_isContentEqualTo:(id)arg1;
- (long long)compareTo:(id)arg1;
- (struct CLLocationCoordinate2D)coordinate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

