//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FinanceDaemon/NSObject-Protocol.h>

@class NSArray, NSString, PKApplicationMessageRequest;

@protocol PKApplicationMessageSink <NSObject>
@property(readonly, nonatomic) NSArray *registrations;
@property(readonly, nonatomic) long long source;
- (void)didUpdateMessageContentForIdentifier:(NSString *)arg1;
- (_Bool)hasMessageWithIdentifier:(NSString *)arg1;
- (void)unregisterMessageForIdentifier:(NSString *)arg1;
- (_Bool)registerOrUpdateMessageForIdentifier:(NSString *)arg1 withRequest:(PKApplicationMessageRequest *)arg2;
- (_Bool)updateMessageForIdentifier:(NSString *)arg1 withRequest:(PKApplicationMessageRequest *)arg2;
- (_Bool)registerMessageForIdentifier:(NSString *)arg1 withRequest:(PKApplicationMessageRequest *)arg2;
@end

