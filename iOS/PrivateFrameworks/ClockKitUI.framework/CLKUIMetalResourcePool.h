//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface CLKUIMetalResourcePool : NSObject
{
    NSObject<OS_dispatch_queue> *_buffersQueue;
    NSMutableArray *_resourcePool;
    unsigned long long _expectedCountPerFrame;
    CDUnknownBlockType _creationBlock;
}

+ (id)texturePoolWithDescriptor:(id)arg1 expectedCountPerFrame:(unsigned long long)arg2;
+ (id)bufferPoolWithLength:(unsigned long long)arg1 andOptions:(unsigned long long)arg2 expectedCountPerFrame:(unsigned long long)arg3;
- (void).cxx_destruct;
- (void)returnReusableResource:(id)arg1;
- (id)dequeueReusableResource;
- (id)dequeueReusableResourceForUseOnCommandBuffer:(id)arg1;
- (id)initWithCreationBlock:(CDUnknownBlockType)arg1 expectedCountPerFrame:(unsigned long long)arg2;

@end
