//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHClientSenderPropertySet-Protocol.h>

@class NSManagedObjectID, NSString, PLAssetsdClientServiceSender, PLClientServerTransaction;

@interface PHAssetCreationRequestPlaceholderSupport <PHClientSenderPropertySet>
{
    PLClientServerTransaction *_serverTransaction;
    long long _placeholderCreationMode;
    PLAssetsdClientServiceSender *clientSender;
}

+ (_Bool)_shouldBakeInAdjustmentsAndFlattenLivePhoto:(_Bool *)arg1 forSourceAsset:(id)arg2;
@property(retain, nonatomic) PLAssetsdClientServiceSender *clientSender; // @synthesize clientSender;
- (void).cxx_destruct;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (id)_fetchOptionsForDuplicateAssetPhotoLibraryType;
- (void)_updateManagedAssetAfterResourceDownload:(id)arg1;
- (id)_createPlaceholderManagedAssetFromSourceManagedAsset:(id)arg1 inPhotoLibrary:(id)arg2 error:(id *)arg3;
- (void)changeFailedOnDaemonWithError:(id)arg1;
- (void)changeFailedOnClientWithError:(id)arg1;
- (void)_setDestinationAssetAvailabilityHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, nonatomic) int clientProcessID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *managedEntityName;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uuid;

@end

