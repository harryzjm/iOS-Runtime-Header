//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary;

@interface AFOpportuneSpeakingModelFeedback : NSObject <NSSecureCoding>
{
    NSDate *_lastNegativeFeedback;
    NSDictionary *_negativeFeedbackByContact;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *negativeFeedbackByContact; // @synthesize negativeFeedbackByContact=_negativeFeedbackByContact;
@property(retain, nonatomic) NSDate *lastNegativeFeedback; // @synthesize lastNegativeFeedback=_lastNegativeFeedback;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
