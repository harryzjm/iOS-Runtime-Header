//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSEnumerator, TSKDocumentRoot, TSWPStorage;
@protocol TSKModel;

@protocol TSWPHeaderFooterProvider <NSObject>
@property(readonly, nonatomic) double bodyWidth;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property(readonly, nonatomic) NSEnumerator *headerFooterFragmentEnumerator;
@property(readonly, nonatomic) _Bool usesSingleHeaderFooter;
- (_Bool)isHeaderFooterEmpty:(long long)arg1 fragmentAtIndex:(long long)arg2;
- (_Bool)isHeaderFooterEmpty:(long long)arg1;
- (long long)headerFragmentIndexForModel:(id <TSKModel>)arg1;
- (long long)headerFooterTypeForModel:(id <TSKModel>)arg1;
- (TSWPStorage *)headerFooter:(long long)arg1 fragmentAtIndex:(long long)arg2;
@end

