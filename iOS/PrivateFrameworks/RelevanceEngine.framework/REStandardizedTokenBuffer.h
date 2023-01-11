//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RETokenBuffer-Protocol.h>

@class NSString, REScriptToken;
@protocol RETokenBuffer;

@interface REStandardizedTokenBuffer : NSObject <RETokenBuffer>
{
    id <RETokenBuffer> _buffer;
}

- (void).cxx_destruct;
- (void)next;
@property(readonly, nonatomic) REScriptToken *currentToken;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)_cleanTokens;
- (id)initWithTokenBuffer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
