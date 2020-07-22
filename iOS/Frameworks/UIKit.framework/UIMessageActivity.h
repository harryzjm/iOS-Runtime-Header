//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIManagedConfigurationRestrictableActivity-Protocol.h>

@class MFMessageComposeViewController, NSString;

@interface UIMessageActivity <UIManagedConfigurationRestrictableActivity>
{
    _Bool _sourceIsManaged;
    NSString *_sourceApplicationBundleID;
    MFMessageComposeViewController *_messageComposeViewController;
}

+ (id)applicationBundleID;
+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
@property(copy, nonatomic) NSString *sourceApplicationBundleID; // @synthesize sourceApplicationBundleID=_sourceApplicationBundleID;
@property(nonatomic) _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityTitle;
- (id)_bundleIdentifierForActivityImageCreation;
- (id)activityType;
- (void)dealloc;

@end

