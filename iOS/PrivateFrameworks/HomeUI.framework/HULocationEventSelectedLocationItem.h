//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItem.h>

@class HFEventBuilder, HMHome;
@protocol HFLocationEventBuilder;

@interface HULocationEventSelectedLocationItem : HFItem
{
    _Bool _locationCanBeEdited;
    HMHome *_home;
    HFEventBuilder<HFLocationEventBuilder> *_eventBuilder;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool locationCanBeEdited; // @synthesize locationCanBeEdited=_locationCanBeEdited;
@property(retain, nonatomic) HFEventBuilder<HFLocationEventBuilder> *eventBuilder; // @synthesize eventBuilder=_eventBuilder;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (_Bool)_locationIsHome;
- (id)_locationTitle;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithEvent:(id)arg1 inHome:(id)arg2;
- (id)init;

@end
