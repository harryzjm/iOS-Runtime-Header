//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarBackgroundActivityView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBackgroundActivityItem
{
    _UIStatusBarBackgroundActivityView *_backgroundView;
    _UIStatusBarBackgroundActivityView *_combinedView;
}

+ (_Bool)shouldKeepIconVisibleForActivityType:(long long)arg1;
+ (id)combinedDisplayIdentifier;
+ (id)backgroundDisplayIdentifier;
@property(retain, nonatomic) _UIStatusBarBackgroundActivityView *combinedView; // @synthesize combinedView=_combinedView;
@property(retain, nonatomic) _UIStatusBarBackgroundActivityView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (_Bool)shouldUpdateIndicatorForIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (id)_backgroundColorForActivityType:(long long)arg1;
- (id)_imageNameForActivityType:(long long)arg1;
- (id)imageNameForUpdate:(id)arg1;
- (id)imageForUpdate:(id)arg1;
- (struct CGSize)_pillSizeAndBaselineOffset:(double *)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)indicatorEntryKey;

@end
