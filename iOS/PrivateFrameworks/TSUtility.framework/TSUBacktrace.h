//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSUBacktrace : NSObject
{
    void **_callstack;
    int _frames;
    int _initAdjustment;
}

+ (id)callee;
+ (id)caller;
+ (id)new;
+ (id)backtrace;
- (_Bool)isEqual:(id)arg1;
- (id)callee;
- (id)caller;
- (id)callerAtIndex:(long long)arg1;
- (id)backtraceString;
- (void)dealloc;
- (id)init;
- (id)initWithAdjustment:(int)arg1;

@end

