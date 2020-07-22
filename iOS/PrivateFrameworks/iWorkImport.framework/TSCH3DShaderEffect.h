//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSCH3DShaderEffectStateInfo-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCH3DShaderEffect : NSObject <TSCH3DShaderEffectStateInfo>
{
}

+ (id)stateSharingID;
+ (Class)stateClass;
+ (id)effect;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2 updateCurrentStates:(id)arg3;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)updateState:(id)arg1 effectsStates:(id)arg2;
- (void)addVariables:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)alwaysUploadData;
- (id)stateSharingID;
- (Class)stateClass;

@end
