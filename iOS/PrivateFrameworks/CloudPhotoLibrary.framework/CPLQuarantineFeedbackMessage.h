//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLQuarantineFeedbackMessage
{
    NSString *_reason;
    Class _recordClass;
}

+ (id)feedbackType;
@property(readonly, nonatomic) Class recordClass; // @synthesize recordClass=_recordClass;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)serverMessage;
- (id)initWithClass:(Class)arg1 reason:(id)arg2;

@end
