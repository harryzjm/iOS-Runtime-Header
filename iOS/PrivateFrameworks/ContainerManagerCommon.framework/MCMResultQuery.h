//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMClientIdentity, NSArray;

__attribute__((visibility("hidden")))
@interface MCMResultQuery
{
    _Bool _includePath;
    _Bool _includeInfo;
    _Bool _issueSandboxExtensions;
    _Bool _legacyPersonaPolicy;
    _Bool _legacyExtensionPolicy;
    _Bool _includeUserManagedAssetsRelPath;
    NSArray *_containers;
    MCMClientIdentity *_clientIdentity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool includeUserManagedAssetsRelPath; // @synthesize includeUserManagedAssetsRelPath=_includeUserManagedAssetsRelPath;
@property(readonly, nonatomic) _Bool legacyExtensionPolicy; // @synthesize legacyExtensionPolicy=_legacyExtensionPolicy;
@property(readonly, nonatomic) _Bool legacyPersonaPolicy; // @synthesize legacyPersonaPolicy=_legacyPersonaPolicy;
@property(readonly, nonatomic) MCMClientIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property(readonly, nonatomic) _Bool issueSandboxExtensions; // @synthesize issueSandboxExtensions=_issueSandboxExtensions;
@property(readonly, nonatomic) _Bool includeInfo; // @synthesize includeInfo=_includeInfo;
@property(readonly, nonatomic) _Bool includePath; // @synthesize includePath=_includePath;
@property(readonly, nonatomic) NSArray *containers; // @synthesize containers=_containers;
- (id)initWithContainers:(id)arg1 clientIdentity:(id)arg2 issueSandboxExtensions:(_Bool)arg3 includePath:(_Bool)arg4 includeInfo:(_Bool)arg5 legacyPersonaPolicy:(_Bool)arg6 legacyExtensionPolicy:(_Bool)arg7 includeUserManagedAssetsRelPath:(_Bool)arg8;
- (_Bool)encodeResultOntoReply:(id)arg1;
- (void)_compileContainerDataForIndex:(unsigned long long)arg1 container:(struct container_object_s **)arg2 infos:(id)arg3 tokens:(id)arg4;

@end

