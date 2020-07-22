//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <AccountsUI/PSHeaderFooterView-Protocol.h>

@class ACUILinkButton;

@interface ACUILinkButtonFooterView : UIView <PSHeaderFooterView>
{
    ACUILinkButton *_linkButton;
    long long _desiredTextAlignment;
}

@property(nonatomic) long long alignment; // @synthesize alignment=_desiredTextAlignment;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (id)initWithButton:(id)arg1;
- (id)initWithSpecifier:(id)arg1;

@end
