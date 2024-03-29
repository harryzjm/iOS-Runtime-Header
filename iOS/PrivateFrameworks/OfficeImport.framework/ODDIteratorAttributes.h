//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODDIteratorAttributes : NSObject
{
    int mAxis;
    int mPointType;
    _Bool mHideLastTransition;
    int mStart;
    unsigned int mCount;
    int mStep;
}

- (void)setStep:(int)arg1;
- (int)step;
- (void)setCount:(unsigned int)arg1;
- (unsigned int)count;
- (void)setStart:(int)arg1;
- (int)start;
- (void)setHideLastTransition:(_Bool)arg1;
- (_Bool)hideLastTransition;
- (void)setPointType:(int)arg1;
- (int)pointType;
- (void)setAxis:(int)arg1;
- (int)axis;

@end

