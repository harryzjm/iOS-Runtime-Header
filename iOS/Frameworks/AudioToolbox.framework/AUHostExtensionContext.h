//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <AudioToolbox/AUAudioUnitHostProtocol-Protocol.h>
#import <AudioToolbox/_AURemoteParameterSynchronization-Protocol.h>

@class AUAudioUnit_XH, NSExtension, NSUUID;
@protocol AUAudioUnitXPCProtocol;

@interface AUHostExtensionContext : NSExtensionContext <AUAudioUnitHostProtocol, _AURemoteParameterSynchronization>
{
    NSExtension *_extension;
    NSUUID *_requestIdentifier;
    AUAudioUnit_XH *_audioUnit;
    id <AUAudioUnitXPCProtocol> _remote;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(nonatomic) id <AUAudioUnitXPCProtocol> remote; // @synthesize remote=_remote;
@property(nonatomic) AUAudioUnit_XH *audioUnit; // @synthesize audioUnit=_audioUnit;
@property(retain, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;
- (void)propertiesChanged:(id)arg1;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (void)dealloc;

@end
