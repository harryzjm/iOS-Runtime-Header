//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TITokenizationRevision : NSObject
{
    unsigned long long _revisedDocumentLocation;
    unsigned long long _branchedTokenIndex;
    unsigned long long _mergedTokenIndex;
    NSMutableArray *_branchTokens;
    struct _NSRange _originalSelectedTokenRange;
    struct _TIRevisionHistoryTokenIterator _originalIterator;
}

@property(readonly, nonatomic) NSMutableArray *branchTokens; // @synthesize branchTokens=_branchTokens;
@property(nonatomic) unsigned long long mergedTokenIndex; // @synthesize mergedTokenIndex=_mergedTokenIndex;
@property(nonatomic) unsigned long long branchedTokenIndex; // @synthesize branchedTokenIndex=_branchedTokenIndex;
@property(nonatomic) unsigned long long revisedDocumentLocation; // @synthesize revisedDocumentLocation=_revisedDocumentLocation;
@property(nonatomic) struct _TIRevisionHistoryTokenIterator originalIterator; // @synthesize originalIterator=_originalIterator;
@property(nonatomic) struct _NSRange originalSelectedTokenRange; // @synthesize originalSelectedTokenRange=_originalSelectedTokenRange;
- (void).cxx_destruct;
- (id)initWithTokenIterator:(struct _TIRevisionHistoryTokenIterator)arg1;
- (id)init;

@end

