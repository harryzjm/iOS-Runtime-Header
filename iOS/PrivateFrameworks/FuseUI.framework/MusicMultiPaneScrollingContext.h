//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MusicMultiPaneScrollingContext : NSObject
{
    double _previousMaximumHeaderHeight;
    double _previousStabilizingBottomAdditions;
    long long _snapDecelerationVeloctiyOverrideState;
    double _snapDownContentOffset;
    long long _snapState;
    double _snapUpContentOffset;
    struct CGPoint _previousContentOffset;
    struct UIEdgeInsets _previousContentInsetAdditions;
    struct UIEdgeInsets _previousContentScrollInsetAdditions;
    struct UIEdgeInsets _previousExternalContentInset;
    struct UIEdgeInsets _previousMaximumContentSizeScrollIndicatorInsetAdditions;
}

@property(nonatomic) double snapUpContentOffset; // @synthesize snapUpContentOffset=_snapUpContentOffset;
@property(nonatomic) long long snapState; // @synthesize snapState=_snapState;
@property(nonatomic) double snapDownContentOffset; // @synthesize snapDownContentOffset=_snapDownContentOffset;
@property(nonatomic) long long snapDecelerationVeloctiyOverrideState; // @synthesize snapDecelerationVeloctiyOverrideState=_snapDecelerationVeloctiyOverrideState;
@property(nonatomic) double previousStabilizingBottomAdditions; // @synthesize previousStabilizingBottomAdditions=_previousStabilizingBottomAdditions;
@property(nonatomic) double previousMaximumHeaderHeight; // @synthesize previousMaximumHeaderHeight=_previousMaximumHeaderHeight;
@property(nonatomic) struct UIEdgeInsets previousMaximumContentSizeScrollIndicatorInsetAdditions; // @synthesize previousMaximumContentSizeScrollIndicatorInsetAdditions=_previousMaximumContentSizeScrollIndicatorInsetAdditions;
@property(nonatomic) struct UIEdgeInsets previousExternalContentInset; // @synthesize previousExternalContentInset=_previousExternalContentInset;
@property(nonatomic) struct UIEdgeInsets previousContentScrollInsetAdditions; // @synthesize previousContentScrollInsetAdditions=_previousContentScrollInsetAdditions;
@property(nonatomic) struct UIEdgeInsets previousContentInsetAdditions; // @synthesize previousContentInsetAdditions=_previousContentInsetAdditions;
@property(nonatomic) struct CGPoint previousContentOffset; // @synthesize previousContentOffset=_previousContentOffset;

@end

