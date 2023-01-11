//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSEmbeddedAppProcessIdentity
{
    NSString *_embeddedApplicationIdentifier;
}

- (void).cxx_destruct;
- (id)embeddedApplicationIdentifier;
- (_Bool)isAnonymous;
- (_Bool)isApplication;
- (_Bool)isEmbeddedApplication;
- (unsigned char)defaultManageFlags;
- (id)encodeForJob;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)debugDescription;
- (_Bool)_matchesIdentity:(id)arg1;
- (id)copyWithEuid:(unsigned int)arg1;
- (id)_initEmbeddedAppWithBundleID:(id)arg1 euid:(unsigned int)arg2 platform:(int)arg3 jobLabel:(id)arg4;
- (id)_initEmbeddedAppWithBundleID:(id)arg1 euid:(unsigned int)arg2 platform:(int)arg3;

@end
