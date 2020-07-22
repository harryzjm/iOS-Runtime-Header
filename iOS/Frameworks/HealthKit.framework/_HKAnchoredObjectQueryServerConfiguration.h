//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKQueryAnchor;

__attribute__((visibility("hidden")))
@interface _HKAnchoredObjectQueryServerConfiguration
{
    _Bool _includeDeletedObjects;
    HKQueryAnchor *_anchor;
    unsigned long long _limit;
    double _collectionInterval;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double collectionInterval; // @synthesize collectionInterval=_collectionInterval;
@property(nonatomic) _Bool includeDeletedObjects; // @synthesize includeDeletedObjects=_includeDeletedObjects;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) HKQueryAnchor *anchor; // @synthesize anchor=_anchor;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
