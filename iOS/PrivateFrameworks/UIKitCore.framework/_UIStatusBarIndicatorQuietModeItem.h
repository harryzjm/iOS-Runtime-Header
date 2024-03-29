//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarIndicatorQuietModeItem
{
    NSString *_focusName;
    _UIStatusBarImageView *_emphasizedImageView;
}

+ (id)emphasizedQuietModeIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) _UIStatusBarImageView *emphasizedImageView; // @synthesize emphasizedImageView=_emphasizedImageView;
@property(retain, nonatomic) NSString *focusName; // @synthesize focusName=_focusName;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)systemImageNameForUpdate:(id)arg1;
- (id)indicatorEntryKey;
- (_Bool)shouldUpdateIndicatorForIdentifier:(id)arg1;
- (id)imageViewForIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_emphasizedImageView;

@end

