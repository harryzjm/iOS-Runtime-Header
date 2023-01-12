//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSProgress, NSString, NSURL, PXSharedLibraryRule;
@protocol NSFastEnumeration, PXFastEnumeration, PXPresentationEnvironment, PXSharedLibraryParticipant, PXSharedLibrarySourceLibraryInfo;

@protocol PXSharedLibrary <NSObject, NSCopying>
@property(readonly, nonatomic) _Bool isInLocalMode;
@property(readonly, copy, nonatomic) NSURL *shareURL;
@property(readonly, nonatomic) _Bool isOwned;
@property(readonly, nonatomic) _Bool isDeclined;
@property(readonly, nonatomic) _Bool isExiting;
@property(readonly, nonatomic) _Bool isPublished;
@property(readonly, nonatomic) _Bool isInPreview;
@property(readonly, nonatomic) unsigned long long cloudItemCount;
@property(readonly, nonatomic) unsigned long long cloudVideoCount;
@property(readonly, nonatomic) unsigned long long cloudPhotoCount;
@property(readonly, copy, nonatomic) PXSharedLibraryRule *rule;
@property(readonly, copy, nonatomic) NSArray *participants;
@property(readonly, copy, nonatomic) id <PXSharedLibraryParticipant> owner;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)removePersonUUIDsFromPersonCondition:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)addPersonUUIDsToPersonCondition:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)addAssetSharingSuggestions:(id <NSFastEnumeration>)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)removeAssetSharingSuggestions:(id <NSFastEnumeration>)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (_Bool)canRemoveAssetSharingSuggestions:(id <NSFastEnumeration>)arg1;
- (void)moveAssetsToPersonalLibrary:(id <PXFastEnumeration>)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (_Bool)canMoveAssetsToPersonalLibrary:(id <NSFastEnumeration>)arg1;
- (void)moveAssetsWithLocalIdentifiersToSharedLibrary:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)moveAssetsToSharedLibrary:(id <PXFastEnumeration>)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (_Bool)canMoveAssetsToSharedLibrary:(id <NSFastEnumeration>)arg1;
- (void)deleteParticipants:(NSArray *)arg1 presentationEnvironment:(id <PXPresentationEnvironment>)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (_Bool)canDeleteParticipants:(NSArray *)arg1;
- (void)addParticipantsWithEmailAddresses:(NSArray *)arg1 phoneNumbers:(NSArray *)arg2 presentationEnvironment:(id <PXPresentationEnvironment>)arg3 withCompletion:(void (^)(_Bool, NSError *))arg4;
- (_Bool)canAddParticipantsWithEmailAddresses:(NSArray *)arg1 phoneNumbers:(NSArray *)arg2;
- (_Bool)canEditParticipants;
- (void)exitWithRetentionPolicy:(long long)arg1 presentationEnvironment:(id <PXPresentationEnvironment>)arg2 progress:(NSProgress *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)exitPreviewWithPresentationEnvironment:(id <PXPresentationEnvironment>)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)publishPreviewWithPresentationEnvironment:(id <PXPresentationEnvironment>)arg1 progress:(NSProgress *)arg2 completion:(void (^)(id <PXSharedLibrary>, NSError *))arg3;
- (void)restoreDeclinedInvitationWithCompletion:(void (^)(id <PXSharedLibrary>, NSError *))arg1;
- (void)declineInvitationWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)acceptInvitationWithRule:(PXSharedLibraryRule *)arg1 progress:(NSProgress *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)previewInvitationWithRule:(PXSharedLibraryRule *)arg1 progress:(NSProgress *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (CDStruct_14f26992)fetchItemCounts;
- (id <PXSharedLibrarySourceLibraryInfo>)sourceLibraryInfo;
@end

