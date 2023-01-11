//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface PSIWordEmbeddingMatch : NSObject <NSSecureCoding>
{
    NSString *_word;
    NSString *_extendedWord;
    double _score;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) double score; // @synthesize score=_score;
@property(readonly) NSString *extendedWord; // @synthesize extendedWord=_extendedWord;
@property(readonly) NSString *word; // @synthesize word=_word;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithWord:(id)arg1 extendedWord:(id)arg2 score:(double)arg3;

@end

