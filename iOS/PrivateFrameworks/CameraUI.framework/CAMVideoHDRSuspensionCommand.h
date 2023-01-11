//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMVideoHDRSuspensionCommand
{
    _Bool _videoHDRSuspended;
}

@property(readonly, nonatomic, getter=isVideoHDRSuspended) _Bool videoHDRSuspended; // @synthesize videoHDRSuspended=_videoHDRSuspended;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoHDRSuspended:(_Bool)arg1;

@end

