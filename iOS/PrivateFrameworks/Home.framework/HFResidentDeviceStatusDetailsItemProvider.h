//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHome, NSMutableSet;

@interface HFResidentDeviceStatusDetailsItemProvider
{
    HMHome *_home;
    NSMutableSet *_residentDeviceItems;
}

@property(retain, nonatomic) NSMutableSet *residentDeviceItems; // @synthesize residentDeviceItems=_residentDeviceItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)invalidationReasons;
- (id)reloadItems;
- (id)items;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1;
- (id)init;

@end

