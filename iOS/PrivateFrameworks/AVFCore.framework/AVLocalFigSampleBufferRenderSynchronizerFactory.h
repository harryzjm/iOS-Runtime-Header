//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVLocalFigSampleBufferRenderSynchronizerFactory : NSObject
{
}

- (struct OpaqueFigSampleBufferRenderSynchronizer *)createRenderSynchronizerWithAllocator:(struct __CFAllocator *)arg1 options:(struct __CFDictionary *)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

