//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/MUPlaceHeaderViewDelegate-Protocol.h>

@class MUPlaceHeaderSectionControllerConfiguration, MUPlaceHeaderView, NSString;
@protocol MUPlaceHeaderSectionControllerDelegate, _MKPlaceItem;

__attribute__((visibility("hidden")))
@interface MUPlaceHeaderSectionController <MUPlaceHeaderViewDelegate>
{
    MUPlaceHeaderView *_headerView;
    id <_MKPlaceItem> _placeItem;
    MUPlaceHeaderSectionControllerConfiguration *_configuration;
    id <MUPlaceHeaderSectionControllerDelegate> _headerDelegate;
}

+ (double)minimalModeHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MUPlaceHeaderSectionControllerDelegate> headerDelegate; // @synthesize headerDelegate=_headerDelegate;
- (int)analyticsModuleType;
- (id)draggableContent;
- (void)_notifyDidTapParentMapItem:(id)arg1;
- (void)headerView:(id)arg1 didSelectEnclosingMapItemIdentifier:(id)arg2;
- (void)headerView:(id)arg1 didSelectEnclosingMapItem:(id)arg2;
- (void)hideTitle:(_Bool)arg1;
- (id)sectionView;
- (void)_setupHeaderView;
- (id)initWithPlaceItem:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
