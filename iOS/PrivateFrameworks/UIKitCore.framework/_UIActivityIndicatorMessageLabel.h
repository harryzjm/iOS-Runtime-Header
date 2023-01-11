//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorMessageLabel
{
    NSDictionary *_regularTextAttributes;
    NSDictionary *_effectiveTextAttributes;
}

+ (id)defaultRegularContentSizeTextAttributes;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *effectiveTextAttributes; // @synthesize effectiveTextAttributes=_effectiveTextAttributes;
@property(copy, nonatomic) NSDictionary *regularTextAttributes; // @synthesize regularTextAttributes=_regularTextAttributes;
- (void)_ensureCapableOfCalculatingBaselineOffsets;
- (id)_validatedAttributedString:(id)arg1;
- (double)_effectiveVerticalSpacingToSpinner;
- (id)_effectiveAttributesDerivedFromRegularTextAttributes:(id)arg1;
- (void)setEffectiveTextAttributes:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
@property(readonly, nonatomic) double verticalSpacingToSpinner;
- (id)initWithRegularTextAttributes:(id)arg1;

@end
