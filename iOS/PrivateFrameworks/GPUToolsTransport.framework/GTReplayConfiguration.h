//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GTReplayConfiguration : NSObject
{
    _Bool _forceLoadActionClear;
    _Bool _forceLoadUnusedResources;
    _Bool _forceWaitUntilCompleted;
    _Bool _disableOptimizeRestores;
    _Bool _disableHeapTextureCompression;
    _Bool _enableStopOnError;
    _Bool _enableDisplayOnDevice;
    _Bool _enableReplayFromOtherPlatforms;
    _Bool _enableValidation;
    _Bool _enableCapture;
    _Bool _enableHUD;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool enableHUD; // @synthesize enableHUD=_enableHUD;
@property(nonatomic) _Bool enableCapture; // @synthesize enableCapture=_enableCapture;
@property(nonatomic) _Bool enableValidation; // @synthesize enableValidation=_enableValidation;
@property(nonatomic) _Bool enableReplayFromOtherPlatforms; // @synthesize enableReplayFromOtherPlatforms=_enableReplayFromOtherPlatforms;
@property(nonatomic) _Bool enableDisplayOnDevice; // @synthesize enableDisplayOnDevice=_enableDisplayOnDevice;
@property(nonatomic) _Bool enableStopOnError; // @synthesize enableStopOnError=_enableStopOnError;
@property(nonatomic) _Bool disableHeapTextureCompression; // @synthesize disableHeapTextureCompression=_disableHeapTextureCompression;
@property(nonatomic) _Bool disableOptimizeRestores; // @synthesize disableOptimizeRestores=_disableOptimizeRestores;
@property(nonatomic) _Bool forceWaitUntilCompleted; // @synthesize forceWaitUntilCompleted=_forceWaitUntilCompleted;
@property(nonatomic) _Bool forceLoadUnusedResources; // @synthesize forceLoadUnusedResources=_forceLoadUnusedResources;
@property(nonatomic) _Bool forceLoadActionClear; // @synthesize forceLoadActionClear=_forceLoadActionClear;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

