//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFSiriTaskUsageResult.h>

@interface STShowDraftMessageUsageResult : AFSiriTaskUsageResult
{
    long long _resultCode;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long resultCode; // @synthesize resultCode=_resultCode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_resultDescription;
- (id)description;

@end

