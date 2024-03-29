//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class NSIndexPath, NSLayoutConstraint, NSString, UIButton, UILabel;
@protocol UIDebuggingInformationHierarchyCellDelegate;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationHierarchyCell : UICollectionViewCell
{
    UIButton *_disclosureButton;
    UILabel *_mainLabel;
    UIButton *_infoButton;
    NSIndexPath *_indexPath;
    _Bool _collapsedBeneath;
    NSLayoutConstraint *_disclosureButtonAvailableConstraint;
    NSLayoutConstraint *_disclosureButtonUnavailableConstraint;
    _Bool _disclosureIndicatorHidden;
    NSString *_name;
    id <UIDebuggingInformationHierarchyCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disclosureIndicatorHidden; // @synthesize disclosureIndicatorHidden=_disclosureIndicatorHidden;
@property(nonatomic) __weak id <UIDebuggingInformationHierarchyCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
@property(readonly, nonatomic) NSIndexPath *indexPath;
@property(readonly, nonatomic) UIButton *infoButton;
- (void)displayDetailsForCell;
- (void)deliverToggle;
- (void)layoutSubviews;

@end

