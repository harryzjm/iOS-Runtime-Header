//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCVideoSourceTokenManager : NSObject
{
    VCVideoSourceTokenManager *_tokenManager;
    NSMutableDictionary *_videoSourceTokens;
    NSMutableDictionary *_sourceNames;
    unsigned long long _identifierSeeds[4];
    NSObject<OS_dispatch_queue> *_tokenManagerQueue;
}

+ (id)sharedManager;
- (id)deviceNameForToken:(struct _VCVideoSourceToken)arg1;
- (struct _VCVideoSourceToken)tokenForDeviceName:(id)arg1 sourceType:(int)arg2;
- (struct _VCVideoSourceToken)createtokenForDeviceName:(id)arg1 sourceType:(int)arg2;
- (void)dealloc;
- (id)init;

@end
