//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SRFrameStore;

__attribute__((visibility("hidden")))
@interface SRFramesStoreOffsetEnumerator : NSObject
{
    SRFrameStore *_framesStore;
    unsigned long long _offset;
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;

@end

