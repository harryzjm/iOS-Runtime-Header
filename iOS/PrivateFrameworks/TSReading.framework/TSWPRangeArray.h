//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@interface TSWPRangeArray : NSObject <NSCopying>
{
    void *_rangeVectorOpaque;
}

- (id)description;
- (void)enumerateRangesInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeRange:(struct _NSRange)arg1;
- (struct _NSRange *)rangeReferenceAtIndex:(unsigned long long)arg1;
- (void)addRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) unsigned long long start;
@property(readonly, nonatomic) unsigned long long finish;
@property(readonly, nonatomic) _Bool isEmpty;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long rangeCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRangeVector:(const void *)arg1;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)init;

@end

