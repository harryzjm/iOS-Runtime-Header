//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICDocCamRectangleResultsQueue : NSObject
{
    NSMutableArray *_array;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
- (long long)size;
- (void)apply:(CDUnknownBlockType)arg1 fromIndex:(long long)arg2 toIndex:(unsigned long long)arg3;
- (void)apply:(CDUnknownBlockType)arg1 atIndex:(long long)arg2;
- (id)peekTail;
- (id)peek:(long long)arg1;
- (id)peek;
- (void)clear;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)init;

@end

