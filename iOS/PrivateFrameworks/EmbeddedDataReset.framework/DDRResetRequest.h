//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmbeddedDataReset/NSSecureCoding-Protocol.h>

@class DDRResetOptions, NSString;

@interface DDRResetRequest : NSObject <NSSecureCoding>
{
    long long _mode;
    DDRResetOptions *_options;
    NSString *_reason;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) DDRResetOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(long long)arg1 options:(id)arg2 reason:(id)arg3;

@end
