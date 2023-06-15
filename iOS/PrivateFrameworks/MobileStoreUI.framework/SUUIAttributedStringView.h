//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, SUUIAttributedStringLayout, UIColor;
@protocol SUUILinkHandler;

__attribute__((visibility("hidden")))
@interface SUUIAttributedStringView : UIView
{
    double _calculatedTopInset;
    long long _firstLineTopInset;
    SUUIAttributedStringLayout *_layout;
    NSLayoutManager *_layoutManager;
    NSArray *_requiredBadges;
    long long _stringTreatment;
    _Bool _touchInside;
    struct _NSRange _trackingRange;
    _Bool _trackingTouch;
    struct CGRect _textBounds;
    UIColor *_textColor;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    UIColor *_treatmentColor;
    _Bool _containsLinks;
    _Bool _textColorFollowsTintColor;
    id <SUUILinkHandler> _linkDelegate;
    long long _badgePlacement;
}

+ (struct CGSize)sizeWithLayout:(id)arg1 treatment:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool textColorFollowsTintColor; // @synthesize textColorFollowsTintColor=_textColorFollowsTintColor;
@property(nonatomic) long long badgePlacement; // @synthesize badgePlacement=_badgePlacement;
@property(nonatomic) long long firstLineTopInset; // @synthesize firstLineTopInset=_firstLineTopInset;
@property(retain, nonatomic) UIColor *treatmentColor; // @synthesize treatmentColor=_treatmentColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long stringTreatment; // @synthesize stringTreatment=_stringTreatment;
@property(copy, nonatomic) NSArray *requiredBadges; // @synthesize requiredBadges=_requiredBadges;
@property(nonatomic) __weak id <SUUILinkHandler> linkDelegate; // @synthesize linkDelegate=_linkDelegate;
@property(retain, nonatomic) SUUIAttributedStringLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) _Bool containsLinks; // @synthesize containsLinks=_containsLinks;
- (void)_setTouchInside:(_Bool)arg1;
- (void)_setTrackingTouch:(_Bool)arg1;
- (void)_reloadTopInset;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)_touchInsideLinkText:(struct CGPoint)arg1 linkTextRange:(struct _NSRange *)arg2;
- (void)_setupTapLocatorContainer;
- (void)drawRect:(struct CGRect)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool usesTallCharacterSet;
@property(readonly, nonatomic) double firstBaselineOffset;
@property(readonly, nonatomic) double baselineOffset;
- (void)viewWasRecycled;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

