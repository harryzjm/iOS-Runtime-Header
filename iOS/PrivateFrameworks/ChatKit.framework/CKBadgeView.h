//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CKBadgeView : UIView
{
    unsigned long long _value;
    UILabel *_countLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) unsigned long long value; // @synthesize value=_value;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

