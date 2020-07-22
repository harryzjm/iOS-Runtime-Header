//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MessageUI/MFMessageBodyElement_Private-Protocol.h>

@class MFMessageBodyParser, NSArray, NSString;

@interface MFMessageBodyElement : NSObject <MFMessageBodyElement_Private>
{
    MFMessageBodyParser *_parser;
    NSArray *_nodes;
    unsigned long long _quoteLevel;
    unsigned long long _externalRetainCount;
    int _validAttributes;
    int _attributes;
}

@property(nonatomic) MFMessageBodyParser *parser; // @synthesize parser=_parser;
@property(readonly, copy) NSString *description;
- (_Bool)isExternallyRetained;
- (void)releaseExternally;
- (id)retainExternally;
- (unsigned long long)quoteLevel;
- (int)valueForAttributes:(int)arg1;
- (void)_setValue:(int)arg1 forAttributes:(int)arg2;
- (_Bool)_hasValueForAttributes:(int)arg1;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
@property(retain, nonatomic) NSArray *nodes;
- (unsigned long long)getQuoteLevel;
- (void)reset;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

