//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView;

@interface WGWidgetListEditViewTableViewCell : UITableViewCell
{
    UIImageView *_dotImageView;
    _Bool _widgetEnabled;
    _Bool _showsDot;
    UIButton *_insertWidgetAccessoryButton;
}

@property(readonly, nonatomic) __weak UIButton *insertWidgetAccessoryButton; // @synthesize insertWidgetAccessoryButton=_insertWidgetAccessoryButton;
@property(nonatomic) _Bool showsDot; // @synthesize showsDot=_showsDot;
@property(nonatomic, getter=isWidgetEnabled) _Bool widgetEnabled; // @synthesize widgetEnabled=_widgetEnabled;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

