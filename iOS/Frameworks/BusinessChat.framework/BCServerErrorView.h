//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface BCServerErrorView : UIView
{
    UIView *_contentView;
    UILabel *_messageLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)init;

@end
