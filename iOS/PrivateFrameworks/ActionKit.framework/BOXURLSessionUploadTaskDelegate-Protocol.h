//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/BOXURLSessionTaskDelegate-Protocol.h>

@class NSURLSessionTask;

@protocol BOXURLSessionUploadTaskDelegate <BOXURLSessionTaskDelegate>

@optional
- (void)sessionTask:(NSURLSessionTask *)arg1 didSendTotalBytes:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
@end
