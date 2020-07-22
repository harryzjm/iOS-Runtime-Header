//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeKitItemProtocol-Protocol.h>

@class HMHome, HMRoom, NSString;
@protocol HFHomeKitObject;

@interface HFRoomItem <HFHomeKitItemProtocol>
{
    HMRoom *_room;
    HMHome *_home;
}

@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) HMRoom *room; // @synthesize room=_room;
- (void).cxx_destruct;
- (id)togglePowerState;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)init;
- (id)initWithHome:(id)arg1 room:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

