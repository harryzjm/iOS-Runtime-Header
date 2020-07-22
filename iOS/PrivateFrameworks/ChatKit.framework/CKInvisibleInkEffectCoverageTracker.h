//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSTimer;
@protocol CKInvisibleInkEffectCoverageTrackerDelegate;

@interface CKInvisibleInkEffectCoverageTracker : NSObject
{
    double *_expiryTimes;
    unsigned long long _width;
    unsigned long long _height;
    double _cellWidth;
    double _cellHeight;
    _Bool _uncovered;
    NSTimer *_recoverTimer;
    id <CKInvisibleInkEffectCoverageTrackerDelegate> _delegate;
    double _touchLifetime;
    struct CGSize _size;
}

@property(readonly, nonatomic) double touchLifetime; // @synthesize touchLifetime=_touchLifetime;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) __weak id <CKInvisibleInkEffectCoverageTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_checkForCover:(id)arg1;
- (void)recordTouchAtPoint:(struct CGPoint)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 touchLifetime:(double)arg2;

@end

