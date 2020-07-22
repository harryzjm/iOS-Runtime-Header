//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFAnalyticsEvent, NSDate, NSString;

@interface AFAnalyticsEventRecord : NSObject <NSSecureCoding>
{
    AFAnalyticsEvent *_event;
    NSString *_streamUID;
    NSDate *_dateCreated;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, copy, nonatomic) NSString *streamUID; // @synthesize streamUID=_streamUID;
@property(readonly, copy, nonatomic) AFAnalyticsEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1 streamUID:(id)arg2 dateCreated:(id)arg3;

@end

