//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKSampleIteratorQueryCursor;

__attribute__((visibility("hidden")))
@interface _HKSampleIteratorQueryServerConfiguration
{
    HKSampleIteratorQueryCursor *_queryCursor;
    unsigned long long _limit;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(copy, nonatomic) HKSampleIteratorQueryCursor *queryCursor; // @synthesize queryCursor=_queryCursor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
