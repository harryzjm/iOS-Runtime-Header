//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CSSpeakerModel : NSObject
{
    NSString *_modelFileName;
    NSString *_languageCode;
    NSString *_modelPath;
    NSString *_utteranceDirectory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isValid;
- (void)discard;
@property(readonly, nonatomic) _Bool needsRetrain;
- (_Bool)_isDirectoryEmpty:(id)arg1;
@property(readonly, nonatomic) NSArray *enrollmentUtterance;
@property(readonly, nonatomic) NSString *utteranceDirectory;
- (id)modelDirectory;
@property(readonly, nonatomic) NSString *modelPath;
- (id)_satPath;
- (void)_createDirectoryIfNotExist:(id)arg1;
- (id)initWithSpeakerModelFileName:(id)arg1 languageCode:(id)arg2;

@end

