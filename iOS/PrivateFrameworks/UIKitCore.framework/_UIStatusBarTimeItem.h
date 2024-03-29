//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarItem.h"

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarTimeItem : _UIStatusBarItem
{
    _UIStatusBarStringView *_timeView;
    _UIStatusBarStringView *_shortTimeView;
    _UIStatusBarStringView *_pillTimeView;
    _UIStatusBarStringView *_dateView;
}

+ (id)dateDisplayIdentifier;
+ (id)pillTimeDisplayIdentifier;
+ (id)shortTimeDisplayIdentifier;
+ (id)timeDisplayIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) _UIStatusBarStringView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) _UIStatusBarStringView *pillTimeView; // @synthesize pillTimeView=_pillTimeView;
@property(retain, nonatomic) _UIStatusBarStringView *shortTimeView; // @synthesize shortTimeView=_shortTimeView;
@property(retain, nonatomic) _UIStatusBarStringView *timeView; // @synthesize timeView=_timeView;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_dateView;
- (void)_create_pillTimeView;
- (void)_create_shortTimeView;
- (void)_create_timeView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dependentEntryKeys;

@end

