//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNPRSPosterConfiguration, NSString, TPInComingCallUISnapshotViewController;

__attribute__((visibility("hidden")))
@interface CNIncomingCallSnapshotViewController : UIViewController
{
    CNPRSPosterConfiguration *_posterConfiguration;
    NSString *_nameString;
    TPInComingCallUISnapshotViewController *_snapshotViewController;
}

+ (void)incomingCallSnapshotForConfiguration:(id)arg1 style:(long long)arg2 nameString:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)incomingCallSnapshotForConfiguration:(id)arg1 nameString:(id)arg2 includingCallButtons:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)incomingCallSnapshotForPosterArchiveData:(id)arg1 nameString:(id)arg2 includingCallButtons:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)incomingCallPlaceholderSnapshotForNameString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (struct CGRect)horizontalNameLabelBoundingRectForName:(id)arg1 window:(id)arg2;
+ (struct CGRect)verticalNameLabelBoundingRectForName:(id)arg1 window:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TPInComingCallUISnapshotViewController *snapshotViewController; // @synthesize snapshotViewController=_snapshotViewController;
@property(retain, nonatomic) NSString *nameString; // @synthesize nameString=_nameString;
@property(retain, nonatomic) CNPRSPosterConfiguration *posterConfiguration; // @synthesize posterConfiguration=_posterConfiguration;
- (void)setupCallSnapshotViewControllerWithConfiguration:(id)arg1 andNameString:(id)arg2;
- (id)initWithConfiguration:(id)arg1 nameString:(id)arg2;

@end

