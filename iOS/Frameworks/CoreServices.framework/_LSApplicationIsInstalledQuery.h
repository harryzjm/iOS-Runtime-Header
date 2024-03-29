//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSQuery.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationIsInstalledQuery : _LSQuery
{
    NSString *_bundleIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)queryWithBundleIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_requiresDatabaseMappingEntitlement;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

