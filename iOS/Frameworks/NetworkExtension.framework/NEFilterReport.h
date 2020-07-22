//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEFilterFlow;

@interface NEFilterReport : NSObject <NSSecureCoding, NSCopying>
{
    NEFilterFlow *_flow;
    long long _action;
}

+ (_Bool)supportsSecureCoding;
@property long long action; // @synthesize action=_action;
@property(copy) NEFilterFlow *flow; // @synthesize flow=_flow;
- (void).cxx_destruct;
- (id)initWithFlow:(id)arg1 action:(long long)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

