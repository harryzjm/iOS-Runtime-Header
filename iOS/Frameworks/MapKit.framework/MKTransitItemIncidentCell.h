//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKTransitItemIncidentView-Protocol.h>

@class MKTransitItemIncidentView, NSString;

@interface MKTransitItemIncidentCell <MKTransitItemIncidentView>
{
    MKTransitItemIncidentView *_incidentView;
}

- (void).cxx_destruct;
@property(nonatomic) long long position;
@property(nonatomic) _Bool padBottom;
- (void)configureWithMessage:(id)arg1 incident:(id)arg2 referenceDate:(id)arg3 shouldShowImage:(_Bool)arg4 inSiri:(_Bool)arg5;
- (void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(_Bool)arg3 inSiri:(_Bool)arg4;
- (void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(_Bool)arg3 inSiri:(_Bool)arg4;
- (void)_updateIncidentViewBottomOffset;
- (void)setSeparatorHidden:(_Bool)arg1;
- (void)setTrailingSeparatorInset:(double)arg1;
- (void)setLeadingSeparatorInset:(double)arg1;
- (void)_configureViews;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
