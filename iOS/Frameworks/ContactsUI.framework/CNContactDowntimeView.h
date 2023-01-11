//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSDictionary, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CNContactDowntimeView : UIView
{
    NSDictionary *_ab_textAttributes;
    UILabel *_downtimeLabel;
    UIImageView *_lockImageView;
}

@property(readonly, nonatomic) UIImageView *lockImageView; // @synthesize lockImageView=_lockImageView;
@property(readonly, nonatomic) UILabel *downtimeLabel; // @synthesize downtimeLabel=_downtimeLabel;
@property(copy, nonatomic) NSDictionary *ab_textAttributes; // @synthesize ab_textAttributes=_ab_textAttributes;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
