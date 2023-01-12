//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveSuggestionClientModel/NSSecureCoding-Protocol.h>

@class ATXBlendingModelUICacheUpdate, ATXClientModelCacheUpdate;
@protocol ATXProactiveSuggestionFeedbackContextProtocol;

@interface ATXProactiveSuggestionFeedbackResult : NSObject <NSSecureCoding>
{
    unsigned char _consumerSubType;
    long long _sessionType;
    ATXClientModelCacheUpdate *_clientCacheUpdate;
    ATXBlendingModelUICacheUpdate *_uiCacheUpdate;
    id <ATXProactiveSuggestionFeedbackContextProtocol> _context;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <ATXProactiveSuggestionFeedbackContextProtocol> context; // @synthesize context=_context;
@property(readonly, nonatomic) ATXBlendingModelUICacheUpdate *uiCacheUpdate; // @synthesize uiCacheUpdate=_uiCacheUpdate;
@property(readonly, nonatomic) ATXClientModelCacheUpdate *clientCacheUpdate; // @synthesize clientCacheUpdate=_clientCacheUpdate;
@property(readonly, nonatomic) long long sessionType; // @synthesize sessionType=_sessionType;
@property(readonly, nonatomic) unsigned char consumerSubType; // @synthesize consumerSubType=_consumerSubType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)validContextClassNames;
- (id)initWithConsumerSubType:(unsigned char)arg1 sessionType:(long long)arg2 clientCacheUpdate:(id)arg3 uiCacheUpdate:(id)arg4 context:(id)arg5;

@end
