//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class NSString;
@protocol _MKInfoCardAnalyticsDelegate, _MKPlaceItem;

__attribute__((visibility("hidden")))
@interface MKPlaceMessageViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    _Bool _canUseMessageID;
    id <_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
    id <_MKPlaceItem> _placeItem;
}

@property(retain, nonatomic) id <_MKPlaceItem> placeItem; // @synthesize placeItem=_placeItem;
@property(nonatomic) __weak id <_MKInfoCardAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)loadRow;
- (void)viewDidLoad;
- (id)initWithPlaceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

