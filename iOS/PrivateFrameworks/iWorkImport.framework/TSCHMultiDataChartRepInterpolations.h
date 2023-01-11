//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface TSCHMultiDataChartRepInterpolations : NSObject
{
    CAMediaTimingFunction *mOverallTimingFunction;
    CAMediaTimingFunction *mIndividualTimingFunction;
}

+ (id)interpolationsWithOverallTimingFunction:(id)arg1 individualTimingFunction:(id)arg2;
@property(readonly, nonatomic) CAMediaTimingFunction *individual; // @synthesize individual=mIndividualTimingFunction;
@property(readonly, nonatomic) CAMediaTimingFunction *overall; // @synthesize overall=mOverallTimingFunction;
- (void).cxx_destruct;
- (id)initWithOverallTimingFunction:(id)arg1 individualTimingFunction:(id)arg2;

@end

