//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _UIStatusBarCellularSignalView, _UIStatusBarImageView, _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularItem
{
    _UIStatusBarStringView *_serviceNameView;
    _UIStatusBarCellularSignalView *_signalView;
    _UIStatusBarStringView *_networkTypeView;
    _UIStatusBarImageView *_sosView;
    _UIStatusBarImageView *_warningView;
    _UIStatusBarImageView *_callForwardingView;
}

+ (id)callForwardingDisplayIdentifier;
+ (id)sosDisplayIdentifier;
+ (id)typeDisplayIdentifier;
+ (id)nameDisplayIdentifier;
+ (id)warningDisplayIdentifier;
+ (id)signalStrengthDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2;
@property(retain, nonatomic) _UIStatusBarImageView *callForwardingView; // @synthesize callForwardingView=_callForwardingView;
@property(retain, nonatomic) _UIStatusBarImageView *warningView; // @synthesize warningView=_warningView;
@property(retain, nonatomic) _UIStatusBarImageView *sosView; // @synthesize sosView=_sosView;
@property(retain, nonatomic) _UIStatusBarStringView *networkTypeView; // @synthesize networkTypeView=_networkTypeView;
@property(retain, nonatomic) _UIStatusBarCellularSignalView *signalView; // @synthesize signalView=_signalView;
@property(retain, nonatomic) _UIStatusBarStringView *serviceNameView; // @synthesize serviceNameView=_serviceNameView;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)arg1;
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;
- (id)_stringForCellularType:(long long)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)entryForDisplayItemWithIdentifier:(id)arg1;
- (_Bool)_updateSignalView:(id)arg1 withUpdate:(id)arg2 entry:(id)arg3;
- (id)_backgroundColorForUpdate:(id)arg1;
- (id)_fillColorForUpdate:(id)arg1;
- (id)dependentEntryKeys;
@property(readonly, nonatomic) NSString *cellularDataEntryKey;

@end
