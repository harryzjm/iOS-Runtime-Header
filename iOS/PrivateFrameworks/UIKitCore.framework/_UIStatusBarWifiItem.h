//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarImageView, _UIStatusBarWifiSignalView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarWifiItem
{
    _UIStatusBarWifiSignalView *_signalView;
    _UIStatusBarImageView *_networkIconView;
}

+ (id)iconDisplayIdentifier;
+ (id)signalStrengthDisplayIdentifier;
+ (id)groupWithPriority:(long long)arg1;
@property(retain, nonatomic) _UIStatusBarImageView *networkIconView; // @synthesize networkIconView=_networkIconView;
@property(retain, nonatomic) _UIStatusBarWifiSignalView *signalView; // @synthesize signalView=_signalView;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)_backgroundColorForUpdate:(id)arg1;
- (id)_fillColorForUpdate:(id)arg1;
- (double)_totalWidthForUpdate:(id)arg1;
- (double)_interspaceForUpdate:(id)arg1;
- (double)_barThicknessForUpdate:(id)arg1;
- (long long)_barCountForUpdate:(id)arg1;
- (id)dependentEntryKeys;

@end
