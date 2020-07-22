//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface MTLCompileOptionsInternal
{
    _Bool _userSetLanguageVersion;
    NSDictionary *_preprocessorMacros;
    _Bool _fastMathEnabled;
    _Bool _glBufferBindPoints;
    _Bool _debuggingEnabled;
    unsigned long long _languageVersion;
}

- (unsigned long long)languageVersion;
- (void)setGlBufferBindPoints:(_Bool)arg1;
- (_Bool)glBufferBindPoints;
- (void)setDebuggingEnabled:(_Bool)arg1;
- (_Bool)debuggingEnabled;
- (void)setFastMathEnabled:(_Bool)arg1;
- (_Bool)fastMathEnabled;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)setLanguageVersion:(unsigned long long)arg1;
- (void)setPreprocessorMacros:(id)arg1;
- (id)preprocessorMacros;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

