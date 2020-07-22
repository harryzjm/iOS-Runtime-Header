//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MTLComputePipelineReflectionInternal
{
    NSArray *_arguments;
    NSArray *_builtInArguments;
    NSDictionary *_performanceStatistics;
    CDStruct_596dc0d1 _flags;
}

- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)builtInArguments;
- (id)arguments;
- (CDStruct_596dc0d1)usageFlags;
- (void)setPerformanceStatistics:(id)arg1;
- (id)performanceStatistics;
- (void)dealloc;
- (id)initWithSerializedData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(CDStruct_596dc0d1)arg4;
- (id)initWithSerializedData:(id)arg1 serializedStageInputDescriptor:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(CDStruct_596dc0d1)arg5;

@end
