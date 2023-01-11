//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class EKCalendarChooser, EKGroupInfo, EKGroupInfoButton, NSArray, UIActivityIndicatorView, UILabel;

@interface EKCalendarChooserHeaderView : UITableViewHeaderFooterView
{
    UIActivityIndicatorView *_spinner;
    NSArray *_primaryLabelWithShowAllButtonLargeConstraints;
    NSArray *_primaryLabelWithoutShowAllButtonLargeConstraints;
    NSArray *_commonLargeConstraints;
    NSArray *_primaryLabelWithShowAllButtonNormalConstraints;
    NSArray *_primaryLabelWithoutShowAllButtonNormalConstraints;
    NSArray *_commonNormalConstraints;
    NSArray *_commonConstraints;
    _Bool _stacked;
    UILabel *_primaryLabel;
    EKGroupInfoButton *_showAllButton;
    EKCalendarChooser *_chooser;
    EKGroupInfo *_group;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EKGroupInfo *group; // @synthesize group=_group;
@property(nonatomic) __weak EKCalendarChooser *chooser; // @synthesize chooser=_chooser;
@property(retain, nonatomic) EKGroupInfoButton *showAllButton; // @synthesize showAllButton=_showAllButton;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
- (void)_groupShowAllButtonTapped:(id)arg1;
@property(nonatomic) _Bool showAllButtonHidden;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)_eventStoreChanged;
- (void)updateSpinner;
- (void)layoutMarginsDidChange;
- (void)tintColorDidChange;
- (void)_activateConstraints;
- (void)_createConstraints;
- (id)initWithReuseIdentifier:(id)arg1;

@end
