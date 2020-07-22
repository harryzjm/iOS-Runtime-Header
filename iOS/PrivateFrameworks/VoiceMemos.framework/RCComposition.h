//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceMemos/NSCopying-Protocol.h>
#import <VoiceMemos/NSMutableCopying-Protocol.h>
#import <VoiceMemos/RCDictionaryPListRepresentationCoding-Protocol.h>

@class NSArray, NSDate, NSString, NSURL;

@interface RCComposition : NSObject <NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding>
{
    _Bool _cachedComposedAVURLDurationIsValid;
    _Bool _readonly;
    NSURL *_savedRecordingURI;
    NSDate *_creationDate;
    NSURL *_composedAVURL;
    NSURL *_composedWaveformURL;
    NSArray *_decomposedFragments;
    NSArray *_composedFragments;
    double _cachedComposedAVURLDuration;
}

+ (_Bool)_markCompositionAVURLsBeingModified:(id)arg1;
+ (_Bool)_isSessionWithModificationAccessActiveForComposedAVURL:(id)arg1;
+ (id)_compositionFragmentsFolderForComposedAVURL:(id)arg1;
+ (id)_compositionMetadataURLForComposedAVURL:(id)arg1;
+ (id)_compositionMetadataURLForCompositionBundleURL:(id)arg1;
+ (id)compositionBundleURLForComposedAVURL:(id)arg1;
+ (id)compositionWithComposedAVURL:(id)arg1;
+ (id)compositionLoadedForSavedRecordingURI:(id)arg1 createIfNeeded:(_Bool)arg2;
+ (id)compositionLoadedForComposedAVURL:(id)arg1 createIfNeeded:(_Bool)arg2;
+ (id)compositionLoadedFromCompositionBundleURL:(id)arg1;
+ (id)_compositionLoadedFromMetadataURL:(id)arg1 composedAVURL:(id)arg2 savedRecordingURI:(id)arg3 createIfNeeded:(_Bool)arg4;
+ (id)_unitTestingCompositionWithDecomposedFragments:(id)arg1;
@property(nonatomic) _Bool readonly; // @synthesize readonly=_readonly;
@property(nonatomic) double cachedComposedAVURLDuration; // @synthesize cachedComposedAVURLDuration=_cachedComposedAVURLDuration;
@property(nonatomic) _Bool cachedComposedAVURLDurationIsValid; // @synthesize cachedComposedAVURLDurationIsValid=_cachedComposedAVURLDurationIsValid;
@property(readonly, nonatomic) NSArray *composedFragments; // @synthesize composedFragments=_composedFragments;
@property(retain, nonatomic) NSArray *decomposedFragments; // @synthesize decomposedFragments=_decomposedFragments;
@property(readonly, nonatomic) NSURL *composedWaveformURL; // @synthesize composedWaveformURL=_composedWaveformURL;
@property(readonly, nonatomic) NSURL *composedAVURL; // @synthesize composedAVURL=_composedAVURL;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSURL *savedRecordingURI; // @synthesize savedRecordingURI=_savedRecordingURI;
- (void).cxx_destruct;
- (id)_calcualteComposedFragments;
- (double)_composedDuration;
- (void)recacheComposedDuration;
- (id)compositionByDuplicatingResourcesToDestinationComposedAVURL:(id)arg1;
- (_Bool)saveMetadataToDefaultLocation;
- (id)compositionByReloadingFromDefaultMetadataLocation;
- (void)deleteFromFilesystem;
- (void)enumerateOrphanedFragmentsWithBlock:(CDUnknownBlockType)arg1;
- (id)newRandomFragmentWithInsertionTimeRangeInComposition:(CDStruct_73a5d3ca)arg1 pathExtension:(id)arg2;
- (id)compositionByClippingToComposedTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)compositionByDeletingAndSplittingAtComposedTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)composedFragmentsIntersectingTimeRange:(CDStruct_73a5d3ca)arg1;
- (unsigned long long)estimatedFileSizeOfComposedAssetIncludingRelatedResources:(_Bool)arg1;
- (unsigned long long)_fileSizeOfComposedAssetsIncludingRelatedResources:(_Bool)arg1;
- (unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(_Bool)arg1;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) double composedDuration;
- (void)setSavedRecordingURIFromRecoveredRecordingURI:(id)arg1;
@property(readonly, nonatomic) _Bool isContentBeingModified;
- (id)dictionaryPListRepresentation;
- (id)initWithDictionaryPListRepresentation:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposedAVURL:(id)arg1 savedRecordingURI:(id)arg2 decomposedFragments:(id)arg3 composedFragments:(id)arg4;
- (id)compositionAsset;
- (id)playableAsset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

