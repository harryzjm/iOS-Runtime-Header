//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SGMessagePair : NSObject
{
    NSString *_reply;
    NSString *_prompt;
    NSString *_handle;
    NSDate *_sentAt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *sentAt; // @synthesize sentAt=_sentAt;
@property(retain, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(retain, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) NSString *reply; // @synthesize reply=_reply;
- (id)initWithReply:(id)arg1 prompt:(id)arg2 handle:(id)arg3 sentAt:(id)arg4;

@end
