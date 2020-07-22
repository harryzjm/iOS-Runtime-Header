//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationLegacySupport-Protocol.h>
#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface NEIPv4Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    _Bool _overridePrimary;
    NSArray *_addresses;
    NSArray *_subnetMasks;
    NSArray *_includedRoutes;
    NSArray *_excludedRoutes;
    long long _configMethod;
    NSString *_router;
}

+ (_Bool)supportsSecureCoding;
@property _Bool overridePrimary; // @synthesize overridePrimary=_overridePrimary;
@property(copy) NSString *router; // @synthesize router=_router;
@property long long configMethod; // @synthesize configMethod=_configMethod;
@property(copy) NSArray *excludedRoutes; // @synthesize excludedRoutes=_excludedRoutes;
@property(copy) NSArray *includedRoutes; // @synthesize includedRoutes=_includedRoutes;
@property(readonly) NSArray *subnetMasks; // @synthesize subnetMasks=_subnetMasks;
@property(readonly) NSArray *addresses; // @synthesize addresses=_addresses;
- (void).cxx_destruct;
- (_Bool)hasDefaultRoute;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAddresses:(id)arg1 subnetMasks:(id)arg2;
- (id)init;

@end

