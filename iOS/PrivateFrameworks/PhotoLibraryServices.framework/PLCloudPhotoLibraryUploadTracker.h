//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface PLCloudPhotoLibraryUploadTracker : NSObject
{
    unsigned long long _totalNumberOfUnpushedMasters;
    unsigned long long _totalNumberOfPushedMasters;
    unsigned long long _totalNumberOfUploadedMasters;
    unsigned long long _totalSizeOfUnpushedOriginals;
    unsigned long long _totalSizeOfPushedOriginals;
    unsigned long long _totalUploadedOriginalSize;
    NSMutableSet *_mastersToUpload;
    NSMutableDictionary *_trackedResourceProgressSize;
    NSMutableDictionary *_trackedResourceMasterUploaded;
}

@property unsigned long long totalUploadedOriginalSize; // @synthesize totalUploadedOriginalSize=_totalUploadedOriginalSize;
@property unsigned long long totalSizeOfUnpushedOriginals; // @synthesize totalSizeOfUnpushedOriginals=_totalSizeOfUnpushedOriginals;
@property unsigned long long totalNumberOfUploadedMasters; // @synthesize totalNumberOfUploadedMasters=_totalNumberOfUploadedMasters;
@property unsigned long long totalNumberOfUnpushedMasters; // @synthesize totalNumberOfUnpushedMasters=_totalNumberOfUnpushedMasters;
- (void)reset;
- (void)resetIfNeeded;
- (void)setupFromCPLManager:(id)arg1;
- (void)setupFromLibrary:(id)arg1;
- (_Bool)trackingScopedIdentifier:(id)arg1;
- (void)addSizeForUnpushedOriginals:(unsigned long long)arg1 forScopedIdentifier:(id)arg2;
- (void)updateForScopedIdentifier:(id)arg1 progress:(float)arg2 fileSize:(unsigned long long)arg3 type:(int)arg4;
- (void)uploadFinishedForScopedIdentifier:(id)arg1 fileSize:(unsigned long long)arg2 type:(int)arg3 withError:(_Bool)arg4;
- (void)stopTrackingResourceWithScopedIdentifier:(id)arg1 fileSize:(unsigned long long)arg2 type:(int)arg3;
- (void)stopTrackingScopedIdentifier:(id)arg1;
- (id)_constructKeyForScopedIdentifier:(id)arg1 type:(int)arg2;
- (void)dealloc;
- (id)init;

@end

