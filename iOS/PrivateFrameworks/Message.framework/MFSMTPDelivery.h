//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFSMTPConnection;

@interface MFSMTPDelivery
{
    MFSMTPConnection *_connection;
}

+ (id)log;
- (void).cxx_destruct;
- (id)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (void)setAccount:(id)arg1;
- (void)_openConnection;
- (Class)deliveryClass;

@end
