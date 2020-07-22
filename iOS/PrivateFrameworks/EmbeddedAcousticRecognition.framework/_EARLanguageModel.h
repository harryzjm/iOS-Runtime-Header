//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARLanguageModel : NSObject
{
    struct vector<std::__1::pair<id<_EARLanguageModelDataSource>, float>, std::__1::allocator<std::__1::pair<id<_EARLanguageModelDataSource>, float>>> _dataSources;
    float _totalWeight;
}

@property(readonly, nonatomic) float totalWeight; // @synthesize totalWeight=_totalWeight;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateDataSourcesAndWeightsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addDataSource:(id)arg1 weight:(float)arg2;

@end

