//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer, UITableViewCell;

@interface PSTableCellHighlightContext : NSObject
{
    NSTimer *_timer;
    _Bool _animateUnhighlight;
    _Bool _valid;
    UITableViewCell *_cell;
    long long _originalSelectionStyle;
}

+ (id)contextWithCell:(id)arg1;
@property(readonly, nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) long long originalSelectionStyle; // @synthesize originalSelectionStyle=_originalSelectionStyle;
@property(readonly, nonatomic) _Bool animateUnhighlight; // @synthesize animateUnhighlight=_animateUnhighlight;
@property(nonatomic) __weak UITableViewCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (void)_killTimer;
- (void)invalidate;
- (void)_timerFired;
- (void)performHighlightForDuration:(double)arg1 animateUnhighlight:(_Bool)arg2;
- (void)dealloc;

@end

