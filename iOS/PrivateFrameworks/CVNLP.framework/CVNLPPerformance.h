//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CVNLPPerformance : NSObject
{
    _Bool _computePerf;
    NSMutableDictionary *_results;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *results; // @synthesize results=_results;
@property(readonly, nonatomic) _Bool computePerf; // @synthesize computePerf=_computePerf;
- (void)run:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithOptions:(id)arg1;

@end

