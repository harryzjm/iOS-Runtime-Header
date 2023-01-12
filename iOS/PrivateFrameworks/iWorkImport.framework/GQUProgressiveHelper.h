//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GQUProgressiveHelper : NSObject
{
    const void *mClient;
    CDStruct_ba543347 *mCallBacks;
    unsigned char started;
    struct __CFString *mNumbersSheetUri;
    float mPreviewHeight;
    float mPreviewWidth;
    _Bool mStartedMainHTML;
}

- (_Bool)previewHasStreamedMainHTML;
- (void)displayGenericError:(struct __CFError *)arg1;
- (float)getPreviewHeight;
- (float)getPreviewWidth;
- (void)setPreviewHeight:(float)arg1 andWidth:(float)arg2;
- (struct __CFString *)getNumbersSheetUri;
- (void)setNumbersSheetUri:(struct __CFString *)arg1;
- (void)closeAttachment:(struct __CFURL *)arg1;
- (void)appendDataToAttachment:(struct __CFURL *)arg1 chunk:(struct __CFData *)arg2;
- (struct __CFURL *)createAttachment:(struct __CFString *)arg1 options:(struct __CFDictionary *)arg2;
- (_Bool)progressiveStreamStarted;
- (void)startDataWithOptions:(struct __CFDictionary *)arg1;
- (void)dealloc;
- (id)initWithClient:(const void *)arg1 andCallbacks:(CDStruct_ba543347 *)arg2;

@end

