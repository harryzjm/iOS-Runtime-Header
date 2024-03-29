//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCUIAutomation/NSObject-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol XCUIRemoteSiriInterface <NSObject>
@property(readonly) _Bool supportsInjectingVoiceRecognitionAudioInputPaths;
@property(readonly) _Bool supportsStartingSiriUIRequestWithAudioFileURL;
- (void)injectVoiceRecognitionAudioInputPaths:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)injectAssistantRecognitionStrings:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)startSiriUIRequestWithAudioFileURL:(NSURL *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)startSiriUIRequestWithText:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)requestSiriEnabledStatus:(void (^)(_Bool, NSError *))arg1;
@end

