//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UISwitch;
@protocol CKAppManagerAppTableViewCellDelegate;

@interface CKAppManagerAppTableViewCell : UITableViewCell
{
    id <CKAppManagerAppTableViewCellDelegate> _delegate;
    UISwitch *_appToggle;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UISwitch *appToggle; // @synthesize appToggle=_appToggle;
@property(nonatomic) __weak id <CKAppManagerAppTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateCellWithPluginInfo:(id)arg1;
- (void)appToggleTapped:(id)arg1;
- (void)setToggleVisible:(_Bool)arg1 isOn:(_Bool)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutMarginsDidChange;

@end

