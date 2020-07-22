//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXVideoAspectRatioDescriptor-Protocol.h>

@class CXHandle, NSDate, NSString;

@interface CXStartCallAction <CXVideoAspectRatioDescriptor>
{
    _Bool _video;
    _Bool _relay;
    _Bool _upgrade;
    _Bool _retry;
    _Bool _emergency;
    _Bool _voicemail;
    CXHandle *_handle;
    NSString *_contactIdentifier;
    NSDate *_dateStarted;
    long long _ttyType;
    struct CGSize _localPortraitAspectRatio;
    struct CGSize _localLandscapeAspectRatio;
}

+ (_Bool)supportsSecureCoding;
+ (double)timeout;
@property(nonatomic, setter=setTTYType:) long long ttyType; // @synthesize ttyType=_ttyType;
@property(nonatomic, getter=isVoicemail) _Bool voicemail; // @synthesize voicemail=_voicemail;
@property(nonatomic, getter=isEmergency) _Bool emergency; // @synthesize emergency=_emergency;
@property(nonatomic, getter=isRetry) _Bool retry; // @synthesize retry=_retry;
@property(nonatomic, getter=isUpgrade) _Bool upgrade; // @synthesize upgrade=_upgrade;
@property(nonatomic, getter=isRelay) _Bool relay; // @synthesize relay=_relay;
@property(copy, nonatomic) NSDate *dateStarted; // @synthesize dateStarted=_dateStarted;
@property(nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy, nonatomic) CXHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) struct CGSize localLandscapeAspectRatio; // @synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio;
@property(nonatomic) struct CGSize localPortraitAspectRatio; // @synthesize localPortraitAspectRatio=_localPortraitAspectRatio;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateAsFulfilledWithDateStarted:(id)arg1;
- (void)fulfillWithDateStarted:(id)arg1;
- (void)fulfill;
- (id)customDescription;
- (id)initWithCallUUID:(id)arg1 handle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

