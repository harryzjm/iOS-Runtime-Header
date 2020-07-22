//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSURL, UIViewController;

__attribute__((visibility("hidden")))
@interface MLULookupItemContent : NSObject
{
    _Bool _valid;
    UIViewController *_previewViewController;
    unsigned long long _commitType;
    UIViewController *_commitViewController;
    NSURL *_commitURL;
}

+ (id)contentWithText:(id)arg1 range:(struct _NSRange)arg2;
+ (id)contentWithAttachments:(id)arg1 currentAttachmentIndex:(unsigned long long)arg2;
+ (id)contentWithURL:(id)arg1 result:(struct __DDResult *)arg2 documentProperties:(id)arg3;
@property _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSURL *commitURL; // @synthesize commitURL=_commitURL;
@property(retain, nonatomic) UIViewController *commitViewController; // @synthesize commitViewController=_commitViewController;
@property(nonatomic) unsigned long long commitType; // @synthesize commitType=_commitType;
@property(retain, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNContact *contact;
- (void)dismissViewController;
- (_Bool)commitPreviewInController:(id)arg1;
- (void)setupViewControllerInCommitMode;
- (_Bool)wantsSeamlessCommit;
- (id)children;
- (id)requiredEntitlements;

@end

