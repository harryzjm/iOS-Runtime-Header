//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FigCaptureStillImageSettings;

__attribute__((visibility("hidden")))
@interface AVCapturePrepareBracketRequest : NSObject
{
    CDUnknownBlockType _completionBlock;
    FigCaptureStillImageSettings *_settings;
}

+ (id)prepareBracketRequestWithCompletionBlock:(CDUnknownBlockType)arg1 settings:(id)arg2;
@property(readonly) FigCaptureStillImageSettings *settings; // @synthesize settings=_settings;
@property(readonly) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)dealloc;
- (id)_initWithCompletionBlock:(CDUnknownBlockType)arg1 settings:(id)arg2;

@end

