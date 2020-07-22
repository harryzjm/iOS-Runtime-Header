//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSData;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface _UIDecompressionInfo : NSObject
{
    NSObject<OS_dispatch_semaphore> *syncSemaphore;
    NSObject<OS_dispatch_semaphore> *metadataSemaphore;
    NSData *imageData;
    struct CGSize maxSize;
    int renderingIntent;
    _Bool decompressionComplete;
    _Bool metadataComplete;
}

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 maxSize:(struct CGSize)arg2 renderingIntent:(int)arg3;

@end

