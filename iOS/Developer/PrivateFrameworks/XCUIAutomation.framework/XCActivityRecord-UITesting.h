//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTestCore/XCActivityRecord.h>

@interface XCActivityRecord (UITesting)
+ (id)createSnapshotAsTextAttachment:(id)arg1 withBundleID:(id)arg2;
+ (id)createSnapshotAttachment:(id)arg1;
- (void)attachDiagnosticScreenRecordingForScreen:(id)arg1;
- (void)attachDiagnosticScreenRecordingForDevice:(id)arg1;
- (void)attachDiagnosticScreenshotForScreen:(id)arg1;
- (void)attachDiagnosticScreenshotForDevice:(id)arg1;
- (void)addLocalizableStringsData:(id)arg1;
- (void)addSynthesizedEvent:(id)arg1;
- (void)addSnapshotAsText:(id)arg1 withBundleID:(id)arg2;
- (void)addSnapshot:(id)arg1;
- (void)addScreenImageData:(id)arg1 forceKeepAlways:(_Bool)arg2;
@end

