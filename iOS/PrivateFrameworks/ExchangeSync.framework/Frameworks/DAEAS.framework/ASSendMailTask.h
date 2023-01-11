//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface ASSendMailTask
{
    NSData *_mimeMessage;
    NSString *_messageID;
}

- (void).cxx_destruct;
- (_Bool)processContext:(id)arg1;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)contentType;
- (id)command;
- (id)parameterData;
- (int)commandCode;
- (id)requestBody;
- (id)requestBodyStreamOutKnownSize:(int *)arg1;
- (void)finishWithError:(id)arg1;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (id)initWithMessage:(id)arg1 messageID:(id)arg2;

@end
