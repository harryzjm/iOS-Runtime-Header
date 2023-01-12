//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITextInputSessionEfficacyAccumulator : NSObject
{
    long long _lengths[8];
    long long _actions[8];
    NSString *_name;
    CDUnknownBlockType _lengthBlock;
    CDUnknownBlockType _actionBlock;
}

+ (id)accumulatorWithName:(id)arg1 lengthBlock:(CDUnknownBlockType)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) CDUnknownBlockType lengthBlock; // @synthesize lengthBlock=_lengthBlock;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)enumerateAnalytics:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)increaseWithAction:(id)arg1;

@end

