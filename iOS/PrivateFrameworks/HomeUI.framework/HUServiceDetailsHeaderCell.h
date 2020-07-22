//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, HUGridServiceCell, NSArray, NSString, UILabel;
@protocol HUResizableCellDelegate;

@interface HUServiceDetailsHeaderCell : UITableViewCell <HUCellProtocol>
{
    HFItem *_item;
    id <HUResizableCellDelegate> _resizingDelegate;
    UILabel *_errorLabel;
    HUGridServiceCell *_serviceCell;
    NSArray *_hiddenErrorLabelConstraints;
    NSArray *_visibleErrorLabelConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *visibleErrorLabelConstraints; // @synthesize visibleErrorLabelConstraints=_visibleErrorLabelConstraints;
@property(retain, nonatomic) NSArray *hiddenErrorLabelConstraints; // @synthesize hiddenErrorLabelConstraints=_hiddenErrorLabelConstraints;
@property(retain, nonatomic) HUGridServiceCell *serviceCell; // @synthesize serviceCell=_serviceCell;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate; // @synthesize resizingDelegate=_resizingDelegate;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)_visibleErrorLabelConstraints;
- (id)_hiddenErrorLabelConstraints;
- (void)_updateRequiredHeightIfNeeded;
- (void)_updateErrorLabelConstraints;
- (void)_configureConstraints;
- (_Bool)_shouldShowServiceCell;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
