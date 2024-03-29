//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSDrawables/TSDLayout.h>

@class TNPageLayoutContainer;

@interface TNPageContentLayout : TSDLayout
{
    TNPageLayoutContainer *_pageLayout;
    unsigned long long _pageNumber;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(readonly) __weak TNPageLayoutContainer *pageLayout; // @synthesize pageLayout=_pageLayout;
- (Class)repClassOverride;
- (unsigned long long)pageCount;
- (id)computeLayoutGeometry;
- (void)validate;
- (id)initWithPageLayout:(id)arg1;

@end

