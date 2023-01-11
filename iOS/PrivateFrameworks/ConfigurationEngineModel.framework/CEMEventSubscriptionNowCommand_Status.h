//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CEMEventSubscriptionNowCommand_Status
{
    NSArray *_statusInactiveEvents;
    NSArray *_statusUnknownEvents;
}

+ (id)buildRequiredOnly;
+ (id)buildWithInactiveEvents:(id)arg1 withUnknownEvents:(id)arg2;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSArray *statusUnknownEvents; // @synthesize statusUnknownEvents=_statusUnknownEvents;
@property(copy, nonatomic) NSArray *statusInactiveEvents; // @synthesize statusInactiveEvents=_statusInactiveEvents;
- (void).cxx_destruct;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

