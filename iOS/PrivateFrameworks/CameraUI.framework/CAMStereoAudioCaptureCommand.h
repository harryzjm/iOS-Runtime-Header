//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMStereoAudioCaptureCommand
{
    _Bool _stereoAudioCaptureEnabled;
}

@property(readonly, nonatomic, getter=isStereoAudioCaptureEnabled) _Bool stereoAudioCaptureEnabled; // @synthesize stereoAudioCaptureEnabled=_stereoAudioCaptureEnabled;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStereoAudioCaptureEnabled:(_Bool)arg1;

@end

