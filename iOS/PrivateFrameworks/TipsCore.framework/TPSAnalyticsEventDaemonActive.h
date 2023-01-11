//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TPSAnalyticsEventDaemonActive
{
    _Bool _alreadyRunning;
    NSString *_reason;
}

+ (id)eventWithReason:(id)arg1 alreadyRunning:(_Bool)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)mutableAnalyticsEventRepresentation;
- (id)eventName;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithReason:(id)arg1 alreadyRunning:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;

@end
