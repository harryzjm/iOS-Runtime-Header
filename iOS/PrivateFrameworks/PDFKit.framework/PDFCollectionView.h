//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionView.h>

@class UIColor;
@protocol PDFCollectionViewDataSource, PDFCollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface PDFCollectionView : UICollectionView
{
    id <PDFCollectionViewDelegate> _pdfDelegate;
    id <PDFCollectionViewDataSource> _pdfDataSource;
    UIColor *_pdfBackgroundColor;
    id _delegateAdaptor;
    id _dataSourceAdaptor;
}

+ (id)instanceForPlatform;
+ (Class)classForPlatform;
@property(copy, nonatomic) UIColor *pdfBackgroundColor; // @synthesize pdfBackgroundColor=_pdfBackgroundColor;
@property(nonatomic) __weak id <PDFCollectionViewDataSource> pdfDataSource; // @synthesize pdfDataSource=_pdfDataSource;
@property(nonatomic) __weak id <PDFCollectionViewDelegate> pdfDelegate; // @synthesize pdfDelegate=_pdfDelegate;
- (void).cxx_destruct;
- (void)reloadDataAndRecenter;
- (void)setup;

@end

