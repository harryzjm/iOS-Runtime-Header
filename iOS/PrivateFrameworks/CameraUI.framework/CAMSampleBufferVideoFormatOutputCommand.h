//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMSampleBufferVideoFormatOutputCommand
{
    long long __videoFormat;
}

@property(readonly, nonatomic) long long _videoFormat; // @synthesize _videoFormat=__videoFormat;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleBufferVideoFormat:(long long)arg1;

@end
