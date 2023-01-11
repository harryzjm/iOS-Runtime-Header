//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAnswerStructuredAnswer-Protocol.h>

@class NSArray, NSString, NSURL;

@interface SAAnswerDictionaryStructuredAnswer <SAAnswerStructuredAnswer>
{
}

+ (id)dictionaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)dictionaryStructuredAnswer;
@property(copy, nonatomic) NSString *word;
@property(copy, nonatomic) NSArray *syllables;
@property(copy, nonatomic) NSURL *sound;
@property(copy, nonatomic) NSString *phoneticPronunciation;
@property(copy, nonatomic) NSArray *definitionGroups;
@property(copy, nonatomic) NSString *category; // @dynamic category;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
