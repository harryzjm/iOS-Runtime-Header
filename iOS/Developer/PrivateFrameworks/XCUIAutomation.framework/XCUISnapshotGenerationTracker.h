//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface XCUISnapshotGenerationTracker : NSObject
{
    struct __CFRunLoopObserver *_generationObserver;
    unsigned long long _generation;
}

+ (unsigned long long)generation;
+ (id)sharedTracker;
- (id)_init;
- (void)dealloc;

@end

