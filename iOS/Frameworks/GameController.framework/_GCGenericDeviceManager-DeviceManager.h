//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameControllerFoundation/_GCGenericDeviceManager.h>

@class NSString;
@protocol NSObject><NSCopying><NSSecureCoding, _GCLogicalDeviceRegistry;

@interface _GCGenericDeviceManager (DeviceManager)
- (id)makeDeviceWithConfiguration:(id)arg1 dependencies:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property __weak id <_GCLogicalDeviceRegistry> deviceRegistry;
@property(readonly) unsigned long long hash;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier;
@property(readonly) Class superclass;
@end

