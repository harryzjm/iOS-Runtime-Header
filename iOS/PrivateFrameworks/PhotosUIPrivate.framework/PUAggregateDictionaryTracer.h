//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMapTable;
@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUAggregateDictionaryTracer : NSObject
{
    _Bool __streamedVideoDidStartPlaying;
    NSMapTable *__browsingViewModelTracers;
    id <PUDisplayAsset> __lastViewedAsset;
    NSDate *__lastPlayStartDate;
    id <PUDisplayAsset> __lastPlayedAsset;
    long long __assetPlayCount;
    id <PUDisplayAsset> __streamedVideo;
    double __streamedVideoBeginTime;
    long long __streamedVideoStallCount;
    long long __oneUpPresentationOrigin;
    id <PUDisplayAsset> __lastViewedAssetPerOrigin;
}

+ (id)sharedTracer;
- (void).cxx_destruct;
@property(retain, nonatomic) id <PUDisplayAsset> _lastViewedAssetPerOrigin; // @synthesize _lastViewedAssetPerOrigin=__lastViewedAssetPerOrigin;
@property(nonatomic) long long _oneUpPresentationOrigin; // @synthesize _oneUpPresentationOrigin=__oneUpPresentationOrigin;
@property(nonatomic, setter=_setStreamedVideoStallCount:) long long _streamedVideoStallCount; // @synthesize _streamedVideoStallCount=__streamedVideoStallCount;
@property(nonatomic, setter=_setStreamedVideoBeginTime:) double _streamedVideoBeginTime; // @synthesize _streamedVideoBeginTime=__streamedVideoBeginTime;
@property(nonatomic, setter=_setStreamedVideoDidStartPlaying:) _Bool _streamedVideoDidStartPlaying; // @synthesize _streamedVideoDidStartPlaying=__streamedVideoDidStartPlaying;
@property(nonatomic, setter=_setStreamedVideo:) __weak id <PUDisplayAsset> _streamedVideo; // @synthesize _streamedVideo=__streamedVideo;
@property(nonatomic, setter=_setAssetPlayCount:) long long _assetPlayCount; // @synthesize _assetPlayCount=__assetPlayCount;
@property(nonatomic, setter=_setLastPlayedAsset:) __weak id <PUDisplayAsset> _lastPlayedAsset; // @synthesize _lastPlayedAsset=__lastPlayedAsset;
@property(retain, nonatomic, setter=_setLastPlayStartDate:) NSDate *_lastPlayStartDate; // @synthesize _lastPlayStartDate=__lastPlayStartDate;
@property(nonatomic, setter=_setLastViewedAsset:) __weak id <PUDisplayAsset> _lastViewedAsset; // @synthesize _lastViewedAsset=__lastViewedAsset;
@property(readonly, nonatomic) NSMapTable *_browsingViewModelTracers; // @synthesize _browsingViewModelTracers=__browsingViewModelTracers;
- (void)userDidEnterOneUpFromOrigin:(long long)arg1;
- (void)userStartedViewingCollection:(id)arg1 withListViewItemSelectionTrackerKey:(struct __CFString *)arg2;
- (id)_browsingViewModelTracerForBrowsingViewModel:(id)arg1 createIfNeeded:(_Bool)arg2;
- (long long)_assetTypeForAsset:(id)arg1;
- (void)streamedVideoPlaybackEnded;
- (void)streamedVideoPlaybackStalled:(id)arg1;
- (void)streamedVideoPlaybackStartedActuallyPlaying:(id)arg1;
- (void)streamedVideoPlaybackBegan:(id)arg1;
- (void)vitalityPlayedForAssetInOneUp:(id)arg1;
- (void)userDidPlayAssetInOneUp:(id)arg1;
- (void)userWillPlayAssetInOneUp:(id)arg1;
- (void)userViewedAssetInOneUp:(id)arg1;
- (void)userViewedHDRPhotoInOneUpFor:(double)arg1;
- (void)userViewedPhotoInOneUpFor:(double)arg1;
- (void)userBrowsedOneUpFor:(double)arg1;
- (void)invalidateContext:(id)arg1;
- (void)userStoppedViewingCurrentAssetOfBrowsingViewModel:(id)arg1 inContext:(id)arg2;
- (void)userStartedViewingCurrentAssetOfBrowsingViewModel:(id)arg1 inContext:(id)arg2;
- (id)init;

@end

