//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/NSObject-Protocol.h>

@class NSString, NSURL, PDFHostViewController;

@protocol PDFHostViewControllerDelegate <NSObject>

@optional
- (void)pdfHostViewControllerExtensionProcessDidCrash:(PDFHostViewController *)arg1;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(struct CGPoint)arg3;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 didLongPressURL:(NSURL *)arg2 atLocation:(struct CGPoint)arg3;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(struct CGPoint)arg3 withAnnotationRect:(struct CGRect)arg4;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 didLongPressURL:(NSURL *)arg2 atLocation:(struct CGPoint)arg3 withAnnotationRect:(struct CGRect)arg4;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 goToPageIndex:(long long)arg2 withViewFrustum:(struct CGRect)arg3;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 goToPageIndex:(long long)arg2;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 goToURL:(NSURL *)arg2 atLocation:(struct CGPoint)arg3;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 goToURL:(NSURL *)arg2;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 findStringUpdate:(unsigned long long)arg2 done:(_Bool)arg3;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 documentDidUnlockWithPassword:(NSString *)arg2;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 updatePageCount:(long long)arg2;
- (void)pdfHostViewController:(PDFHostViewController *)arg1 updateCurrentPageIndex:(long long)arg2;
@end

