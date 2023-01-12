//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSUUID, UIImage;

__attribute__((visibility("hidden")))
@interface TabSnapshotCacheEntry : NSObject
{
    _Bool _group;
    _Bool _updatingState;
    _Bool _stateUpdateCancelled;
    NSUUID *_identifier;
    NSMutableSet *_groupMembers;
    UIImage *_snapshot;
    long long _state;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool stateUpdateCancelled; // @synthesize stateUpdateCancelled=_stateUpdateCancelled;
@property(nonatomic, getter=isUpdatingState) _Bool updatingState; // @synthesize updatingState=_updatingState;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIImage *snapshot; // @synthesize snapshot=_snapshot;
@property(readonly, nonatomic) NSMutableSet *groupMembers; // @synthesize groupMembers=_groupMembers;
@property(readonly, nonatomic, getter=isGroup) _Bool group; // @synthesize group=_group;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)debugDescription;
- (id)initWithIdentifier:(id)arg1 isGroup:(_Bool)arg2;

@end
