//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class HKDisplayType, NSString, UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface WDDisplayTypeDescriptionView : UIView
{
    HKDisplayType *_displayType;
    unsigned long long _style;
    UILabel *_descriptionHeadingLabel;
    UILabel *_descriptionLabel;
    UITextView *_attributionTextView;
    UILabel *_cautionaryLabel;
    _Bool _showAttributionText;
}

+ (id)_cautionaryTextFontForStyle:(unsigned long long)arg1;
+ (id)_attributionTextFontForStyle:(unsigned long long)arg1;
+ (id)_descriptionTextColorForStyle:(unsigned long long)arg1;
+ (id)_descriptionTextFontForStyle:(unsigned long long)arg1;
+ (id)_descriptionHeadingColorForStyle:(unsigned long long)arg1;
+ (id)_descriptionHeadingFontForStyle:(unsigned long long)arg1;
+ (id)_metricsForStyle:(unsigned long long)arg1;
+ (double)minimumHeightForStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool showAttributionText; // @synthesize showAttributionText=_showAttributionText;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)_setupUI;
- (void)_updateFont;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDisplayType:(id)arg1 showAttributionText:(_Bool)arg2 style:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

