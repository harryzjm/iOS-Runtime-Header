//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class INUnsendMessagesIntent;

@protocol INUnsendMessagesIntentHandling <NSObject>
- (void)handleUnsendMessages:(INUnsendMessagesIntent *)arg1 completion:(void (^)(INUnsendMessagesIntentResponse *))arg2;

@optional
- (void)confirmUnsendMessages:(INUnsendMessagesIntent *)arg1 completion:(void (^)(INUnsendMessagesIntentResponse *))arg2;
@end

