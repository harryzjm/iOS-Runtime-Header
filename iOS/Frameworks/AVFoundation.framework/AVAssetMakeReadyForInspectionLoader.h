//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetInspector, NSMutableArray, NSURL;

__attribute__((visibility("hidden")))
@interface AVAssetMakeReadyForInspectionLoader
{
    AVAssetInspector *_assetInspector;
    struct OpaqueFigFormatReader *_formatReader;
    struct OpaqueFigSimpleMutex *_loadingMutex;
    NSMutableArray *_keysAwaitingCompletion;
    long long _status;
    int _basicInspectionFailureCode;
    NSURL *_URL;
}

- (id)URL;
- (_Bool)_isStreaming;
- (_Bool)hasProtectedContent;
- (_Bool)isComposable;
- (_Bool)isReadable;
- (_Bool)isExportable;
- (_Bool)isPlayable;
- (id)figChapterGroupInfo;
- (id)lyrics;
- (CDStruct_1b6d18a9)duration;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_loadValuesWhileMutexLockedForKeys:(id)arg1;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (void)_setStatus:(long long)arg1 figErrorCode:(int)arg2;
- (_Bool)_updateStatusWhileMutexLocked:(long long)arg1 figErrorCode:(int)arg2;
- (long long)_status;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (_Bool)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1;
- (long long)_statusOfValueWhileMutexLockedForKey:(id)arg1 error:(id *)arg2;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (_Bool)_inspectionRequiresAFormatReader;
- (struct OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)arg1;
- (_Bool)_providesAccurateTiming;
- (struct OpaqueFigSimpleMutex *)_loadingMutex;
- (struct OpaqueFigFormatReader *)_formatReader;
- (void)cancelLoading;
- (id)assetInspector;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

