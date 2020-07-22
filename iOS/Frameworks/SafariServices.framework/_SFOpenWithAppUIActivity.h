//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

#import <SafariServices/LSOpenResourceOperationDelegate-Protocol.h>

@class LSApplicationProxy, NSString;

__attribute__((visibility("hidden")))
@interface _SFOpenWithAppUIActivity : UIActivity <LSOpenResourceOperationDelegate>
{
    LSApplicationProxy *_appProxy;
    NSString *_filePath;
}

- (void).cxx_destruct;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithApplicationIdentifier:(id)arg1 andFilePath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
