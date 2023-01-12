//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _TtC14CalendarWidget21SpatialEventViewModel : NSObject
{
    MISSING_TYPE *event;
    MISSING_TYPE *delegate;
    MISSING_TYPE *lineHeight;
    MISSING_TYPE *viewStartDate;
    MISSING_TYPE *viewEndDate;
    MISSING_TYPE *frame;
    MISSING_TYPE *visibleHeight;
    MISSING_TYPE *travelTimeHeight;
    MISSING_TYPE *unPinnedViewFrame;
    MISSING_TYPE *hideTravelTime;
    MISSING_TYPE *visibleHeightLocked;
}

+ (double)barToBarHorizontalDistanceIncludingBarWidth;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (void)setTravelTimeHeight:(double)arg1;
- (void)setVisibleHeight:(double)arg1;
@property(nonatomic) _Bool visibleHeightLocked; // @synthesize visibleHeightLocked;
- (struct CGRect)stagedFrame;
- (void)setStagedFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) double viewMaxNaturalTextHeight;
@property(nonatomic, readonly) double enoughHeightForOneLine;
@property(nonatomic) _Bool hideTravelTime; // @synthesize hideTravelTime;
@property(nonatomic, readonly) NSDate *end;
@property(nonatomic, readonly) NSDate *start;
@property(nonatomic, readonly) NSDate *startWithTravelTime;
@property(nonatomic, readonly) NSString *eventIdentifier;
@property(nonatomic) struct CGRect unPinnedViewFrame; // @synthesize unPinnedViewFrame;

@end
