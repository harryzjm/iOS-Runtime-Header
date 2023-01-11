//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class BSAuditToken, BSMachPortTaskNameRight, NSString;

@interface BSProcessHandle : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding>
{
    _Bool _resolvedBundleID;
    int _pid;
    NSString *_bundleID;
    BSAuditToken *_auditToken;
    NSString *_name;
    BSMachPortTaskNameRight *_taskNameRight;
}

+ (_Bool)supportsSecureCoding;
+ (id)processHandleForAuditToken:(id)arg1 bundleID:(id)arg2;
+ (id)processHandleForTaskNameRight:(id)arg1 bundleID:(id)arg2;
+ (id)processHandleForPID:(int)arg1 bundleID:(id)arg2;
+ (id)processHandleForTaskNameRight:(id)arg1;
+ (id)processHandleForPID:(int)arg1;
+ (id)processHandleForNSXPCConnection:(id)arg1;
+ (id)processHandleForXPCConnection:(id)arg1;
+ (id)processHandleForAuditToken:(id)arg1;
+ (id)processHandle;
- (void).cxx_destruct;
@property(readonly, nonatomic) BSMachPortTaskNameRight *taskNameRight; // @synthesize taskNameRight=_taskNameRight;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) BSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *jobLabel;
@property(readonly, copy, nonatomic) NSString *bundlePath;
- (id)valueForEntitlement:(id)arg1;
- (_Bool)hasEntitlement:(id)arg1;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleID;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
