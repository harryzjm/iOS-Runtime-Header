//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMHome;
@protocol HFCharacteristicValueSource, HUQuickControlItemUpdating;

@interface HUQuickControlViewControllerConfiguration : NSObject
{
    _Bool _copyItems;
    HMHome *_home;
    id <HFCharacteristicValueSource> _valueSource;
    id <HUQuickControlItemUpdating> _itemUpdater;
}

@property(nonatomic) _Bool copyItems; // @synthesize copyItems=_copyItems;
@property(retain, nonatomic) id <HUQuickControlItemUpdating> itemUpdater; // @synthesize itemUpdater=_itemUpdater;
@property(retain, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)initWithHome:(id)arg1;

@end

