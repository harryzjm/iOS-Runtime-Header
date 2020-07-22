//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <AccountsUI/PSHeaderFooterView-Protocol.h>

@class NSArray, NSString, UILabel;

@interface ACUITextWithLinkButtonFooterView : UIView <PSHeaderFooterView>
{
    NSArray *_linkButtons;
    UILabel *_textLabel;
    NSString *_footerText;
}

- (void).cxx_destruct;
- (double)_heightForEmptyLineConstrainedToWidth:(double)arg1;
- (double)_heightForLinkButton:(id)arg1 constrainedToWidth:(double)arg2;
- (double)_heightForFooterTextConstrainedToWidth:(double)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithText:(id)arg1 linkButtons:(id)arg2;
- (id)initWithText:(id)arg1 linkButton:(id)arg2;
- (id)initWithSpecifier:(id)arg1;

@end

