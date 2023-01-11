//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXDeviceSetupFlowSceneMutating-Protocol.h>

@class NSArray, NSString, SVXDeviceSetupFlowScene, SVXDeviceSetupFlowSiriCapabilitiesHint;

__attribute__((visibility("hidden")))
@interface _SVXDeviceSetupFlowSceneMutation : NSObject <SVXDeviceSetupFlowSceneMutating>
{
    SVXDeviceSetupFlowScene *_baseModel;
    long long _sceneID;
    NSString *_speakableText;
    NSArray *_displayKeyFrames;
    SVXDeviceSetupFlowSiriCapabilitiesHint *_siriCapabilitiesHint;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasSceneID:1;
        unsigned int hasSpeakableText:1;
        unsigned int hasDisplayKeyFrames:1;
        unsigned int hasSiriCapabilitiesHint:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setSiriCapabilitiesHint:(id)arg1;
- (void)setDisplayKeyFrames:(id)arg1;
- (void)setSpeakableText:(id)arg1;
- (void)setSceneID:(long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
