//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MRAVOutputDevice, MRExternalDevice, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MRAVEndpoint : NSObject
{
    NSArray *_outputDevices;
    MRExternalDevice *_externalDevice;
    MRAVOutputDevice *_designatedGroupLeader;
    NSString *_localizedName;
    NSString *_uniqueIdentifier;
}

@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain, nonatomic) MRAVOutputDevice *designatedGroupLeader; // @synthesize designatedGroupLeader=_designatedGroupLeader;
@property(retain, nonatomic) MRExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(copy, nonatomic) NSArray *outputDevices; // @synthesize outputDevices=_outputDevices;
- (void)_connectToExternalDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestSharedAudioPresentationOutputContextModificationWithAddingDevices:(id)arg1 removingDevices:(id)arg2 replyQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_initializeExternalDeviceIfPossible;
- (void)forceEnableRemoteControllability;
- (void)removeOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)containsOutputDevice:(id)arg1;
@property(readonly, nonatomic, getter=isLocalEndpoint) _Bool localEndpoint;
- (id)description;
- (void)dealloc;
- (id)initWithOutputDevices:(id)arg1;

@end
