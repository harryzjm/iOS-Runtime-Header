//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHome, NSMutableSet;
@protocol HFCharacteristicValueSource;

@interface HFMediaAccessoryItemProvider
{
    _Bool _includeMediaSystems;
    CDUnknownBlockType _filter;
    HMHome *_home;
    NSMutableSet *_mediaAccessoryItems;
    id <HFCharacteristicValueSource> _overrideValueSource;
}

@property(retain, nonatomic) id <HFCharacteristicValueSource> overrideValueSource; // @synthesize overrideValueSource=_overrideValueSource;
@property(retain, nonatomic) NSMutableSet *mediaAccessoryItems; // @synthesize mediaAccessoryItems=_mediaAccessoryItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) _Bool includeMediaSystems; // @synthesize includeMediaSystems=_includeMediaSystems;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
@property(retain, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1 includeMediaSystems:(_Bool)arg2;
- (id)initWithHome:(id)arg1;
- (id)init;

@end

