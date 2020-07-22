//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress, PUAssetSharedViewModelChange, PUOperationStatus;
@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUAssetSharedViewModel
{
    id <PUDisplayAsset> _asset;
    PUOperationStatus *_loadingStatus;
    NSProgress *_saveProgress;
    long long _saveState;
}

@property(nonatomic) long long saveState; // @synthesize saveState=_saveState;
@property(retain, nonatomic) NSProgress *saveProgress; // @synthesize saveProgress=_saveProgress;
@property(retain, nonatomic) PUOperationStatus *loadingStatus; // @synthesize loadingStatus=_loadingStatus;
@property(readonly, nonatomic) id <PUDisplayAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
@property(readonly, nonatomic) PUAssetSharedViewModelChange *currentChange;
- (id)newViewModelChange;
- (id)initWithAsset:(id)arg1;
- (id)init;

@end

