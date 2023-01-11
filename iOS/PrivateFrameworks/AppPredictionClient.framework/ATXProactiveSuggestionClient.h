//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXProactiveSuggestionClientProtocol-Protocol.h>

@class ATXUICacheManager, NSString;

@interface ATXProactiveSuggestionClient : NSObject <ATXProactiveSuggestionClientProtocol>
{
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
}

- (void).cxx_destruct;
- (id)suggestionLayoutFromCache;
- (id)initWithConsumerSubType:(unsigned char)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
