//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUISlideshowViewControllerDataSource-Protocol.h>
#import <StoreKitUI/SKUISlideshowViewControllerDelegate-Protocol.h>

@class NSMutableArray, NSString, SKUIIPhoneSlideshowViewController, SKUISlideshowViewController, SKUIViewElementLayoutContext;
@protocol SKUIViewElementSlideshowDelegate;

__attribute__((visibility("hidden")))
@interface SKUIViewElementSlideshowController : NSObject <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate>
{
    id <SKUIViewElementSlideshowDelegate> _delegate;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableArray *_lockups;
    SKUISlideshowViewController *_padViewController;
    SKUIIPhoneSlideshowViewController *_phoneViewController;
    long long _selectedIndex;
    NSString *_title;
    NSMutableArray *_dataConsumers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *dataConsumers; // @synthesize dataConsumers=_dataConsumers;
@property(retain, nonatomic) SKUIViewElementLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
@property(nonatomic) __weak id <SKUIViewElementSlideshowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)slideshowViewControllerDidFinish:(id)arg1;
- (id)slideshowViewController:(id)arg1 dataConsumerAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 placeholderImageAtIndex:(long long)arg2;
- (long long)numberOfItemsInSlideshowViewController:(id)arg1;
- (void)presentFromParentViewController:(id)arg1;
@property(readonly, nonatomic) long long numberOfSlideshowItems;
- (void)dealloc;
- (id)initWithShelf:(id)arg1 selectedLockup:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
