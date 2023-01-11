//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEFilterAbsoluteVerdict <NSSecureCoding, NSCopying>
{
    unsigned long long _inboundPassOffset;
    unsigned long long _inboundPeekOffset;
    unsigned long long _outboundPassOffset;
    unsigned long long _outboundPeekOffset;
    long long _statisticsReportFrequency;
}

+ (_Bool)supportsSecureCoding;
@property long long statisticsReportFrequency; // @synthesize statisticsReportFrequency=_statisticsReportFrequency;
@property unsigned long long outboundPeekOffset; // @synthesize outboundPeekOffset=_outboundPeekOffset;
@property unsigned long long outboundPassOffset; // @synthesize outboundPassOffset=_outboundPassOffset;
@property unsigned long long inboundPeekOffset; // @synthesize inboundPeekOffset=_inboundPeekOffset;
@property unsigned long long inboundPassOffset; // @synthesize inboundPassOffset=_inboundPassOffset;
- (long long)filterAction;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithDrop:(_Bool)arg1 inboundPassOffset:(unsigned long long)arg2 inboundPeekOffset:(unsigned long long)arg3 outboundPassOffset:(unsigned long long)arg4 outboundPeekOffset:(unsigned long long)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
