//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNGroup.h>

@class NSString;

@interface CNGroup (SyncPrivate)
+ (id)SSSyncIdentifierFromString:(id)arg1;
- (id)SSGetSyncServicesRecordInStore:(id)arg1;
- (id)_SSGetAllSubgroupsAndContactIdentifiersInStore:(id)arg1;
- (id)_SSMemberContactIdentifiersInStore:(id)arg1;
@property(readonly, nonatomic) NSString *SSSyncIdentifier;
@end
