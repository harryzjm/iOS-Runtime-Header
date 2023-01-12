//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsUI/MUPlaceSectionControlling-Protocol.h>

@class MKUGCCallToActionViewAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, NSString, UIView, UIViewController;
@protocol GEOTransitLineItem, MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUTransitLineItemSectionController : NSObject <MUPlaceSectionControlling>
{
    _Bool _active;
    UIView *_sectionView;
    MKUGCCallToActionViewAppearance *_submissionStatus;
    id <MUInfoCardAnalyticsDelegate> _analyticsDelegate;
    id <GEOTransitLineItem> _lineItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GEOTransitLineItem> lineItem; // @synthesize lineItem=_lineItem;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus; // @synthesize submissionStatus=_submissionStatus;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (id)analyticsModule;
- (id)infoCardChildUnactionableUIElements;
- (id)infoCardChildPossibleActions;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
- (id)draggableContent;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(readonly, nonatomic) UIView *sectionView; // @synthesize sectionView=_sectionView;
- (id)initWithTransitLineItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
