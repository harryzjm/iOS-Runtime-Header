//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSDictionary, PHFetchResult;

@interface PXCMMMomentsInvitationsDataSourceState : NSObject <NSCopying>
{
    PHFetchResult *_assetCollections;
    NSDictionary *_invitationsByAssetCollectionObjectID;
}

@property(readonly, nonatomic) NSDictionary *invitationsByAssetCollectionObjectID; // @synthesize invitationsByAssetCollectionObjectID=_invitationsByAssetCollectionObjectID;
@property(readonly, nonatomic) PHFetchResult *assetCollections; // @synthesize assetCollections=_assetCollections;
- (void).cxx_destruct;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAssetCollections:(id)arg1 invitationsByAssetCollectionObjectID:(id)arg2;

@end

