//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNGeminiResult, NSDictionary;

__attribute__((visibility("hidden")))
@interface CNContactGeminiIconProvider : NSObject
{
    CNGeminiResult *_geminiResult;
    NSDictionary *_geminiIconDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *geminiIconDictionary; // @synthesize geminiIconDictionary=_geminiIconDictionary;
@property(retain, nonatomic) CNGeminiResult *geminiResult; // @synthesize geminiResult=_geminiResult;
- (id)_simLabelImageWithLocalizedBadgeLabel:(id)arg1;
- (_Bool)_checkAvailableGeminiChannelsUpdatedForGeminiResult:(id)arg1;
- (void)updateGeminiIcons;
- (id)geminiIconForGeminiChannelIdentifier:(id)arg1;

@end

