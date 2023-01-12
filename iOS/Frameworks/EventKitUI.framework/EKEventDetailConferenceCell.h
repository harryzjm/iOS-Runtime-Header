//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventDetailCell.h"

@class NSArray, NSObject, UIButton, UIListContentView, UIView;
@protocol ConferenceCellDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDetailConferenceCell : EKEventDetailCell
{
    UIButton *_openURLButton;
    UIButton *_shareButton;
    unsigned long long _actionButtonType;
    UIListContentView *_listView;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    NSArray *_constraints;
    NSObject<ConferenceCellDelegate> *_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<ConferenceCellDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)_share:(id)arg1;
- (void)_openURL;
- (void)tintColorDidChange;
- (void)_updateActionButtonWithType:(unsigned long long)arg1;
- (id)_buttonConfigForCurrentTime;
- (void)updateListConfigWithImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (_Bool)update;
- (void)_createConstraints;
- (void)_createViews;
- (id)_defaultListConfiguration;
- (double)_separatorHeight;
- (_Bool)_buttonsShouldUseSeparateLine;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2;

@end

