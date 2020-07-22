//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoLeash/NFMWhereIsMyCompanionConnectionProtocol-Protocol.h>

@class NSString, NSXPCConnection;

@interface NFMWhereIsMyCompanionConnection : NSObject <NFMWhereIsMyCompanionConnectionProtocol>
{
    NSXPCConnection *_serverConnection;
    CDUnknownBlockType _playSoundCompletion;
    CDUnknownBlockType _playSoundAndLEDCompletion;
}

+ (id)sharedDeviceConnection;
@property(copy, nonatomic) CDUnknownBlockType playSoundAndLEDCompletion; // @synthesize playSoundAndLEDCompletion=_playSoundAndLEDCompletion;
@property(copy, nonatomic) CDUnknownBlockType playSoundCompletion; // @synthesize playSoundCompletion=_playSoundCompletion;
@property(retain) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
- (void).cxx_destruct;
- (void)applicationIdentifierWithReply:(CDUnknownBlockType)arg1;
- (void)playedSoundAndLED:(_Bool)arg1;
- (void)playedSound:(_Bool)arg1;
- (void)playSoundAndLightsOnCompanionWithCompletion:(CDUnknownBlockType)arg1;
- (void)playSoundOnCompanionWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

