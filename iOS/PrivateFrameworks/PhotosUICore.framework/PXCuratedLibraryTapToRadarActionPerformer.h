//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXGLayout;

@interface PXCuratedLibraryTapToRadarActionPerformer
{
    PXGLayout *_layoutForDiagnosticDescription;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak PXGLayout *layoutForDiagnosticDescription; // @synthesize layoutForDiagnosticDescription=_layoutForDiagnosticDescription;
- (void)performUserInteractionTask;
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (id)activitySystemImageName;
- (id)activityType;
- (id)initWithViewModel:(id)arg1 assetCollectionReference:(id)arg2 diagnosticLayout:(id)arg3;

@end
