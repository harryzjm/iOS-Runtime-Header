//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface CTCallForwardingValue : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _enabled;
    int _reason;
    int _clss;
    NSString *_saveNumber;
    NSNumber *_noReplyTime;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *noReplyTime; // @synthesize noReplyTime=_noReplyTime;
@property(retain, nonatomic) NSString *saveNumber; // @synthesize saveNumber=_saveNumber;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) int clss; // @synthesize clss=_clss;
@property(nonatomic) int reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

