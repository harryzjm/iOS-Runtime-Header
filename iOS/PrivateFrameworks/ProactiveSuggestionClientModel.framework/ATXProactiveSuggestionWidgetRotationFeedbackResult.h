//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ATXProactiveSuggestion;

@interface ATXProactiveSuggestionWidgetRotationFeedbackResult
{
    long long _engagementType;
    ATXProactiveSuggestion *_rotationSuggestion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ATXProactiveSuggestion *rotationSuggestion; // @synthesize rotationSuggestion=_rotationSuggestion;
@property(readonly, nonatomic) long long engagementType; // @synthesize engagementType=_engagementType;
- (id)initWithEngagementType:(long long)arg1 rotationSuggestion:(id)arg2 consumerSubType:(unsigned char)arg3 clientCacheUpdate:(id)arg4 uiCacheUpdate:(id)arg5 context:(id)arg6;

@end
