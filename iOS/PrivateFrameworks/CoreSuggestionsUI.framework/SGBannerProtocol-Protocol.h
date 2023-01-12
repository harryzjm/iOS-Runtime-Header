//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestionsUI/NSObject-Protocol.h>

@class NSArray, NSAttributedString, NSLayoutXAxisAnchor, NSString, SGBannerDividerParameter, SGSuggestionAction, SGSuggestionStore, UIColor, UIVisualEffectView;
@protocol SGSuggestion, SGSuggestionDelegate;

@protocol SGBannerProtocol <NSObject>
@property(copy, nonatomic) SGSuggestionAction *primaryAction;
@property(nonatomic) long long accessoryType;
@property(copy, nonatomic) NSArray *imageSGViews;
@property(copy, nonatomic) NSArray *images;
@property(copy, nonatomic) NSString *actionTitle;
@property(copy, nonatomic) NSAttributedString *attributedSubtitle;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;

@optional
@property(nonatomic) _Bool prominentActionButton;
@property(copy, nonatomic) SGSuggestionAction *dismissAction;
@property(copy, nonatomic) SGBannerDividerParameter *bannerDivider;
@property(copy, nonatomic) UIColor *backgroundColor;
@property(nonatomic) double closeButtonXAnchorOffset;
@property(retain, nonatomic) NSLayoutXAxisAnchor *closeButtonCenterXAnchor;
@property(copy, nonatomic) UIVisualEffectView *backgroundVisualEffectView;
@property(nonatomic) _Bool suggestionCategorySupportsBatchDismissal;
@property(nonatomic) long long actionButtonType;
@property(copy, nonatomic) SGSuggestionStore *suggestionStore;
@property(nonatomic) __weak id <SGSuggestionDelegate> delegate;
@property(copy, nonatomic) id <SGSuggestion> suggestion;
- (struct CGRect)popoverSourceRect;
- (void)reload;
- (double)actionButtonLeadingEdgeOffset;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateBannerView;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
@end

