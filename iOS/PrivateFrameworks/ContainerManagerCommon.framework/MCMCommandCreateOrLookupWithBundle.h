//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMCodeSignInfo, MCMContainerIdentity, MCMError, MCMUserIdentity, NSURL;

__attribute__((visibility("hidden")))
@interface MCMCommandCreateOrLookupWithBundle
{
    _Bool _createIfNecessary;
    _Bool _transient;
    _Bool _issueSandboxExtension;
    const char *_sandboxToken;
    NSURL *_bundleURL;
    NSURL *_executableURL;
    unsigned long long _containerClass;
    MCMCodeSignInfo *_info;
    MCMUserIdentity *_userIdentity;
    MCMContainerIdentity *_containerIdentity;
    MCMError *_error;
}

+ (Class)incomingMessageClass;
+ (unsigned long long)command;
- (void).cxx_destruct;
@property(readonly, nonatomic) MCMError *error; // @synthesize error=_error;
@property(readonly, nonatomic) MCMContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) MCMCodeSignInfo *info; // @synthesize info=_info;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
@property(readonly, nonatomic) NSURL *executableURL; // @synthesize executableURL=_executableURL;
@property(readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(readonly, nonatomic) const char *sandboxToken; // @synthesize sandboxToken=_sandboxToken;
@property(readonly, nonatomic) _Bool issueSandboxExtension; // @synthesize issueSandboxExtension=_issueSandboxExtension;
@property(readonly, nonatomic) _Bool transient; // @synthesize transient=_transient;
@property(readonly, nonatomic) _Bool createIfNecessary; // @synthesize createIfNecessary=_createIfNecessary;
- (void)execute;
- (_Bool)preflightClientAllowed;
- (void)dealloc;
- (void)_commonInit:(id)arg1;
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;

@end

