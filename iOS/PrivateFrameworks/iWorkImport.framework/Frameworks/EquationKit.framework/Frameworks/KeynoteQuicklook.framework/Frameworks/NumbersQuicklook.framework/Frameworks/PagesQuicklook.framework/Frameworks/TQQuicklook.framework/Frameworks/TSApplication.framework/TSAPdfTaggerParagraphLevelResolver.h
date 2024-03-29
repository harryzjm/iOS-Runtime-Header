//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSAPdfTagger;

@interface TSAPdfTaggerParagraphLevelResolver : NSObject
{
    TSAPdfTagger *_tagger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak TSAPdfTagger *tagger; // @synthesize tagger=_tagger;
- (_Bool)paragraphInfo:(id)arg1 matchesParagraphInfo:(id)arg2 level:(int)arg3;
- (int)levelOfCurrentParagraph:(id *)arg1;
- (int)tagType;
- (id)initWithTagger:(id)arg1;

@end

