//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItem.h>

@class HMHome;

@interface HUChimeOnHomePodListItem : HFItem
{
    _Bool _accessoryIsCameraWithDoorbell;
    HMHome *_home;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool accessoryIsCameraWithDoorbell; // @synthesize accessoryIsCameraWithDoorbell=_accessoryIsCameraWithDoorbell;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithAccessory:(id)arg1;
- (id)initWithHome:(id)arg1;
- (id)init;

@end
