//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface CDMToken : NSObject
{
    NSMutableArray *_normalizedValues;
    _Bool _isSignificant;
    _Bool _isWhiteSpace;
    NSString *_value;
    long long _begin;
    long long _end;
    NSString *_cleanValue;
    long long _tokenIndex;
    long long _nonWhitespaceTokenIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *normalizedValues; // @synthesize normalizedValues=_normalizedValues;
@property(readonly, nonatomic) long long nonWhitespaceTokenIndex; // @synthesize nonWhitespaceTokenIndex=_nonWhitespaceTokenIndex;
@property(readonly, nonatomic) long long tokenIndex; // @synthesize tokenIndex=_tokenIndex;
@property(readonly, nonatomic) NSString *cleanValue; // @synthesize cleanValue=_cleanValue;
@property(readonly, nonatomic) _Bool isWhiteSpace; // @synthesize isWhiteSpace=_isWhiteSpace;
@property(readonly, nonatomic) _Bool isSignificant; // @synthesize isSignificant=_isSignificant;
@property(readonly, nonatomic) long long end; // @synthesize end=_end;
@property(readonly, nonatomic) long long begin; // @synthesize begin=_begin;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) NSArray *cleanValues;
@property(readonly, nonatomic, getter=getHasCleanValues) _Bool hasCleanValues;
- (void)addNormalizedValue:(id)arg1;
- (_Bool)hasValue:(id)arg1 from:(long long)arg2 to:(long long)arg3;
- (id)initWithProtoToken:(id)arg1;
- (id)initWithValue:(id)arg1 begin:(long long)arg2 end:(long long)arg3 significant:(_Bool)arg4 whitespace:(_Bool)arg5 cleanValue:(id)arg6 tokenIndex:(long long)arg7 nonWhitespaceTokenIndex:(long long)arg8;
- (id)initWithValue:(id)arg1 begin:(long long)arg2 end:(long long)arg3 significant:(_Bool)arg4 whitespace:(_Bool)arg5 cleanValue:(id)arg6;
- (id)initWithValue:(id)arg1 begin:(long long)arg2 end:(long long)arg3 significant:(_Bool)arg4 whitespace:(_Bool)arg5;
- (id)initWithValue:(id)arg1 begin:(long long)arg2 end:(long long)arg3 significant:(_Bool)arg4;
- (id)initWithValue:(id)arg1 begin:(long long)arg2 end:(long long)arg3;
- (id)initWithValue:(id)arg1;

@end
