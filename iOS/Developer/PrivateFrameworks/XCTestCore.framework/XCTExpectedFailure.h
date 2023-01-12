//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTestCore/NSSecureCoding-Protocol.h>

@class NSString, XCTIssue;

@interface XCTExpectedFailure : NSObject <NSSecureCoding>
{
    NSString *_failureReason;
    XCTIssue *_issue;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) XCTIssue *issue; // @synthesize issue=_issue;
@property(readonly, copy) NSString *failureReason; // @synthesize failureReason=_failureReason;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFailureReason:(id)arg1 issue:(id)arg2;

@end
