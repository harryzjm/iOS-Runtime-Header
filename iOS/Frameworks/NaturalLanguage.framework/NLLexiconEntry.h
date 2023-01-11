//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NLLexiconEntry : NSObject
{
    NSString *_string;
    unsigned int _tokenID;
    unsigned long long _flags;
    double _probability;
}

+ (id)entryWithString:(id)arg1 tokenID:(unsigned int)arg2 flags:(unsigned long long)arg3 probability:(double)arg4;
- (void).cxx_destruct;
@property(readonly) double probability;
@property(readonly) unsigned long long flags;
- (unsigned int)tokenID;
@property(readonly, copy) NSString *string;
- (id)initWithString:(id)arg1 tokenID:(unsigned int)arg2 flags:(unsigned long long)arg3 probability:(double)arg4;

@end

