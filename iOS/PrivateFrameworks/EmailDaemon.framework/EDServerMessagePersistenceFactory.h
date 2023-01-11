//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDGmailLabelPersistence, EDPersistenceDatabase;

@interface EDServerMessagePersistenceFactory : NSObject
{
    EDPersistenceDatabase *_database;
    EDGmailLabelPersistence *_gmailLabelPersistence;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence; // @synthesize gmailLabelPersistence=_gmailLabelPersistence;
@property(readonly, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
- (id)serverMessagePersistenceForMailboxURL:(id)arg1;
- (id)init;
- (id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2;

@end
