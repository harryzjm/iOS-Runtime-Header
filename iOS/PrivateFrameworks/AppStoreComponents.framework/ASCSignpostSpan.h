//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/NSSecureCoding-Protocol.h>

@class NSDate, NSDateInterval, NSMutableSet, NSSet;

@interface ASCSignpostSpan : NSObject <NSSecureCoding>
{
    unsigned long long _primaryTag;
    NSMutableSet *_mutableSupplementaryTags;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSMutableSet *mutableSupplementaryTags; // @synthesize mutableSupplementaryTags=_mutableSupplementaryTags;
@property(readonly, nonatomic) unsigned long long primaryTag; // @synthesize primaryTag=_primaryTag;
- (id)description;
- (void)endEmitting;
- (void)beginEmitting;
- (void)addSupplementaryTag:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSDateInterval *dateRange;
@property(readonly, copy, nonatomic) NSSet *supplementaryTags;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
