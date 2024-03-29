//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BWBufferometer : NSObject
{
}

+ (long long)totalTrackedBuffersInFlight;
+ (long long)totalTrackedSizeInFlight;
+ (void)trackBuffer:(void *)arg1 trackedSize:(long long)arg2 tag:(id)arg3 bufferType:(id)arg4;
+ (void)trackBuffer:(void *)arg1 trackedSize:(long long)arg2;
+ (void)initialize;

@end

