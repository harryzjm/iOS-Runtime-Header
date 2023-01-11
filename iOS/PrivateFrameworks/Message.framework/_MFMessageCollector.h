//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MessageConsumer-Protocol.h>
#import <Message/QueryProgressMonitor-Protocol.h>

@class MFActivityMonitor, NSMutableArray;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor>
{
    NSMutableArray *_messages;
    MFActivityMonitor *_monitor;
    CDUnknownBlockType _transmogrifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType transmogrifier; // @synthesize transmogrifier=_transmogrifier;
- (_Bool)shouldCancel;
- (void)newMessagesAvailable:(id)arg1;
- (id)copyMessages;
- (id)messages;
- (id)init;

@end
