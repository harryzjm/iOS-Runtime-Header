//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSDictionary;

@interface PSUIPhotosPrivacyController : PSListController
{
    NSDictionary *_serviceLevelsByAuthType;
}

- (void).cxx_destruct;
- (id)_photosAuthDescriptionForAppBundle:(struct __CFBundle *)arg1;
- (id)_photosStatus:(id)arg1;
- (id)_specifiersForService:(struct __CFString *)arg1;
- (id)specifiers;
- (id)init;

@end

