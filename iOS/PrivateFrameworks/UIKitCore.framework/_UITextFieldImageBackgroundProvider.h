//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UITextFieldImageBackgroundView;

__attribute__((visibility("hidden")))
@interface _UITextFieldImageBackgroundProvider
{
    _UITextFieldImageBackgroundView *_backgroundView;
}

- (void).cxx_destruct;
- (void)layoutIfNeeded;
- (void)setNeedsDisplay;
- (void)_applyCorrectImage;
- (void)enabledDidChangeAnimated:(_Bool)arg1;
- (void)addToTextField:(id)arg1;
- (id)backgroundView;

@end

