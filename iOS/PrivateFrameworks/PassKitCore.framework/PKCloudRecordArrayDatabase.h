//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface PKCloudRecordArrayDatabase : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSMutableDictionary *_cloudRecordByDatabaseZone;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cloudRecordByDatabaseZone; // @synthesize cloudRecordByDatabaseZone=_cloudRecordByDatabaseZone;
- (id)countByZoneID;
- (long long)count;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)arg1;
- (id)allObjects;
- (id)allItems;
- (void)addCloudRecord:(id)arg1;
- (void)applyCloudRecordDatabase:(id)arg1;
- (id)descriptionWithDetailedOutput:(_Bool)arg1 includeItem:(_Bool)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
