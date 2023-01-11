//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFTransformItem.h>

#import <HomeUI/HFHomeKitItemProtocol-Protocol.h>
#import <HomeUI/HFRoomContextProviding-Protocol.h>

@class HMRoom, NSSet, NSString;
@protocol HFHomeKitObject;

@interface HUNaturalLightingItem : HFTransformItem <HFHomeKitItemProtocol, HFRoomContextProviding>
{
    _Bool _selected;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (id)accessory;
@property(readonly, nonatomic) NSSet *lightProfiles;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;
- (id)initWithSourceItem:(id)arg1 defaultSelected:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
