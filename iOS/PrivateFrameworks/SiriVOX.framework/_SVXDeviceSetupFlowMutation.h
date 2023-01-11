//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXDeviceSetupFlowMutating-Protocol.h>

@class NSArray, NSString, SVXDeviceSetupFlow;

__attribute__((visibility("hidden")))
@interface _SVXDeviceSetupFlowMutation : NSObject <SVXDeviceSetupFlowMutating>
{
    SVXDeviceSetupFlow *_baseModel;
    NSString *_identifier;
    NSString *_languageCode;
    long long _gender;
    NSArray *_scenes;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIdentifier:1;
        unsigned int hasLanguageCode:1;
        unsigned int hasGender:1;
        unsigned int hasScenes:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setScenes:(id)arg1;
- (void)setGender:(long long)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
