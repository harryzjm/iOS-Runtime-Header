//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBStrokeView : UIView
{
    NSMutableArray *_points;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)resetStrokePoints;
- (void)addStrokePoint:(struct CGPoint)arg1 withTimestamp:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

