//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDResources, EDWorkbook;
@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface EBState : NSObject
{
    void *mXlLinkTable;
    void *mXlNameTable;
    void *mSheetNames;
    void *mXlFormulaProcessor;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    id <TCCancelDelegate> mCancelDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancelDelegate;
- (_Bool)isCancelled;
- (void)setResources:(id)arg1;
- (id)resources;
- (void)setWorkbook:(id)arg1;
- (id)workbook;
- (void *)xlFormulaProcessor;
- (void *)sheetNames;
- (void *)xlNameTable;
- (void *)xlLinkTable;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1;

@end

