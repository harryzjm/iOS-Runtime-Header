//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/NSCopying-Protocol.h>
#import <VoiceShortcuts/VCShortcutSyncService-Protocol.h>

@class NSString, NSURL, VCCompanionSyncService;

@interface VCNRDeviceSyncService : NSObject <NSCopying, VCShortcutSyncService>
{
    NSString *_syncServiceIdentifier;
    NSURL *_directoryURL;
    long long _protocolVersion;
    VCCompanionSyncService *_service;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak VCCompanionSyncService *service; // @synthesize service=_service;
@property(readonly, nonatomic) long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly, copy, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
@property(readonly, copy, nonatomic) NSString *syncServiceIdentifier; // @synthesize syncServiceIdentifier=_syncServiceIdentifier;
- (void)requestFullResync;
- (void)requestSync;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCompanionSyncService:(id)arg1 device:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
