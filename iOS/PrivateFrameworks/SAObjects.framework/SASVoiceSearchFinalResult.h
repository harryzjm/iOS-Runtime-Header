//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SASVoiceSearchFinalResult
{
}

+ (id)voiceSearchFinalResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)voiceSearchFinalResult;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *voiceSearchResults;
@property(copy, nonatomic) NSString *recognitionText;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

