//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9Coherence15CRStringEncoder : NSObject
{
    MISSING_TYPE *sequence;
    MISSING_TYPE *subsequence;
}

- (void).cxx_destruct;
- (id)init;
- (void)setWithAddedByVersion:(id)arg1;
- (void)setWithVersion:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)finishSubstring;
- (void)addChildWithId:(unsigned int)arg1;
- (void)setWithLength:(unsigned int)arg1;
- (void)addAddedById:(unsigned int)arg1 clock:(unsigned int)arg2;
- (void)setCharWithId:(unsigned int)arg1 clock:(unsigned int)arg2;

@end
