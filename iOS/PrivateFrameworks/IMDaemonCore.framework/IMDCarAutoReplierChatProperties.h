//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IMDCarAutoReplierChatProperties : NSObject
{
    NSMutableArray *_suppressedMessageIDs;
    _Bool _autoReplySent;
    _Bool _urgent;
}

@property(nonatomic, getter=isUrgent) _Bool urgent; // @synthesize urgent=_urgent;
@property(nonatomic) _Bool autoReplySent; // @synthesize autoReplySent=_autoReplySent;
- (id)popSuppressedMessages;
- (void)addSuppressedMessage:(id)arg1;
- (void)dealloc;
- (id)init;

@end

