//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisionKitCore/NSCopying-Protocol.h>

@class VKTextPosition;

__attribute__((visibility("hidden")))
@interface VKTextRange <NSCopying>
{
    VKTextPosition *_start;
    VKTextPosition *_end;
}

+ (id)defaultRange;
+ (id)zeroRange;
+ (id)rangeWithNSRange:(struct _NSRange)arg1;
+ (id)rangeWithStartOffset:(unsigned long long)arg1 endOffset:(unsigned long long)arg2;
+ (id)rangeWithStart:(id)arg1 end:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) VKTextPosition *end; // @synthesize end=_end;
@property(retain, nonatomic) VKTextPosition *start; // @synthesize start=_start;
- (id)description;
- (id)summaryDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long location;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) unsigned long long maxIndex;
@property(readonly, nonatomic) unsigned long long minIndex;
@property(readonly, nonatomic) _Bool isNSNotFound;
@property(readonly, nonatomic) _Bool isZeroRange;
@property(readonly, nonatomic) struct _NSRange nsRange;
- (_Bool)isEmpty;
- (_Bool)containsTextPosition:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)initWithStartOffset:(unsigned long long)arg1 endOffset:(unsigned long long)arg2;
- (id)initWithStart:(id)arg1 end:(id)arg2;

@end
