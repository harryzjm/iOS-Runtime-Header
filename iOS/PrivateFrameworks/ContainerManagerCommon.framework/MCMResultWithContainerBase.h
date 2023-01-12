//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMError, MCMPOSIXUser, NSArray, NSDictionary, NSString, NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface MCMResultWithContainerBase
{
    _Bool _existed;
    _Bool _transient;
    NSUUID *_uuid;
    NSString *_containerPathIdentifier;
    NSString *_identifier;
    unsigned long long _containerClass;
    MCMPOSIXUser *_posixUser;
    NSString *_personaUniqueString;
    char *_sandboxToken;
    NSURL *_url;
    NSDictionary *_info;
    NSArray *_resolvedLinks;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool transient; // @synthesize transient=_transient;
@property(readonly, nonatomic) NSArray *resolvedLinks; // @synthesize resolvedLinks=_resolvedLinks;
@property(readonly, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) _Bool existed; // @synthesize existed=_existed;
@property(readonly, nonatomic) char *sandboxToken; // @synthesize sandboxToken=_sandboxToken;
@property(readonly, nonatomic) NSString *personaUniqueString; // @synthesize personaUniqueString=_personaUniqueString;
@property(readonly, nonatomic) MCMPOSIXUser *posixUser; // @synthesize posixUser=_posixUser;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *containerPathIdentifier; // @synthesize containerPathIdentifier=_containerPathIdentifier;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)dealloc;
- (id)initWithMetadata:(id)arg1 sandboxToken:(const char *)arg2 includePath:(_Bool)arg3 includeInfo:(_Bool)arg4 resolvedLinks:(id)arg5;
- (id)initWithContainerPath:(id)arg1 containerIdentity:(id)arg2 uuid:(id)arg3 sandboxToken:(const char *)arg4 includePath:(_Bool)arg5;
- (id)initWithUUID:(id)arg1 containerPathIdentifier:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 POSIXUser:(id)arg5 personaUniqueString:(id)arg6 sandboxToken:(const char *)arg7 existed:(_Bool)arg8 url:(id)arg9 info:(id)arg10 resolvedLinks:(id)arg11 transient:(_Bool)arg12;
- (_Bool)encodeResultOntoReply:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) MCMError *error; // @dynamic error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

