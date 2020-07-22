//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVWeakReference, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVFigAssetTrackInspector
{
    struct OpaqueFigAsset *_figAsset;
    struct OpaqueFigAssetTrack *_figAssetTrack;
    long long _copyFigFormatReaderOnce;
    struct OpaqueFigFormatReader *_figFormatReader;
    long long _copyFigTrackReaderOnce;
    struct OpaqueFigTrackReader *_figTrackReader;
    struct OpaqueFigSimpleMutex *_loadingMutex;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    NSMutableArray *_loadingBatches;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)hasProtectedContent;
- (id)_trackReferences;
- (_Bool)isExcludedFromAutoselectionInTrackGroup;
- (long long)provisionalAlternateGroupID;
- (long long)defaultAlternateGroupID;
- (long long)alternateGroupID;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segments;
- (CDStruct_1b6d18a9)minSampleDuration;
- (float)nominalFrameRate;
- (id)loudnessInfo;
- (float)preferredVolume;
- (long long)layer;
- (struct CGAffineTransform)preferredTransform;
- (struct CGSize)dimensions;
- (struct CGSize)naturalSize;
- (id)extendedLanguageTag;
- (id)languageCode;
- (float)estimatedDataRate;
- (int)naturalTimeScale;
- (_Bool)requiresFrameReordering;
- (CDStruct_e83c9415)mediaDecodeTimeRange;
- (CDStruct_e83c9415)mediaPresentationTimeRange;
- (CDStruct_e83c9415)timeRange;
- (long long)totalSampleDataLength;
- (_Bool)isSelfContained;
- (_Bool)isEnabled;
- (int)decodabilityValidationResult;
- (_Bool)isDecodable;
- (int)playabilityValidationResult;
- (_Bool)isPlayable;
- (id)formatDescriptions;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (id)mediaType;
- (unsigned int)_figMediaType;
- (int)trackID;
- (id)_loadingBatches;
- (struct OpaqueFigSimpleMutex *)_loadingMutex;
- (struct OpaqueFigTrackReader *)_figTrackReader;
- (struct OpaqueFigFormatReader *)_figFormatReader;
- (struct OpaqueFigAssetTrack *)_figAssetTrack;
- (id)asset;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (long long)_loadStatusForFigAssetTrackProperty:(id)arg1 error:(id *)arg2;
- (void)_removeFigNotifications;
- (void)_addFigNotifications;
- (void)finalize;
- (void)dealloc;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;

@end

