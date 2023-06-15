//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProofReader/NSObject-Protocol.h>

@protocol PRErrorModeling <NSObject>

@optional
- (double)omissionErrorScoreForIntendedPrecedingCharacter:(unsigned short)arg1 omittedCharacter:(unsigned short)arg2 intendedFollowingCharacter:(unsigned short)arg3;
- (double)insertionErrorScoreForIntendedPrecedingCharacter:(unsigned short)arg1 insertedCharacter:(unsigned short)arg2 intendedFollowingCharacter:(unsigned short)arg3;
- (double)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)arg1 intendedSecondCharacter:(unsigned short)arg2;
- (double)replacementErrorScoreForIntendedCharacter:(unsigned short)arg1 actualCharacter:(unsigned short)arg2;
@end

