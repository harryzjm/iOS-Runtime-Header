//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSWPDropCapCharacterMetrics : NSObject
{
    NSMutableArray *_metricData;
    _Bool _isRightToLeft;
    _Bool _isVertical;
    double _baseline;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double baseline; // @synthesize baseline=_baseline;
@property(readonly, nonatomic) _Bool isVertical; // @synthesize isVertical=_isVertical;
@property(readonly, nonatomic) _Bool isRightToLeft; // @synthesize isRightToLeft=_isRightToLeft;
- (id)description;
- (void)adjustMetricsForWidth:(double)arg1;
- (void)applyTransform:(struct CGAffineTransform)arg1;
- (id)metricsForCharIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithCharacterCount:(unsigned long long)arg1 isRightToLeft:(_Bool)arg2 isVertical:(_Bool)arg3 baseline:(double)arg4;

@end
