//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class NSDictionary, NSError, NSString;

@protocol CSAttSiriRecognitionTaskCompletionReceiver <NSObject>

@optional
- (void)didCompleteRecognitionTaskWithStatistics:(NSDictionary *)arg1 requestId:(NSString *)arg2 endpointMode:(long long)arg3 error:(NSError *)arg4;
@end

