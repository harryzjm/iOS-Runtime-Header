//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSAppProcessIdentity
{
    NSString *_embeddedApplicationIdentifier;
    NSString *_applicationJobLabel;
}

- (void).cxx_destruct;
- (id)applicationJobLabel;
- (id)embeddedApplicationIdentifier;
- (id)encodeForJob;
- (unsigned char)defaultManageFlags;
- (_Bool)isAnonymous;
- (_Bool)isApplication;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)debugDescription;
- (_Bool)_matchesIdentity:(id)arg1;
- (id)copyWithEuid:(unsigned int)arg1;
- (id)_initAppWithLabel:(id)arg1 bundleID:(id)arg2 euid:(unsigned int)arg3 platform:(int)arg4;

@end
