//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/CXCopying-Protocol.h>
#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class CXHandle, CXHandoffContext, NSDictionary, NSSet, NSString, NSUUID;

@interface CXCallUpdate : NSObject <NSSecureCoding, CXCopying, NSCopying>
{
    _Bool _supportsHolding;
    _Bool _supportsGrouping;
    _Bool _supportsUngrouping;
    _Bool _supportsDTMF;
    _Bool _hasVideo;
    _Bool _emergency;
    _Bool _usingBaseband;
    _Bool _blocked;
    _Bool _mayRequireBreakBeforeMake;
    _Bool _supportsTTYWithVoice;
    _Bool _requiresInCallSounds;
    _Bool _prefersExclusiveAccessToCellularNetwork;
    _Bool _remoteUplinkMuted;
    _Bool _shouldSuppressInCallUI;
    _Bool _supportsUnambiguousMultiPartyState;
    _Bool _supportsAddCall;
    _Bool _supportsSendingToVoicemail;
    struct CXCallUpdateHasSet _hasSet;
    CXHandle *_remoteHandle;
    NSString *_localizedCallerName;
    NSUUID *_UUID;
    long long _ttyType;
    long long _inCallSoundRegion;
    NSString *_audioCategory;
    NSString *_audioMode;
    long long _audioInterruptionProvider;
    long long _audioInterruptionOperationMode;
    NSString *_crossDeviceIdentifier;
    NSUUID *_localSenderIdentityUUID;
    NSSet *_remoteParticipantHandles;
    NSSet *_activeRemoteParticipantHandles;
    CXHandoffContext *_handoffContext;
    NSDictionary *_context;
    long long _videoStreamToken;
}

+ (_Bool)supportsSecureCoding;
+ (id)callUpdateWithDefaultValuesSet;
@property(nonatomic) long long videoStreamToken; // @synthesize videoStreamToken=_videoStreamToken;
@property(nonatomic) _Bool supportsSendingToVoicemail; // @synthesize supportsSendingToVoicemail=_supportsSendingToVoicemail;
@property(nonatomic) _Bool supportsAddCall; // @synthesize supportsAddCall=_supportsAddCall;
@property(nonatomic) _Bool supportsUnambiguousMultiPartyState; // @synthesize supportsUnambiguousMultiPartyState=_supportsUnambiguousMultiPartyState;
@property(nonatomic) _Bool shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
@property(nonatomic, getter=isRemoteUplinkMuted) _Bool remoteUplinkMuted; // @synthesize remoteUplinkMuted=_remoteUplinkMuted;
@property(nonatomic) _Bool prefersExclusiveAccessToCellularNetwork; // @synthesize prefersExclusiveAccessToCellularNetwork=_prefersExclusiveAccessToCellularNetwork;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) CXHandoffContext *handoffContext; // @synthesize handoffContext=_handoffContext;
@property(copy, nonatomic) NSSet *activeRemoteParticipantHandles; // @synthesize activeRemoteParticipantHandles=_activeRemoteParticipantHandles;
@property(copy, nonatomic) NSSet *remoteParticipantHandles; // @synthesize remoteParticipantHandles=_remoteParticipantHandles;
@property(copy, nonatomic) NSUUID *localSenderIdentityUUID; // @synthesize localSenderIdentityUUID=_localSenderIdentityUUID;
@property(copy, nonatomic) NSString *crossDeviceIdentifier; // @synthesize crossDeviceIdentifier=_crossDeviceIdentifier;
@property(nonatomic) long long audioInterruptionOperationMode; // @synthesize audioInterruptionOperationMode=_audioInterruptionOperationMode;
@property(nonatomic) long long audioInterruptionProvider; // @synthesize audioInterruptionProvider=_audioInterruptionProvider;
@property(copy, nonatomic) NSString *audioMode; // @synthesize audioMode=_audioMode;
@property(copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property(nonatomic) long long inCallSoundRegion; // @synthesize inCallSoundRegion=_inCallSoundRegion;
@property(nonatomic) _Bool requiresInCallSounds; // @synthesize requiresInCallSounds=_requiresInCallSounds;
@property(nonatomic) _Bool supportsTTYWithVoice; // @synthesize supportsTTYWithVoice=_supportsTTYWithVoice;
@property(nonatomic, setter=setTTYType:) long long ttyType; // @synthesize ttyType=_ttyType;
@property(nonatomic) _Bool mayRequireBreakBeforeMake; // @synthesize mayRequireBreakBeforeMake=_mayRequireBreakBeforeMake;
@property(nonatomic, getter=isBlocked) _Bool blocked; // @synthesize blocked=_blocked;
@property(nonatomic, getter=isUsingBaseband) _Bool usingBaseband; // @synthesize usingBaseband=_usingBaseband;
@property(nonatomic, getter=isEmergency) _Bool emergency; // @synthesize emergency=_emergency;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) struct CXCallUpdateHasSet hasSet; // @synthesize hasSet=_hasSet;
@property(nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(nonatomic) _Bool supportsDTMF; // @synthesize supportsDTMF=_supportsDTMF;
@property(nonatomic) _Bool supportsUngrouping; // @synthesize supportsUngrouping=_supportsUngrouping;
@property(nonatomic) _Bool supportsGrouping; // @synthesize supportsGrouping=_supportsGrouping;
@property(nonatomic) _Bool supportsHolding; // @synthesize supportsHolding=_supportsHolding;
@property(copy, nonatomic) NSString *localizedCallerName; // @synthesize localizedCallerName=_localizedCallerName;
@property(copy, nonatomic) CXHandle *remoteHandle; // @synthesize remoteHandle=_remoteHandle;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)sanitizedCopy;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateWithUpdate:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

