//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface PKTapToRadarPrompt : NSObject <NSSecureCoding>
{
    NSString *_reason;
    NSDate *_lastPromptDate;
    long long _promptCount;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long promptCount; // @synthesize promptCount=_promptCount;
@property(copy, nonatomic) NSDate *lastPromptDate; // @synthesize lastPromptDate=_lastPromptDate;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
