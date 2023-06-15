//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MGGroupsQueryAgent, NSArray, NSDictionary, NSUUID;

__attribute__((visibility("hidden")))
@interface MGGroupsMediator : NSObject
{
    struct os_unfair_lock_s _lock;
    NSDictionary *_groups;
    _Bool _pendingChanges;
    NSUUID *_identifier;
    MGGroupsQueryAgent *_queryAgent;
    NSArray *_activities;
}

- (void).cxx_destruct;
@property(nonatomic, getter=hasPendingChanges) _Bool pendingChanges; // @synthesize pendingChanges=_pendingChanges;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(readonly, nonatomic) __weak MGGroupsQueryAgent *queryAgent; // @synthesize queryAgent=_queryAgent;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)removeGroupWithIdentifier:(id)arg1;
- (id)group:(id)arg1 removeMember:(id)arg2;
- (id)group:(id)arg1 addMember:(id)arg2;
- (id)group:(id)arg1 renameTo:(id)arg2;
- (void)removeGroup:(id)arg1;
- (void)addGroup:(id)arg1;
- (void)endActivity:(id)arg1;
- (id)startActivityWithName:(id)arg1;
- (id)currentGroups;
- (id)description;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)groupsForUpdate_unsafe;
- (void)removeGroup:(id)arg1 ifExists_unsafe:(_Bool *)arg2;
- (void)upsertGroup_unsafe:(id)arg1;
- (id)groups_unsafe;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithGroupsQueryAgent:(id)arg1;

@end

