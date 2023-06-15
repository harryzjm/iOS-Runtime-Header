//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UITextInputSessionDynamicAccumulator
{
    NSArray *_lastResults;
    CDUnknownBlockType _dynamicAccumulatorIncreaseBlock;
}

+ (id)accumulatorWithName:(id)arg1 depthRange:(struct _NSRange)arg2 block:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dynamicAccumulatorIncreaseBlock; // @synthesize dynamicAccumulatorIncreaseBlock=_dynamicAccumulatorIncreaseBlock;
@property(readonly, nonatomic) NSArray *lastResults; // @synthesize lastResults=_lastResults;
- (void)enumerateAnalytics:(CDUnknownBlockType)arg1;
- (void)increaseWithActions:(id)arg1;

@end

