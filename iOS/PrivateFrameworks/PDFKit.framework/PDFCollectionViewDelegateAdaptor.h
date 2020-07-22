//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PDFKit/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, NSString;
@protocol PDFCollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface PDFCollectionViewDelegateAdaptor : NSObject <UICollectionViewDelegate>
{
    NSObject<PDFCollectionViewDelegate> *_wrappedDelegate;
    NSIndexPath *_proposedDropIndexPath;
}

@property __weak NSObject<PDFCollectionViewDelegate> *wrappedDelegate; // @synthesize wrappedDelegate=_wrappedDelegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
