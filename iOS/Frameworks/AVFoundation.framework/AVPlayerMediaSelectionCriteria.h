//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface AVPlayerMediaSelectionCriteria : NSObject
{
    void *_criteriaInternal;
}

- (id)description;
- (_Bool)precludeMultichannelAudio;
- (_Bool)preferMultichannelAudio;
- (id)precludedMediaSubTypes;
- (id)preferredMediaSubTypes;
@property(readonly, nonatomic) NSArray *preferredMediaCharacteristics;
@property(readonly, nonatomic) NSArray *preferredLanguages;
- (void)finalize;
- (void)dealloc;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 fallbackPreferredLanguages:(id)arg3 fallbackPreferredMediaCharacteristics:(id)arg4 captionDisplayType:(long long)arg5;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4 preferMultichannelAudio:(_Bool)arg5 precludeMultichannelAudio:(_Bool)arg6;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2 preferredMediaSubTypes:(id)arg3 precludedMediaSubTypes:(id)arg4;
- (id)initWithPreferredLanguages:(id)arg1 preferredMediaCharacteristics:(id)arg2;
- (id)init;
- (id)initWithFigDictionary:(id)arg1;
- (id)figDictionary;

@end
