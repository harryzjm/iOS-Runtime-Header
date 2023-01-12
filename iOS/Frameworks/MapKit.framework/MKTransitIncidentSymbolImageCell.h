//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKTransitItemIncidentView-Protocol.h>

@class MKTransitIncidentItemCellBackgroundView, MKTransitIncidentViewModel, NSString;

@interface MKTransitIncidentSymbolImageCell <MKTransitItemIncidentView>
{
    MKTransitIncidentItemCellBackgroundView *_backgroundView;
    _Bool _padBottom;
    long long _cellPosition;
    MKTransitIncidentViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MKTransitIncidentViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) long long cellPosition; // @synthesize cellPosition=_cellPosition;
@property(nonatomic) _Bool padBottom; // @synthesize padBottom=_padBottom;
- (void)_updateAppearance;
- (void)_configureWithMessage:(id)arg1 referenceDate:(id)arg2 lastUpdated:(id)arg3 incidentIsBlocking:(_Bool)arg4 shouldShowImage:(_Bool)arg5 inSiri:(_Bool)arg6;
- (void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(_Bool)arg3 inSiri:(_Bool)arg4;
- (void)configureWithMessage:(id)arg1 incident:(id)arg2 referenceDate:(id)arg3 shouldShowImage:(_Bool)arg4 inSiri:(_Bool)arg5;
- (void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(_Bool)arg3 inSiri:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
