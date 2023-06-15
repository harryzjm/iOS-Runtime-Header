//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class UIButton, UILabel;
@protocol WDCheckmarkTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface WDCheckmarkTableViewCell : UITableViewCell
{
    UILabel *_displayLabel;
    UIButton *_button;
    id <WDCheckmarkTableViewCellDelegate> _delegate;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WDCheckmarkTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickToggle:(id)arg1;
@property(nonatomic, getter=isOn) _Bool on;
- (void)setDisplayText:(id)arg1;
- (void)_setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

