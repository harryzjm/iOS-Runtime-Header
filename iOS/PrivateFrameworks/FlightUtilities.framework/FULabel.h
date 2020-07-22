//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface FULabel : UILabel
{
    NSString *_stringValue;
    NSAttributedString *_attributedStringValue;
    FULabel *_realAssociatedScalingLabel;
    _Bool _uppercase;
    _Bool _useCurrentLocale;
    CDUnknownBlockType _onTap;
    FULabel *_associatedScalingLabel;
}

@property(nonatomic) __weak FULabel *associatedScalingLabel; // @synthesize associatedScalingLabel=_associatedScalingLabel;
@property(readonly) _Bool useCurrentLocale; // @synthesize useCurrentLocale=_useCurrentLocale;
@property(readonly, nonatomic) _Bool uppercase; // @synthesize uppercase=_uppercase;
@property(copy) CDUnknownBlockType onTap; // @synthesize onTap=_onTap;
- (void).cxx_destruct;
- (void)setAttributedText:(id)arg1;
- (void)setStyleProvider:(id)arg1 primaryStyle:(_Bool)arg2;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (id)_associatedScalingLabel;
- (void)setAssociatedLabel:(id)arg1;
- (void)performTap:(id)arg1;
- (void)awakeFromNib;
- (void)setUppercase:(_Bool)arg1 usingCurrentLocale:(_Bool)arg2;

@end
