//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MIME/MFMessageBody.h>

#import <Message/MFCollectingDataConsumer-Protocol.h>

@class MFBufferedDataConsumer, NSData, NSString;

@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer>
{
    MFBufferedDataConsumer *_consumer;
    NSData *_rawData;
    unsigned long long _count;
    _Bool _lastNewLine;
}

- (void).cxx_destruct;
- (id)data;
- (void)done;
- (long long)appendData:(id)arg1;
- (id)rawData;
- (_Bool)isLastCharacterNewLine;
- (unsigned long long)count;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
