//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextField.h>

@class MISSING_TYPE, UIFont;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI20DynamicTypeTextField : UITextField
{
    MISSING_TYPE *fontUseCaseContentSizeCategory;
    MISSING_TYPE *fontUseCase;
    MISSING_TYPE *directionalTextAlignment;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
@property(nonatomic) long long textAlignment;
@property(nonatomic, retain) UIFont *font;
@property(nonatomic, readonly) long long jet_textLength;
@property(nonatomic, readonly) struct UIEdgeInsets jet_languageAwareOutsets;
@property(nonatomic, readonly) _Bool jet_isTextExtraTall;

@end

