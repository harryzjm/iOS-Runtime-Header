//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LighthouseReferenceResolution/NSObject-Protocol.h>

@class CDMNluRequestID, CDMNluResponse, NSError;

@protocol CDMClientDelegate <NSObject>

@optional
- (void)processCDMNluRequestCallback:(CDMNluResponse *)arg1;
- (void)processCDMNluRequestErrorCallback:(CDMNluRequestID *)arg1 error:(NSError *)arg2;
@end

