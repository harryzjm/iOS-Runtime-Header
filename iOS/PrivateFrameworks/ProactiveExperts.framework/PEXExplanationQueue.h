//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PEXExplanationQueue : NSObject
{
    NSMutableArray *_queue;
}

+ (id)uniqueKeycodeFromExplanation:(unsigned char)arg1;
+ (id)stringFromExplanation:(unsigned char)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)enumerateAndFlushWithBlock:(CDUnknownBlockType)arg1;
- (unsigned char)peek;
- (void)push:(unsigned char)arg1;
- (id)init;

@end
