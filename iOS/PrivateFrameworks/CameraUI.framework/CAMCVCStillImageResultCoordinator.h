//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol CAMCVCStillImageResultCoordinatorDelegate;

@interface CAMCVCStillImageResultCoordinator : NSObject
{
    _Bool _expectingPairedVideo;
    _Bool _allowMultipleCaptures;
    _Bool _shouldReturnFilteredPhotosAsSingleAsset;
    _Bool _didReceivePersistenceControllerDidCompleteAllLocalCallback;
    id <CAMCVCStillImageResultCoordinatorDelegate> _delegate;
    NSString *_identifier;
    NSSet *_allExpectedResultSpecifiers;
    NSMutableSet *__receivedPhotos;
    NSMutableSet *__receivedVideos;
    NSMutableSet *__handledResultSpecifiers;
    NSMutableSet *__dispatchedResultSpecifiers;
    NSMutableDictionary *__pendingPhotoProperties;
    NSMutableDictionary *__pendingVideoProperties;
    NSMutableDictionary *__pendingAssetAdjustments;
}

@property(readonly, nonatomic) NSMutableDictionary *_pendingAssetAdjustments; // @synthesize _pendingAssetAdjustments=__pendingAssetAdjustments;
@property(readonly, nonatomic) NSMutableDictionary *_pendingVideoProperties; // @synthesize _pendingVideoProperties=__pendingVideoProperties;
@property(readonly, nonatomic) NSMutableDictionary *_pendingPhotoProperties; // @synthesize _pendingPhotoProperties=__pendingPhotoProperties;
@property(readonly, nonatomic) NSMutableSet *_dispatchedResultSpecifiers; // @synthesize _dispatchedResultSpecifiers=__dispatchedResultSpecifiers;
@property(readonly, nonatomic) NSMutableSet *_handledResultSpecifiers; // @synthesize _handledResultSpecifiers=__handledResultSpecifiers;
@property(readonly, nonatomic) NSMutableSet *_receivedVideos; // @synthesize _receivedVideos=__receivedVideos;
@property(readonly, nonatomic) NSMutableSet *_receivedPhotos; // @synthesize _receivedPhotos=__receivedPhotos;
@property(nonatomic) _Bool didReceivePersistenceControllerDidCompleteAllLocalCallback; // @synthesize didReceivePersistenceControllerDidCompleteAllLocalCallback=_didReceivePersistenceControllerDidCompleteAllLocalCallback;
@property(readonly, nonatomic) _Bool shouldReturnFilteredPhotosAsSingleAsset; // @synthesize shouldReturnFilteredPhotosAsSingleAsset=_shouldReturnFilteredPhotosAsSingleAsset;
@property(readonly, nonatomic) _Bool allowMultipleCaptures; // @synthesize allowMultipleCaptures=_allowMultipleCaptures;
@property(readonly, nonatomic, getter=isExpectingPairedVideo) _Bool expectingPairedVideo; // @synthesize expectingPairedVideo=_expectingPairedVideo;
@property(readonly, nonatomic) NSSet *allExpectedResultSpecifiers; // @synthesize allExpectedResultSpecifiers=_allExpectedResultSpecifiers;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) __weak id <CAMCVCStillImageResultCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_errorWithDescription:(id)arg1 code:(long long)arg2;
- (id)_errorForResultSpecifiers:(unsigned long long)arg1 allowMissingVideo:(_Bool)arg2;
- (_Bool)_attemptDispatchForResultSpecifiers:(unsigned long long)arg1 forceRemainingDispatches:(_Bool)arg2;
- (_Bool)_attemptDispatchForPairWithFilteredResultSpecifiers:(unsigned long long)arg1 unfilteredResultSpecifiers:(unsigned long long)arg2 forceRemainingDispatches:(_Bool)arg3;
- (_Bool)_isWaitingOnResultSpecifiers:(unsigned long long)arg1;
- (void)_dispatchPendingPropertiesForced:(_Bool)arg1;
- (void)forceRemainingDispatches;
- (void)updateVideoProperties:(id)arg1 forResultSpecifiers:(unsigned long long)arg2;
- (void)updatePhotoProperties:(id)arg1 assetAdjustments:(id)arg2 forResultSpecifiers:(unsigned long long)arg3;
- (id)initWithDelegate:(id)arg1 identifier:(id)arg2 allExpectedResultSpecifiers:(id)arg3 isExpectingPairedVideo:(_Bool)arg4 allowMultipleCaptures:(_Bool)arg5 shouldReturnFilteredPhotosAsSingleAsset:(_Bool)arg6;

@end

