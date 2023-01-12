//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDJournalEntry.h"

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface _HDAssociationInsertionJournalEntry : HDJournalEntry
{
    _Bool _enforceSameSource;
    NSUUID *_parentUUID;
    NSData *_childUUIDsData;
    long long _provenance;
}

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

