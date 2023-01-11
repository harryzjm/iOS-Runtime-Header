//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface PUPhotoEditOverlayBadge : UIView
{
    NSString *_text;
    UILabel *_label;
    struct UIEdgeInsets _insets;
}

@property(readonly, nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)_updateLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end
