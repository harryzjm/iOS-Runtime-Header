//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBluetoothItem
{
    _UIStatusBarImageView *_batteryImageView;
}

+ (id)batteryDisplayIdentifier;
@property(retain, nonatomic) _UIStatusBarImageView *batteryImageView; // @synthesize batteryImageView=_batteryImageView;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)arg1;
- (id)_batteryFillColorForEntry:(id)arg1 usingTintColor:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)imageNameForUpdate:(id)arg1;
- (id)indicatorEntryKey;

@end
