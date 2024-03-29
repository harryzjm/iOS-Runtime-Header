//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CNMeCardSharedProfileCellContentView : UIView
{
    UILabel *_titleLabel;
    UILabel *_valueLabel;
}

+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setLabelTextAttributes:(id)arg1;
- (void)updateView;
- (void)setupConstraints;
- (id)displayStringForSharingAudience;
- (void)layoutSubviews;
- (void)setupViews;
- (id)init;

@end

