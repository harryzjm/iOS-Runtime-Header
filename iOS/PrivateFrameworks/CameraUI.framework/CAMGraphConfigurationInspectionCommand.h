//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMCaptureGraphConfiguration;

@interface CAMGraphConfigurationInspectionCommand
{
    CAMCaptureGraphConfiguration *__knownGraphConfiguration;
    CAMCaptureGraphConfiguration *__resolvedGraphConfiguration;
}

@property(retain, nonatomic, setter=_setResolvedGraphConfiguration:) CAMCaptureGraphConfiguration *_resolvedGraphConfiguration; // @synthesize _resolvedGraphConfiguration=__resolvedGraphConfiguration;
@property(readonly, nonatomic) CAMCaptureGraphConfiguration *_knownGraphConfiguration; // @synthesize _knownGraphConfiguration=__knownGraphConfiguration;
- (void).cxx_destruct;
- (id)userInfo;
- (long long)_resolvedVideoConfigurationFromContext:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKnownGraphConfiguration:(id)arg1;

@end

