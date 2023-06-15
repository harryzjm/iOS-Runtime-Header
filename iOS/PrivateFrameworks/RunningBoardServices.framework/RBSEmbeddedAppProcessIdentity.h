//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBSProcessIdentity.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSEmbeddedAppProcessIdentity : RBSProcessIdentity
{
    NSString *_embeddedApplicationIdentifier;
    NSString *_personaString;
}

- (void).cxx_destruct;
- (id)personaString;
- (id)embeddedApplicationIdentifier;
- (_Bool)treatedAsAnAppByFrontBoard:(id *)arg1;
- (_Bool)supportsLaunchingDirectly;
- (_Bool)isAnonymous;
- (_Bool)isApplication;
- (_Bool)isEmbeddedApplication;
- (unsigned char)defaultManageFlags;
- (id)encodeForJob;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)debugDescription;
- (_Bool)_matchesIdentity:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithPersonaString:(id)arg1;
- (id)copyWithAuid:(unsigned int)arg1;

@end

