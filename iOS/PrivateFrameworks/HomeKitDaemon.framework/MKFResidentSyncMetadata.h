//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSPersistentHistoryToken, _MKFHome;

__attribute__((visibility("hidden")))
@interface MKFResidentSyncMetadata
{
}

+ (id)fetchRequest;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;

// Remaining properties
@property(retain, nonatomic) _MKFHome *home; // @dynamic home;
@property(retain, nonatomic) NSPersistentHistoryToken *lastSeenToken; // @dynamic lastSeenToken;
@property(copy, nonatomic) NSDate *lastSyncTimestamp; // @dynamic lastSyncTimestamp;
@property(retain, nonatomic) NSPersistentHistoryToken *lastSyncToken; // @dynamic lastSyncToken;

@end

