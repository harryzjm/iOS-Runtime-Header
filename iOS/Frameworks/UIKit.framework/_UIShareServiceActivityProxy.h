//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, NSUUID, UISUIActivityExtensionItemDataRequest;

__attribute__((visibility("hidden")))
@interface _UIShareServiceActivityProxy : NSObject
{
    NSUUID *_activityUUID;
    NSString *_activityType;
    long long _activityCategory;
    UISUIActivityExtensionItemDataRequest *_underlyingActivityItemDataRequest;
    Class _remoteClass;
    struct CGSize _thumbnailSize;
    CDUnknownBlockType _didFinishPreparingForExecution;
    CDUnknownBlockType _didFinishPerformingActivityHandler;
}

+ (void)forwardInvocation:(id)arg1;
+ (id)activityProxyForServiceActivityDataRequest:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType didFinishPerformingActivityHandler; // @synthesize didFinishPerformingActivityHandler=_didFinishPerformingActivityHandler;
@property(copy, nonatomic) CDUnknownBlockType didFinishPreparingForExecution; // @synthesize didFinishPreparingForExecution=_didFinishPreparingForExecution;
- (void).cxx_destruct;
- (struct CGSize)_thumbnailSize;
- (_Bool)_activitySupportsPromiseURLs;
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_embeddedActivityViewController;
- (void)_cleanup;
- (void)activityDidFinish:(_Bool)arg1 items:(id)arg2 error:(id)arg3;
- (void)activityDidFinish:(_Bool)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityViewController;
- (id)activityImage;
- (id)activityTitle;
- (_Bool)allowsEmbedding;
- (_Bool)_wantsAttachmentURLItemData;
- (_Bool)_wantsThumbnailItemData;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)activityType;
- (id)activityUUID;
- (_Bool)_isExecutedInProcess;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)initWithUnderlyingActivityItemDataRequest:(id)arg1;

@end

