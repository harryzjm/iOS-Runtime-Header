//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/EDLocalActionPersistence.h>

@class MFMailMessageLibrary;

@interface MFLocalActionPersistence_iOS : EDLocalActionPersistence
{
    MFMailMessageLibrary *_library;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MFMailMessageLibrary *library; // @synthesize library=_library;
- (void)handledFailedCopyForMessages:(id)arg1;
- (id)labelNameForLabelID:(long long)arg1;
- (long long)mailboxDatabaseIDForURL:(id)arg1;
- (id)mailboxURLForDatabaseID:(long long)arg1;
- (_Bool)moveSupportedFromMailboxURL:(id)arg1 toURL:(id)arg2;
- (id)messageForDatabaseID:(long long)arg1;
- (id)initWithDatabase:(id)arg1;
- (id)initWithLibrary:(id)arg1 database:(id)arg2;
- (id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2;

@end
