//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMUserIdentity, NSSet;

__attribute__((visibility("hidden")))
@interface MCMCommandReferencesAdd
{
    _Bool _createDuringReconciliation;
    _Bool _deleteDuringReconciliation;
    _Bool _yesReallyApplyToAll;
    unsigned int _uid;
    unsigned long long _containerClass;
    NSSet *_ownerIdentifiers;
    NSSet *_groupIdentifiers;
    unsigned long long _explicitFlags;
    unsigned long long _privateFlags;
    MCMUserIdentity *_userIdentity;
}

+ (Class)incomingMessageClass;
+ (unsigned long long)command;
- (void).cxx_destruct;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) _Bool yesReallyApplyToAll; // @synthesize yesReallyApplyToAll=_yesReallyApplyToAll;
@property(readonly, nonatomic) _Bool deleteDuringReconciliation; // @synthesize deleteDuringReconciliation=_deleteDuringReconciliation;
@property(readonly, nonatomic) _Bool createDuringReconciliation; // @synthesize createDuringReconciliation=_createDuringReconciliation;
@property(readonly, nonatomic) unsigned long long privateFlags; // @synthesize privateFlags=_privateFlags;
@property(readonly, nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) unsigned long long explicitFlags; // @synthesize explicitFlags=_explicitFlags;
@property(readonly, nonatomic) NSSet *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(readonly, nonatomic) NSSet *ownerIdentifiers; // @synthesize ownerIdentifiers=_ownerIdentifiers;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
- (id)_resolveUserIdentity;
- (void)execute;
- (_Bool)preflightClientAllowed;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;

@end

