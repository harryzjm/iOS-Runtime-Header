//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GTReplayRequest : NSObject
{
    unsigned long long _requestID;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initNoRequestID;
- (id)init;

@end

