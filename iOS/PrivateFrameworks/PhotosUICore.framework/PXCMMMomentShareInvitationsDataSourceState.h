//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSDictionary, PHFetchResult;

@interface PXCMMMomentShareInvitationsDataSourceState : NSObject <NSCopying>
{
    PHFetchResult *_momentShares;
    NSDictionary *_invitationsByMomentShareObjectID;
}

+ (id)new;
@property(readonly, nonatomic) NSDictionary *invitationsByMomentShareObjectID; // @synthesize invitationsByMomentShareObjectID=_invitationsByMomentShareObjectID;
@property(readonly, nonatomic) PHFetchResult *momentShares; // @synthesize momentShares=_momentShares;
- (void).cxx_destruct;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithMomentShares:(id)arg1 invitationsByMomentShareObjectID:(id)arg2;

@end
