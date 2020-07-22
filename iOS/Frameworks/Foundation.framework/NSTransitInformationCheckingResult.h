//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface NSTransitInformationCheckingResult
{
    struct _NSRange _range;
    NSDictionary *_components;
    id _underlyingResult;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) void *underlyingResult;
- (id)components;
- (_Bool)_adjustRangesWithOffset:(long long)arg1;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (struct _NSRange)range;
- (unsigned long long)resultType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange)arg1 components:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1 components:(id)arg2 underlyingResult:(void *)arg3;

@end

