//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSSNewsAnalyticsEnvelopeTracker : NSObject
{
}

+ (id)_daysSinceSubmissionDateProperty;
+ (id)_contentTypeProperty;
+ (void)_registerContentTypes:(id)arg1 withEventName:(id)arg2;
+ (void)_registerEnvelopes:(id)arg1 withEventName:(id)arg2;
+ (void)registerEnvelopeContentTypesAsDropped:(id)arg1 forReason:(unsigned long long)arg2 withError:(id)arg3;
+ (void)registerEnvelopeContentTypesAsUploaded:(id)arg1;
+ (void)registerEnvelopeContentTypesAsRetainedForUploadRetry:(id)arg1;
+ (void)registerEnvelopeContentTypesAsPreparedForUpload:(id)arg1;
+ (void)registerEnvelopesAsReceivedByUploader:(id)arg1;
+ (void)registerEnvelopesAsSubmittedToUploader:(id)arg1;
+ (void)registerEnvelopesAsCreated:(id)arg1;
+ (void)registerEnvelopeCreationAnticipatedForContentType:(int)arg1;

@end

