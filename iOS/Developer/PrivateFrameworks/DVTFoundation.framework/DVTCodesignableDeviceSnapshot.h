//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTCodesignableDevice-Protocol.h>

@class DVTPlatform, NSSet, NSString;

@interface DVTCodesignableDeviceSnapshot : NSObject <DVTCodesignableDevice>
{
    _Bool _supportsProvisioning;
    NSString *_name;
    NSString *_nameForDeveloperPortal;
    NSString *_identifier;
    NSString *_platformIdentifier;
    NSSet *_proxiedDevices;
}

+ (id)snapshotFromCodesignableDevice:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSSet *proxiedDevices; // @synthesize proxiedDevices=_proxiedDevices;
@property(readonly) _Bool supportsProvisioning; // @synthesize supportsProvisioning=_supportsProvisioning;
@property(readonly, copy) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *nameForDeveloperPortal; // @synthesize nameForDeveloperPortal=_nameForDeveloperPortal;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly) DVTPlatform *platform;
- (id)initWithName:(id)arg1 nameForDeveloperPortal:(id)arg2 identifier:(id)arg3 platformIdentifier:(id)arg4 supportsProvisioning:(_Bool)arg5 proxiedDevices:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
