//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHome, NSMutableSet;

@interface HFRoomItemProvider
{
    CDUnknownBlockType _filter;
    HMHome *_home;
    NSMutableSet *_roomItems;
}

@property(retain, nonatomic) NSMutableSet *roomItems; // @synthesize roomItems=_roomItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1;

@end

