//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpeakerRecognition/NSURLSessionDelegate-Protocol.h>

@class NSDictionary, NSString;

@interface CSVTUIASRGrammars : NSObject <NSURLSessionDelegate>
{
    NSDictionary *_grammar;
}

+ (id)sharedGrammars;
- (void).cxx_destruct;
- (id)_getLMEWithGrammar:(id)arg1 withLocale:(id)arg2;
- (id)getLMEforLocale:(id)arg1;
- (id)_getRegexPatternsWithGrammars:(id)arg1 withUtt:(long long)arg2 withLocale:(id)arg3;
- (id)getRegexPatternsForUtt:(long long)arg1 Locale:(id)arg2;
- (id)_getLeadingPatternsWithGrammars:(id)arg1 withLocale:(id)arg2;
- (id)getLeadingPatternsForUtt:(long long)arg1 Locale:(id)arg2;
- (id)_getTrailingPatternsWithGrammars:(id)arg1 withLocale:(id)arg2;
- (id)getTrailingPatternsForUtt:(long long)arg1 Locale:(id)arg2;
- (id)createGrammars;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
