//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPersistentHistoryToken.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryToken : NSPersistentHistoryToken
{
    NSDictionary *_storeTokens;
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)compareToken:(id)arg1 error:(id *)arg2;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)storeTokens;
- (id)description;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTransactionNumber:(id)arg1 andStoreID:(id)arg2;

@end

