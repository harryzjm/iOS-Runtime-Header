//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXDataSectionManager.h>

@class NSMutableDictionary, NSObject, NSString, PHPhotoLibrary, PUStorageTipCollectionViewDataSection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUStorageTipCollectionViewDataSectionManager : PXDataSectionManager
{
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_tipQueue;
    NSMutableDictionary *_fetchResults;
    PUStorageTipCollectionViewDataSection *_pendingDataSection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PUStorageTipCollectionViewDataSection *pendingDataSection; // @synthesize pendingDataSection=_pendingDataSection;
@property(readonly, nonatomic) NSMutableDictionary *fetchResults; // @synthesize fetchResults=_fetchResults;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *tipQueue; // @synthesize tipQueue=_tipQueue;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)tipQueue_fetchCountsDictionary;
- (id)tipQueue_fetchSizesDictionary;
- (void)tipQueue_createPendingDataSection;
- (void)tipQueue_populateInitialFetches;
- (id)createDataSection;
- (id)initWithPhotoLibrary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PUStorageTipCollectionViewDataSection *dataSection; // @dynamic dataSection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

