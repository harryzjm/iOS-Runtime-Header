//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXDeviceSetupOptionsMutating-Protocol.h>

@class NSString, SVXDeviceSetupOptions;

__attribute__((visibility("hidden")))
@interface _SVXDeviceSetupOptionsMutation : NSObject <SVXDeviceSetupOptionsMutating>
{
    SVXDeviceSetupOptions *_baseModel;
    NSString *_languageCode;
    long long _gender;
    long long _hasActiveAccount;
    long long _isNewsRestricted;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasLanguageCode:1;
        unsigned int hasGender:1;
        unsigned int hasHasActiveAccount:1;
        unsigned int hasIsNewsRestricted:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setIsNewsRestricted:(long long)arg1;
- (void)setHasActiveAccount:(long long)arg1;
- (void)setGender:(long long)arg1;
- (void)setLanguageCode:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
