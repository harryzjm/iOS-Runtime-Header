//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/HFItemDeletionProtocol-Protocol.h>
#import <Home/NAIdentifiable-Protocol.h>

@class HMHome, HMZone, NSString;
@protocol HFHomeKitObject;

@interface HFZoneItem <NAIdentifiable, HFHomeKitItemProtocol, HFItemDeletionProtocol>
{
    HMZone *_zone;
    HMHome *_home;
}

+ (id)na_identity;
- (void).cxx_destruct;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMZone *zone; // @synthesize zone=_zone;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)hf_deleteItem;
- (_Bool)hf_canDeleteItem;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithHome:(id)arg1 zone:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
