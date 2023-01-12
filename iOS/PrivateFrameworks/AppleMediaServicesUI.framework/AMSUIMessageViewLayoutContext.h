//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIMessageView, NSMutableArray, UIBezierPath;

__attribute__((visibility("hidden")))
@interface AMSUIMessageViewLayoutContext : NSObject
{
    _Bool _isDirty;
    NSMutableArray *_footerButtonFrames;
    NSMutableArray *_separatorViewFrames;
    double _textViewFrameCenteredYOffset;
    AMSUIMessageView *_messageView;
    UIBezierPath *_textViewExclusionPath;
    struct CGSize _textViewContentHuggingSize;
    struct CGSize _lastFittingSize;
    struct CGSize _lastSize;
    struct CGRect _accessoryViewFrame;
    struct CGRect _imageViewFrame;
    struct CGRect _textViewFrame;
    struct CGRect _mainContentFrame;
    struct CGRect _footerContainerViewFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBezierPath *textViewExclusionPath; // @synthesize textViewExclusionPath=_textViewExclusionPath;
@property(nonatomic) _Bool isDirty; // @synthesize isDirty=_isDirty;
@property(nonatomic) struct CGRect footerContainerViewFrame; // @synthesize footerContainerViewFrame=_footerContainerViewFrame;
@property(nonatomic) struct CGRect mainContentFrame; // @synthesize mainContentFrame=_mainContentFrame;
@property(nonatomic) struct CGSize lastSize; // @synthesize lastSize=_lastSize;
@property(nonatomic) struct CGSize lastFittingSize; // @synthesize lastFittingSize=_lastFittingSize;
@property(nonatomic) __weak AMSUIMessageView *messageView; // @synthesize messageView=_messageView;
@property(nonatomic) struct CGRect textViewFrame; // @synthesize textViewFrame=_textViewFrame;
@property(nonatomic) double textViewFrameCenteredYOffset; // @synthesize textViewFrameCenteredYOffset=_textViewFrameCenteredYOffset;
@property(nonatomic) struct CGSize textViewContentHuggingSize; // @synthesize textViewContentHuggingSize=_textViewContentHuggingSize;
@property(retain, nonatomic) NSMutableArray *separatorViewFrames; // @synthesize separatorViewFrames=_separatorViewFrames;
@property(nonatomic) struct CGRect imageViewFrame; // @synthesize imageViewFrame=_imageViewFrame;
@property(retain, nonatomic) NSMutableArray *footerButtonFrames; // @synthesize footerButtonFrames=_footerButtonFrames;
@property(nonatomic) struct CGRect accessoryViewFrame; // @synthesize accessoryViewFrame=_accessoryViewFrame;
- (double)totalFooterButtonHeight;
- (double)leadingContentTextBaseline;
- (_Bool)isImageViewHidden;
@property(readonly, nonatomic) double accessorySpacing;
@property(readonly, nonatomic) _Bool shouldUseStackedLayout;
- (double)_scaledUIValueForValue:(double)arg1;
- (double)_labelSpacing;
- (_Bool)_isTextOnlyBanner;
- (_Bool)_isSymbolImage;
- (_Bool)_isAccessoryViewLeading;
- (double)_interitemSpacing;
- (double)_imageLength;
- (double)_footerHeight;
- (double)_bannerMaxTextWidth;
- (struct CGSize)_makeImageViewSize;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets contentLayoutMargins;
- (void)calculateTextViewExlcusionFrame;
- (void)calculateTextViewSizeInFrame:(struct CGRect)arg1 dirty:(_Bool)arg2;
- (void)calculateMainContentFrameRootFrame:(struct CGRect)arg1;
- (void)calculateAccessoryViewSize;
- (void)calculateAccessoryViewFrame;
- (void)_updateWithRootFrame:(struct CGRect)arg1 sizing:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviewFrames;
- (void)invalidate;
- (id)initWithMessageView:(id)arg1;

@end
