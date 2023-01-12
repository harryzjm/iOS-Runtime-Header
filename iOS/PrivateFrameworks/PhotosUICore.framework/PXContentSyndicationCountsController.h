//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXContentSyndicationMutableCountsController-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSString;
@protocol PXDisplayAssetCollection;

@interface PXContentSyndicationCountsController <PXSettingsKeyObserver, PXContentSyndicationMutableCountsController>
{
    CDStruct_aa0b146f _detailedCounts;
    long long _savedCount;
    id <PXDisplayAssetCollection> _assetCollection;
}

- (void).cxx_destruct;
@property(copy, nonatomic) id <PXDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
@property(nonatomic) long long savedCount;
@property(readonly, nonatomic) long long actualSavedCount;
@property(nonatomic) CDStruct_aa0b146f detailedCounts;
@property(readonly, nonatomic) CDStruct_aa0b146f actualDetailedCounts;
- (void)didSetAssetCollection:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *savedCountDescription;
@property(readonly, nonatomic) NSString *totalCountDescription;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
