//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol BCSCodePayload, BCSParsedData;

@protocol BCSNotificationServiceProtocol
- (void)cancelNotificationsForCodeType:(long long)arg1;
- (void)notifyParsedCodeWithData:(id <BCSParsedData>)arg1 codePayload:(id <BCSCodePayload>)arg2 shouldReplacePreviousNotifications:(_Bool)arg3 reply:(void (^)(NSError *, AWDBarcodeSupportCodeDetectedEvent *))arg4;
@end

