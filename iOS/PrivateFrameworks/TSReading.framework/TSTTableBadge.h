//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSUColor;

@interface TSTTableBadge : NSObject
{
    int _badgeType;
    TSUColor *_color;
    double _viewScale;
    struct CGRect _frame;
}

+ (id)badgeWithType:(int)arg1 color:(id)arg2 viewScale:(double)arg3 frame:(struct CGRect)arg4;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) double viewScale; // @synthesize viewScale=_viewScale;
@property(retain, nonatomic) TSUColor *color; // @synthesize color=_color;
@property(nonatomic) int badgeType; // @synthesize badgeType=_badgeType;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)dealloc;

@end

