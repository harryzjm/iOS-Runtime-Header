//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLValueExpressable-Protocol.h>

@class NSString;

@interface EFSQLLikeEscapedExpression : NSObject <EFSQLValueExpressable>
{
    unsigned short _escapeCharacter;
    NSString *_value;
    unsigned long long _pattern;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long pattern; // @synthesize pattern=_pattern;
@property(readonly, nonatomic) unsigned short escapeCharacter; // @synthesize escapeCharacter=_escapeCharacter;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
- (void)ef_renderSQLExpressionInto:(id)arg1;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (id)initWithValue:(id)arg1 pattern:(unsigned long long)arg2 escapeCharacter:(unsigned short)arg3;
- (id)initWithValue:(id)arg1 pattern:(unsigned long long)arg2;
- (id)initWithValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
