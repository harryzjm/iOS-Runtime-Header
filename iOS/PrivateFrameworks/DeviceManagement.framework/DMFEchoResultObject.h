//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFEchoResultObject : CATTaskResultObject
{
    NSString *_echo;
    NSString *_resultStatus;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *resultStatus; // @synthesize resultStatus=_resultStatus;
@property(copy, nonatomic) NSString *echo; // @synthesize echo=_echo;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

