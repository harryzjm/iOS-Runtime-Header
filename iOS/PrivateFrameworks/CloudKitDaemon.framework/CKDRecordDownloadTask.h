//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDProgressTracker, CKRecord, NSError, NSMutableArray;
@protocol OS_dispatch_group;

@interface CKDRecordDownloadTask : NSObject
{
    _Bool _shouldCloneFileInAssetCache;
    CKRecord *_record;
    NSError *_error;
    NSMutableArray *_assetsToDownload;
    NSMutableArray *_assetsToDownloadInMemory;
    NSMutableArray *_packageIndexSets;
    NSMutableArray *_assetURLInfosToFillOut;
    NSObject<OS_dispatch_group> *_group;
    CKDProgressTracker *_progressTracker;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldCloneFileInAssetCache; // @synthesize shouldCloneFileInAssetCache=_shouldCloneFileInAssetCache;
@property(retain, nonatomic) CKDProgressTracker *progressTracker; // @synthesize progressTracker=_progressTracker;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain, nonatomic) NSMutableArray *assetURLInfosToFillOut; // @synthesize assetURLInfosToFillOut=_assetURLInfosToFillOut;
@property(retain, nonatomic) NSMutableArray *packageIndexSets; // @synthesize packageIndexSets=_packageIndexSets;
@property(retain, nonatomic) NSMutableArray *assetsToDownloadInMemory; // @synthesize assetsToDownloadInMemory=_assetsToDownloadInMemory;
@property(retain, nonatomic) NSMutableArray *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
- (void)didCompleteTaskWithError:(id)arg1;
- (void)didFillOutURLInfo:(id)arg1 error:(id)arg2;
- (void)didDownloadAsset:(id)arg1 error:(id)arg2;
- (id)initWithRecord:(id)arg1 trackProgress:(_Bool)arg2 assetsToDownload:(id)arg3 assetsToDownloadInMemory:(id)arg4 packageIndexSets:(id)arg5 assetURLInfosToFillOut:(id)arg6;

@end

