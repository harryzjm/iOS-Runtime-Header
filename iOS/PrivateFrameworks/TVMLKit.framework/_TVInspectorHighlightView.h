//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor, UILabel, UIWindow, _TVInspectorHighlightMetadataView;

@interface _TVInspectorHighlightView : UIView
{
    UIView *_highlightView;
    _TVInspectorHighlightMetadataView *_metadataView;
    UIWindow *_targetWindow;
    UIColor *_borderColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) __weak UIWindow *targetWindow; // @synthesize targetWindow=_targetWindow;
- (void)layoutSubviews;
- (void)highlightView:(id)arg1;
@property(retain, nonatomic) UIColor *contentColor;
@property(readonly, nonatomic) UILabel *descriptionLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end
