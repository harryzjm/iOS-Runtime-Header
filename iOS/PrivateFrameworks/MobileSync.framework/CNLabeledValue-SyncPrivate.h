//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNLabeledValue.h>

@class NSString;

@interface CNLabeledValue (SyncPrivate)
+ (id)SSSyncIdentifierFromString:(id)arg1;
- (id)SSGetSyncServicesRecordForContactWithIdentifier:(id)arg1 withSSEntityName:(id)arg2;
@property(readonly, nonatomic) NSString *SSSyncIdentifier;
@end
