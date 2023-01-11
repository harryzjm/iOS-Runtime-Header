//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface EKSuggestedEventInfo
{
}

+ (Class)frozenClass;
- (id)semanticIdentifier;
- (id)timestampAsDate;
- (void)setTimestampAsDate:(id)arg1;
@property(nonatomic) double timestamp;
@property(nonatomic) _Bool changesAcknowledged;
@property(nonatomic) unsigned long long changedFields;
@property(copy, nonatomic) NSString *uniqueKey;
@property(copy, nonatomic) NSString *opaqueKey;
- (id)relatedEvent;
- (id)copy;
- (id)description;
- (id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3;
- (id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2;

@end

