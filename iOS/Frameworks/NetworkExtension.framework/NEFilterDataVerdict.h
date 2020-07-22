//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSURL;

@interface NEFilterDataVerdict <NSSecureCoding, NSCopying>
{
    unsigned long long _passBytes;
    unsigned long long _peekBytes;
    NSURL *_url;
}

+ (id)dataVerdictWithPassBytes:(unsigned long long)arg1 peekBytes:(unsigned long long)arg2;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2;
+ (id)dropVerdict;
+ (id)allowVerdict;
+ (id)needRulesVerdict;
+ (_Bool)supportsSecureCoding;
@property(retain) NSURL *url; // @synthesize url=_url;
@property unsigned long long peekBytes; // @synthesize peekBytes=_peekBytes;
@property unsigned long long passBytes; // @synthesize passBytes=_passBytes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

