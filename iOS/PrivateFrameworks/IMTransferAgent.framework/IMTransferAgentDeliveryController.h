//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class FTMessageDelivery;

@interface IMTransferAgentDeliveryController : NSObject
{
    FTMessageDelivery *_messageDelivery;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
- (void)sendFTMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
