//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, SSSQLiteDatabase;

@interface SSWishlist : NSObject
{
    long long _accountIdentifier;
    SSSQLiteDatabase *_database;
}

+ (_Bool)existsForAccountIdentifier:(long long)arg1;
@property(readonly, nonatomic) long long accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSNumber *lastSyncTime;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)deleteBackingStore;
- (void)dealloc;
- (id)initWithAccountIdentifier:(long long)arg1;

@end
