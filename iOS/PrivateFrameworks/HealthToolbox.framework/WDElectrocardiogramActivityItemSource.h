//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthToolbox/UIActivityItemSource-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramActivityItemSource : NSObject <UIActivityItemSource>
{
    NSURL *_pdfTemporaryFileURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *pdfTemporaryFileURL; // @synthesize pdfTemporaryFileURL=_pdfTemporaryFileURL;
- (void)dealloc;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithPDFData:(id)arg1 sampleDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
