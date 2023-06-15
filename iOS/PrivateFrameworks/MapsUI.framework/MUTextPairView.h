//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MUTextPairViewModel, NSArray, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MUTextPairView : UIView
{
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    NSArray *_constraints;
    _Bool _stacked;
    MUTextPairViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MUTextPairViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic, getter=isStacked) _Bool stacked; // @synthesize stacked=_stacked;
- (void)_contentSizeDidChange;
- (void)_updateAppearance;
- (void)_updateConstraints;
- (_Bool)shouldStackForProposedWidth:(double)arg1;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

