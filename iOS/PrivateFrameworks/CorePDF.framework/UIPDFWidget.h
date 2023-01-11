//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableSet, NSTimer, UILabel, UIPDFDocument;

__attribute__((visibility("hidden")))
@interface UIPDFWidget : UIView
{
    int queueIndex;
    int queueCount;
    struct {
        int byteCount;
        int currentPageCount;
        int renderJobsCount;
        _Bool memWarning;
    } queueData[60];
    int currentPageCount;
    int totalPageCount;
    int renderJobsCount;
    NSTimer *heartbeatTimer;
    UILabel *infoLabel;
    UIPDFDocument *activeDocument;
    NSMutableSet *trackedPages;
}

- (void)removedPageView:(int)arg1;
- (void)addedPageView:(int)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)heartbeat;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withDocument:(id)arg2;

@end

