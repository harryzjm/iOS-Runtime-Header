//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class HFAccessoryDiagnosticItem;

@interface HUSendDiagnosticsToManufacturerActivity : UIActivity
{
    HFAccessoryDiagnosticItem *_diagnosticItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFAccessoryDiagnosticItem *diagnosticItem; // @synthesize diagnosticItem=_diagnosticItem;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithDiagnosticItem:(id)arg1;

@end
