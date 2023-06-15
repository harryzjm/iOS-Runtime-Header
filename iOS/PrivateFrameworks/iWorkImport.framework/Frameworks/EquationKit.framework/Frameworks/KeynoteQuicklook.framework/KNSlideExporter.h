//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class KNSlideLayoutPrintHelper, NSString;

@interface KNSlideExporter
{
    KNSlideLayoutPrintHelper *_helper;
}

- (void).cxx_destruct;
- (unsigned long long)printHelper:(id)arg1 commentsPageCountForSlideNode:(id)arg2;
- (id)printHelper:(id)arg1 noteSegmentsForSlideNode:(id)arg2;
- (id)slideNodesForPrintHelper:(id)arg1;
- (_Bool)supportsPrintingComments;
- (void)setCurrentSlideNode:(id)arg1;
- (struct CGRect)boundsRect;
- (void)setup;
- (_Bool)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(_Bool)arg4;
- (struct CGRect)monoSlideRectFromScaledClipRect:(struct CGRect)arg1 outScaledClipRect:(struct CGRect *)arg2;
- (_Bool)monoShouldPrintComments;
- (void)p_preparePrintHelperIfNeeded;
- (_Bool)incrementPage;
- (unsigned long long)pageCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

