//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/PXCMMInvitation-Protocol.h>
#import <PhotosUICore/PXMediaTypeAggregating-Protocol.h>

@class NSDate, NSString, PHAssetCollection, PHFetchResult, PXAssetCollectionActionManager;
@protocol PXCMMInvitationParticipant, PXDisplayAsset, PXUIImageProvider;

@interface PXCMMSharedAlbumInvitation : NSObject <PXMediaTypeAggregating, PXCMMInvitation, NSCopying>
{
    long long _shareType;
    NSString *_title;
    NSString *_subtitle;
    id <PXCMMInvitationParticipant> _owner;
    id <PXDisplayAsset> _posterAsset;
    id <PXUIImageProvider> _posterMediaProvider;
    PHAssetCollection *_assetCollection;
    PHFetchResult *_previewAssetsFetchResult;
}

+ (id)invitationWithAssetCollection:(id)arg1;
+ (id)_invitationWithAssetCollection:(id)arg1 previewAssetsFetchResult:(id)arg2;
+ (id)_participantsForAssetCollection:(id)arg1;
+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) PHFetchResult *previewAssetsFetchResult; // @synthesize previewAssetsFetchResult=_previewAssetsFetchResult;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) id <PXUIImageProvider> posterMediaProvider; // @synthesize posterMediaProvider=_posterMediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> posterAsset; // @synthesize posterAsset=_posterAsset;
@property(readonly, nonatomic) id <PXCMMInvitationParticipant> owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long shareType; // @synthesize shareType=_shareType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)acceptWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)contextForActivityType:(unsigned long long)arg1;
@property(readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSDate *expiryDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSString *identifier;
- (id)invitationWithUpdatedPreviewAssetsFetchResult:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithAssetCollection:(id)arg1;
- (id)init;
@property(readonly, nonatomic) long long aggregateMediaType; // @dynamic aggregateMediaType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
