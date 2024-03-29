//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol HMDSiriAccessoryMonitorDelegate;

__attribute__((visibility("hidden")))
@interface HMDSiriAccessoryMonitor : NSObject
{
    id <HMDSiriAccessoryMonitorDelegate> _delegate;
    NSMapTable *_accessories;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *accessories; // @synthesize accessories=_accessories;
@property(readonly, nonatomic) __weak id <HMDSiriAccessoryMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)accessory:(id)arg1 setSupportsDragonSiri:(_Bool)arg2;
- (void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2;
- (void)_removeAccessory:(id)arg1;
- (void)_addAccessory:(id)arg1 withTarget:(id)arg2;
- (id)_accessoriesTargetingAccessory:(id)arg1;
- (_Bool)hasAnyActiveTargetingAccessories;
- (id)_getInfoForAccessory:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

