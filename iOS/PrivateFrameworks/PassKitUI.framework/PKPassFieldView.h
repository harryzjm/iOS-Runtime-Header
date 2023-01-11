//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKDiffView, PKPassColorProfile, PKPassField, PKPassFieldTemplate, UILabel;

@interface PKPassFieldView : UIView
{
    _Bool _needsRecalculation;
    struct CGSize _cachedSize;
    long long _background;
    PKPassField *_field;
    PKPassFieldTemplate *_fieldTemplate;
    PKPassColorProfile *_colorProfile;
    PKDiffView *_diffView;
    UILabel *_labelLabel;
    UILabel *_valueLabel;
}

+ (id)newViewForField:(id)arg1 fieldTemplate:(id)arg2;
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
@property(retain, nonatomic) PKDiffView *diffView; // @synthesize diffView=_diffView;
@property(retain, nonatomic) PKPassColorProfile *colorProfile; // @synthesize colorProfile=_colorProfile;
@property(retain, nonatomic) PKPassFieldTemplate *fieldTemplate; // @synthesize fieldTemplate=_fieldTemplate;
@property(retain, nonatomic) PKPassField *field; // @synthesize field=_field;
- (void).cxx_destruct;
- (id)_valueAttributedStringForColorProfile:(id)arg1;
- (id)_labelAttributedStringForColorProfile:(id)arg1;
- (struct CGSize)_resizeMultiLineValueFontForAvailableSize:(struct CGSize)arg1;
- (_Bool)_shouldDisplayLabel;
- (void)presentDiff:(id)arg1 inView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)invalidateCachedFieldSize;
- (void)layoutSubviews;
- (void)setColorProfile:(id)arg1 background:(long long)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithField:(id)arg1 fieldTemplate:(id)arg2;

@end

