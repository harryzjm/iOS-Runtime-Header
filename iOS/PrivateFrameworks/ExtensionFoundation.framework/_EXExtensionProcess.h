//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExtensionFoundation/NSSecureCoding-Protocol.h>

@class BKSProcessAssertion, NSArray, NSHashTable, NSXPCListenerEndpoint, RBSProcessIdentity, _EXExtensionProcessMannger, _EXExtensionRep, _EXInternalHostConnection;

@interface _EXExtensionProcess : NSObject <NSSecureCoding>
{
    struct os_unfair_lock_s _xpcConnectionLock;
    struct os_unfair_lock_s _observersLock;
    NSArray *_sandboxExtensions;
    NSHashTable *_xpcConnections;
    _EXExtensionProcessMannger *_manager;
    NSHashTable *_observers;
    _EXInternalHostConnection *_internalConnection;
    _EXExtensionRep *_extension;
    NSXPCListenerEndpoint *_serviceListenerEndpoint;
    BKSProcessAssertion *_assertion;
    RBSProcessIdentity *_processIdentity;
    CDStruct_4c969caf _auditToken;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) RBSProcessIdentity *processIdentity; // @synthesize processIdentity=_processIdentity;
@property(readonly) BKSProcessAssertion *assertion; // @synthesize assertion=_assertion;
@property(readonly) NSXPCListenerEndpoint *serviceListenerEndpoint; // @synthesize serviceListenerEndpoint=_serviceListenerEndpoint;
@property(readonly) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(readonly) _EXExtensionRep *extension; // @synthesize extension=_extension;
@property __weak _EXInternalHostConnection *internalConnection; // @synthesize internalConnection=_internalConnection;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property struct os_unfair_lock_s observersLock; // @synthesize observersLock=_observersLock;
@property __weak _EXExtensionProcessMannger *manager; // @synthesize manager=_manager;
@property(retain) NSHashTable *xpcConnections; // @synthesize xpcConnections=_xpcConnections;
@property struct os_unfair_lock_s xpcConnectionLock; // @synthesize xpcConnectionLock=_xpcConnectionLock;
@property(retain) NSArray *sandboxExtensions; // @synthesize sandboxExtensions=_sandboxExtensions;
- (id)makeXPCConnectionWithError:(id *)arg1;
- (id)configuration;
@property(readonly, getter=isValid) _Bool valid; // @dynamic valid;
- (void)invalidate;
- (void)_handleAssertionInvalidation;
- (id)makeXPCConnection;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)aquireAsertionWithError:(id *)arg1;
@property(readonly) int pid;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithExtension:(id)arg1 auditToken:(CDStruct_4c969caf)arg2 processIdentity:(id)arg3 sandboxExtensions:(id)arg4;
- (id)initWithExtension:(id)arg1 auditToken:(CDStruct_4c969caf)arg2;

@end
