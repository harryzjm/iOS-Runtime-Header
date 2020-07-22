//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface OKProducerPresetsManager : NSObject
{
    NSMutableDictionary *_presetsByFamily;
}

+ (id)defaultManager;
- (id)defaultPresets;
- (id)presetForUniqueIdentifier:(id)arg1;
- (id)presetWithUniqueIdentifier:(id)arg1;
- (id)defaultPresetsForFamily:(id)arg1;
- (id)presetsForFamily:(id)arg1;
- (id)_defaultPresetsByName;
- (id)_presetsByNameForFamily:(id)arg1;
- (void)dealloc;
- (id)init;

@end
