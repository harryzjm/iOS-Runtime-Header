//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSSecureCoding-Protocol.h>

@interface CKDatabaseNotification <NSSecureCoding>
{
    long long _databaseScope;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end

