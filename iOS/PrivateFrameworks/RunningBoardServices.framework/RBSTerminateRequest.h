//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>
#import <RunningBoardServices/NSCopying-Protocol.h>

@class NSString, RBSProcessIdentity, RBSTerminateContext;

@interface RBSTerminateRequest <BSXPCSecureCoding, NSCopying>
{
    _Bool _targetsAllManagedProcesses;
    int _pid;
    RBSProcessIdentity *_processIdentity;
    RBSTerminateContext *_context;
}

+ (_Bool)supportsBSXPCSecureCoding;
@property(readonly, nonatomic) RBSTerminateContext *context; // @synthesize context=_context;
@property(copy, nonatomic) RBSProcessIdentity *processIdentity; // @synthesize processIdentity=_processIdentity;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) _Bool targetsAllManagedProcesses; // @synthesize targetsAllManagedProcesses=_targetsAllManagedProcesses;
- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)execute:(out id *)arg1 error:(out id *)arg2;
- (_Bool)execute:(out id *)arg1;
- (id)initForAllManagedWithReason:(id)arg1;
- (id)initWithProcessIdentifier:(id)arg1 context:(id)arg2;
- (id)initWithProcessIdentity:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
