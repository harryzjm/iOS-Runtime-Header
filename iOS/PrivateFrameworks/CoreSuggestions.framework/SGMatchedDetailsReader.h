//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface SGMatchedDetailsReader : NSObject
{
    NSData *_matchDetails;
    long long _arrayCount;
    unsigned int *_phraseMatches;
    long long _phraseCount;
    long long _columnCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
@property(readonly, nonatomic) long long phraseCount; // @synthesize phraseCount=_phraseCount;
- (id)initWithMatchedDetails:(id)arg1;
- (_Bool)matchAtPhraseIndex:(long long)arg1 columnIndex:(long long)arg2;

@end
