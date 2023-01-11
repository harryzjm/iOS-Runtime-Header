//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PagesQuicklook/NSObject-Protocol.h>

@class NSString, TSDFill, TSPObject;
@protocol TPMasterDrawableProvider, TSWPHeaderFooterProvider;

@protocol TPPageLayoutInfoProvider <NSObject>
- (NSString *)displayPageNumberForPageIndex:(unsigned long long)arg1;
- (NSString *)displayPageNumberForCharIndex:(unsigned long long)arg1;
- (_Bool)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1;
- (unsigned long long)contentFlagsForPageIndex:(unsigned long long)arg1;
- (NSString *)pageNumberFormatForSectionOnPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageCountForPageIndex:(unsigned long long)arg1;
- (unsigned long long)pageNumberForPageIndex:(unsigned long long)arg1;
- (TSPObject<TPMasterDrawableProvider> *)masterDrawableProviderForPageIndex:(unsigned long long)arg1;
- (id <TSWPHeaderFooterProvider>)headerFooterProviderForPageIndex:(unsigned long long)arg1;
- (TSDFill *)backgroundFillForPageIndex:(unsigned long long)arg1;
- (_Bool)canProvideNumberingInfoForPageIndex:(unsigned long long)arg1;
- (_Bool)canProvideInfoForPageIndex:(unsigned long long)arg1;
@end
