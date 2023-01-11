//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/PKModularService-Protocol.h>

@class NSString;

@interface CSExtension_PKSubsystem : NSObject <PKModularService>
{
}

+ (id)initForPlugInKit;
+ (id)sharedInstance;
- (void)endUsing:(id)arg1;
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;
- (id)principleClassFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
