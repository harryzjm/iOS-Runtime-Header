//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSUUID;

@interface HDInsertValuesToQuantitySampleSeriesOperation
{
    NSUUID *_seriesIdentifier;
    NSArray *_values;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, copy, nonatomic) NSUUID *seriesIdentifier; // @synthesize seriesIdentifier=_seriesIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)initWithSeriesIdentifier:(id)arg1 values:(id)arg2;

@end

