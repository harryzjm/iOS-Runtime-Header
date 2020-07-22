//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface NEAOVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    _Bool _enabled;
    _Bool _toggleEnabled;
    _Bool _allowCaptiveWebSheet;
    _Bool _allowAllCaptiveNetworkPlugins;
    NSDictionary *_interfaceProtocolMapping;
    NSString *_activeInterfaceProtocolKey;
    NSDictionary *_serviceExceptions;
    NSDictionary *_allowedCaptiveNetworkPlugins;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSDictionary *allowedCaptiveNetworkPlugins; // @synthesize allowedCaptiveNetworkPlugins=_allowedCaptiveNetworkPlugins;
@property(copy) NSDictionary *serviceExceptions; // @synthesize serviceExceptions=_serviceExceptions;
@property(copy) NSString *activeInterfaceProtocolKey; // @synthesize activeInterfaceProtocolKey=_activeInterfaceProtocolKey;
@property(copy) NSDictionary *interfaceProtocolMapping; // @synthesize interfaceProtocolMapping=_interfaceProtocolMapping;
@property(getter=isAllowAllCaptiveNetworkPlugins) _Bool allowAllCaptiveNetworkPlugins; // @synthesize allowAllCaptiveNetworkPlugins=_allowAllCaptiveNetworkPlugins;
@property(getter=isAllowCaptiveWebSheet) _Bool allowCaptiveWebSheet; // @synthesize allowCaptiveWebSheet=_allowCaptiveWebSheet;
@property(getter=isToggleEnabled) _Bool toggleEnabled; // @synthesize toggleEnabled=_toggleEnabled;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
