//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/NSCopying-Protocol.h>
#import <WiFiPeerToPeer/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface WiFiAwareDataSessionIssueReport : NSObject <NSSecureCoding, NSCopying>
{
    NSNumber *_rtpSequenceNumber;
    NSNumber *_rtpStartTime;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *rtpStartTime; // @synthesize rtpStartTime=_rtpStartTime;
@property(copy, nonatomic) NSNumber *rtpSequenceNumber; // @synthesize rtpSequenceNumber=_rtpSequenceNumber;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)rtpStartTimeEquals:(id)arg1;
- (_Bool)rtpSequenceNumberEquals:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
