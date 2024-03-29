//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, _UIVectorTextLayoutInfo, _UIVectorTextLayoutParameters;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayout : NSObject
{
    NSArray *_runs;
    unsigned long long _numberOfLines;
    struct CGRect _boundingRect;
    struct CGRect _usedBoundingRect;
    struct _NSRange _fitRange;
    double _firstLineBaseline;
    double _lastLineBaseline;
    _UIVectorTextLayoutInfo *_layoutInfo;
    struct CGAffineTransform _coordinateAdjustment;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGAffineTransform coordinateAdjustment; // @synthesize coordinateAdjustment=_coordinateAdjustment;
- (void)_layoutIfNeeded;
- (id)layoutDescription;
- (id)description;
- (void)enumerateRunsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double lastLineBaseline;
@property(readonly, nonatomic) double firstLineBaseline;
@property(readonly, nonatomic) struct _NSRange textRange;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) unsigned long long numberOfRuns;
@property(readonly, nonatomic) unsigned long long numberOfLines;
@property(readonly, nonatomic) struct CGRect usedBoundingRect;
@property(readonly, nonatomic) struct CGRect boundingRect;
- (void)resetLayout;
- (_Bool)hasLayout;
@property(readonly, copy, nonatomic) _UIVectorTextLayoutParameters *parameters;
- (id)initWithTextParameters:(id)arg1;

@end

