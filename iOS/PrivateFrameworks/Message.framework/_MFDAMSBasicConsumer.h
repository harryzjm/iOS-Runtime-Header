//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFActivityMonitor, MFDAMailbox, MFDAMessageStore, MFError, MFMailMessageLibrary;

@interface _MFDAMSBasicConsumer
{
    MFDAMailbox *mailbox;
    MFDAMessageStore *store;
    MFMailMessageLibrary *library;
    MFActivityMonitor *monitor;
    MFError *error;
    unsigned long long numNewMessages;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MFError *error; // @synthesize error;
@property(retain, nonatomic) MFActivityMonitor *monitor; // @synthesize monitor;
- (void)dealloc;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;

@end
