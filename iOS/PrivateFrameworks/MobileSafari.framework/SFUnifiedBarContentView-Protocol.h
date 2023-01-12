//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/NSObject-Protocol.h>

@class NSArray, SFUnifiedBarMetrics, SFUnifiedBarTheme;

@protocol SFUnifiedBarContentView <NSObject>
@property(readonly, nonatomic) struct CGSize preferredSize;

@optional
@property(readonly, nonatomic) _Bool isCurrentlyScrollable;
@property(nonatomic) double themeColorVisibility;
@property(nonatomic) _Bool showsSquishedAccessoryViews;
@property(readonly, nonatomic) NSArray *squishedAccessoryViews;
@property(nonatomic) struct UIEdgeInsets squishedContentInset;
@property(nonatomic) double squishTransformFactor;
@property(nonatomic) unsigned long long sizeClass;
@property(readonly, nonatomic) double topSquishedSpacingAdjustment;
@property(readonly, nonatomic) double preferredSquishedBottomSpacing;
@property(readonly, nonatomic) _Bool showsSquishedContent;
@property(readonly, nonatomic) double preferredBottomSpacing;
@property(readonly, nonatomic) double preferredTopSpacing;
@property(nonatomic) _Bool pinsScrollPositionToTrailingEdgeDuringResize;
@property(nonatomic) struct CGPoint midpointForCenteredContent;
@property(nonatomic) struct NSDirectionalEdgeInsets contentInset;
@property(readonly, nonatomic, getter=isContentHidden) _Bool contentHidden;
@property(retain, nonatomic) SFUnifiedBarTheme *barTheme;
@property(readonly, nonatomic) SFUnifiedBarMetrics *barMetrics;
@property(nonatomic) double barBackgroundAlpha;
@end

