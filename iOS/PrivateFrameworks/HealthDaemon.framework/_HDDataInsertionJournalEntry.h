//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDDataOriginProvenance, HKObject;

@interface _HDDataInsertionJournalEntry
{
    HKObject *_dataObject;
    HDDataOriginProvenance *_provenance;
}

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) HDDataOriginProvenance *provenance; // @synthesize provenance=_provenance;
@property(readonly, nonatomic) HKObject *dataObject; // @synthesize dataObject=_dataObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithDataObject:(id)arg1 provenance:(id)arg2;

@end
