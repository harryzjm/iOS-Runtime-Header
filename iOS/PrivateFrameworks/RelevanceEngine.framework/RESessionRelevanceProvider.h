//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface RESessionRelevanceProvider
{
    _Bool _historic;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (id)_simulationDateFormatter;
+ (id)relevanceSimulatorID;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isHistoric) _Bool historic; // @synthesize historic=_historic;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)description;
- (unsigned long long)_hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 historic:(_Bool)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)init;

@end
