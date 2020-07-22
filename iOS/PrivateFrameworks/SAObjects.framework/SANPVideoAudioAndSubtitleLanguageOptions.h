//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString, SANPVideoLanguageOption;

@interface SANPVideoAudioAndSubtitleLanguageOptions <SAAceSerializable>
{
}

+ (id)audioAndSubtitleLanguageOptionsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)audioAndSubtitleLanguageOptions;
@property(retain, nonatomic) SANPVideoLanguageOption *currentSubtitles;
@property(retain, nonatomic) SANPVideoLanguageOption *currentAudioTrack;
@property(copy, nonatomic) NSArray *availableTracks;
@property(copy, nonatomic) NSArray *availableSubtitles;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
