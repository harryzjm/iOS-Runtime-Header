//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UIPreviewActionSheetTitleView
{
    NSString *_title;
    UILabel *_label;
}

@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_contentSizeChanged:(id)arg1;
- (void)_updateLabelFont;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;

@end

