//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit27CompactTextAlignmentControl : UIControl
{
    MISSING_TYPE *viewControllerProvider;
    MISSING_TYPE *imageView;
    MISSING_TYPE *symbolConfiguration;
    MISSING_TYPE *selectedTextAlignment;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;
- (void)textAlignmentValueDidChange:(id)arg1;
- (void)didTapSelf;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;

@end

